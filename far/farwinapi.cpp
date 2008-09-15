/*
farwinapi.cpp

������� ������ ��������� WinAPI �������

*/

#include "headers.hpp"
#pragma hdrstop

#include "global.hpp"
#include "fn.hpp"

/* $ 26.01.2003 IS
    + FAR_DeleteFile ������ DeleteFile, FAR_RemoveDirectory ������
      RemoveDirectory, ������� � ������ �� ������������ ��� ��������
      �������������� ������ � ���������.
*/
// ������� ����, ��� �������� ���������� DeleteFile
BOOL WINAPI FAR_DeleteFile(const char *FileName)
{
  // IS: ������� ��������� ������� ����������� ��������, �����
  // IS: �� ������������ ������ ������������
  BOOL rc=DeleteFile(FileName);
  if(!rc) // IS: ��� ��� ������ ������������ � ������...
  {
    SetLastError((_localLastError = GetLastError()));
    if(CheckErrorForProcessed(_localLastError))
    {
      char FullName[NM*2]="\\\\?\\";
      // IS: +4 - ����� �� �������� ���� "\\?\"
      if(ConvertNameToFull(FileName, FullName+4, sizeof(FullName)-4) < sizeof(FullName)-4)
      {
        // IS: ��������, � ����� ��� ���� ���� ������ ������� � ����
        if( (FullName[4]=='/' && FullName[5]=='/') ||
            (FullName[4]=='\\' && FullName[5]=='\\') )
          rc=DeleteFile(FullName+4);
        // IS: ������ �������� � ���� ���, ������� ���������� ����
        else
          rc=DeleteFile(FullName);
      }
    }
  }
  return rc;
}

// ������� �������, ��� �������� ���������� RemoveDirectory
BOOL WINAPI FAR_RemoveDirectory(const char *DirName)
{
  // IS: ������� ��������� ������� ����������� ��������, �����
  // IS: �� ������������ ������ ������������
  BOOL rc=RemoveDirectory(DirName);
  if(!rc) // IS: ��� ��� ������ ������������ � ������...
  {
    SetLastError((_localLastError = GetLastError()));
    if(CheckErrorForProcessed(_localLastError))
    {
      char FullName[NM+16]="\\\\?\\";
      // IS: +4 - ����� �� �������� ���� "\\?\"
      if(ConvertNameToFull(DirName, FullName+4, sizeof(FullName)-4) < sizeof(FullName)-4)
      {
        // IS: ��������, � ����� ��� ���� ���� ������ ������� � ����
        if( (FullName[4]=='/' && FullName[5]=='/') ||
            (FullName[4]=='\\' && FullName[5]=='\\') )
          rc=RemoveDirectory(FullName+4);
        // IS: ������ �������� � ���� ���, ������� ���������� ����
        else
          rc=RemoveDirectory(FullName);
      }
    }
  }
  return rc;
}
/* IS $ */

/* $ 26.01.2003 IS
     + FAR_CreateFile - ������� ��� CreateFile, ������� ������������ ������
       �� ������ CreateFile
*/
// ������� ����, ��� �������� ���������� CreateFile
HANDLE WINAPI FAR_CreateFile(
    LPCTSTR lpFileName,     // pointer to name of the file
    DWORD dwDesiredAccess,  // access (read-write) mode
    DWORD dwShareMode,      // share mode
    LPSECURITY_ATTRIBUTES lpSecurityAttributes, // pointer to security attributes
    DWORD dwCreationDistribution, // how to create
    DWORD dwFlagsAndAttributes,   // file attributes
    HANDLE hTemplateFile          // handle to file with attributes to copy
   )
{
  HANDLE hFile=CreateFile(lpFileName,dwDesiredAccess,dwShareMode,
    lpSecurityAttributes, dwCreationDistribution,dwFlagsAndAttributes,
    hTemplateFile);
  return hFile;
}
/* IS $ */

void WINAPI SetFileApisTo(int Type)
{
  switch(Type)
  {
    case APIS2OEM:
      SetFileApisToOEM();
      break;
    case APIS2ANSI:
      SetFileApisToANSI();
      break;
  }
}

BOOL WINAPI FAR_OemToCharBuff(LPCSTR lpszSrc,LPTSTR lpszDst,DWORD cchDstLength)
{
#if defined(FAR_ANSI)
  if(Opt.FarAnsi)
  {
    if(lpszDst != lpszSrc)
      memmove(lpszDst,lpszSrc,cchDstLength);
    return TRUE;
  }
#endif
  return OemToCharBuff(lpszSrc,lpszDst,cchDstLength);
}

BOOL WINAPI FAR_CharToOemBuff(LPCSTR lpszSrc,LPTSTR lpszDst,DWORD cchDstLength)
{
#if defined(FAR_ANSI)
  if(Opt.FarAnsi)
  {
    if(lpszDst != lpszSrc)
      memmove(lpszDst,lpszSrc,cchDstLength);
    return TRUE;
  }
#endif
  return CharToOemBuff(lpszSrc,lpszDst,cchDstLength);
}


BOOL WINAPI FAR_OemToChar(LPCSTR lpszSrc,LPTSTR lpszDst)
{
#if defined(FAR_ANSI)
  if(Opt.FarAnsi)
  {
    if(lpszDst != lpszSrc)
      memmove(lpszDst,lpszSrc,strlen(lpszSrc)+1);
    return TRUE;
  }
#endif
  return OemToChar(lpszSrc,lpszDst);
}

BOOL WINAPI FAR_CharToOem(LPCSTR lpszSrc,LPTSTR lpszDst)
{
#if defined(FAR_ANSI)
  if(Opt.FarAnsi)
  {
    if(lpszDst != lpszSrc)
      memmove(lpszDst,lpszSrc,strlen(lpszSrc)+1);
    return TRUE;
  }
#endif
  return CharToOem(lpszSrc,lpszDst);
}

HANDLE FAR_FindFirstFile(const char *FileName,LPWIN32_FIND_DATA lpFindFileData,bool ScanSymLink)
{
	WIN32_FIND_DATA FindFileData;
	HANDLE hFindFile=FindFirstFile(FileName,&FindFileData);
	if(hFindFile==INVALID_HANDLE_VALUE && ScanSymLink)
	{
		char RealName[1024];
		ConvertNameToReal(FileName,RealName,sizeof(RealName));
		hFindFile=FindFirstFile(RealName,&FindFileData);
	}
	if(hFindFile!=INVALID_HANDLE_VALUE)
		*lpFindFileData=FindFileData;
	return hFindFile;
}

BOOL FAR_FindNextFile(HANDLE hFindFile, LPWIN32_FIND_DATA lpFindFileData)
{
	return FindNextFile(hFindFile,lpFindFileData);
}

BOOL FAR_FindClose(HANDLE hFindFile)
{
	return FindClose(hFindFile);
}

BOOL GetFileWin32FindData(const char *Name,WIN32_FIND_DATA *FInfo,bool ScanSymLink)
{
  WIN32_FIND_DATA WFD_Info;

  //UINT  PrevErrMode;
  // ���� �� ���������� ������ ������, ���� ���� �������.
  //PrevErrMode = SetErrorMode(SEM_FAILCRITICALERRORS);
  HANDLE FindHandle=FAR_FindFirstFile(Name,&WFD_Info,ScanSymLink);
  //SetErrorMode(PrevErrMode);
  if(FindHandle!=INVALID_HANDLE_VALUE)
  {
    FAR_FindClose(FindHandle);
    if(FInfo)
      *FInfo=WFD_Info;
    return TRUE;
  }
  else if(FInfo)
  {
    memset(FInfo,0,sizeof(WIN32_FIND_DATA));
    FInfo->dwFileAttributes=(DWORD)-1;
  }
  return FALSE;
}


BOOL FAR_CopyFile(
    LPCTSTR lpExistingFileName, // pointer to name of an existing file
    LPCTSTR lpNewFileName,  // pointer to filename to copy to
    BOOL bFailIfExists  // flag for operation if file exists
   )
{
  return CopyFile(lpExistingFileName,lpNewFileName,bFailIfExists);
}

typedef BOOL (WINAPI *COPYFILEEX)(LPCTSTR lpExistingFileName,
            LPCTSTR lpNewFileName,void *lpProgressRoutine,
            LPVOID lpData,LPBOOL pbCancel,DWORD dwCopyFlags);
static COPYFILEEX pCopyFileEx=NULL;

BOOL Init_CopyFileEx(void)
{
  static int LoadAttempt=FALSE;

  if (!LoadAttempt && WinVer.dwPlatformId==VER_PLATFORM_WIN32_NT)
  {
    HMODULE hKernel=GetModuleHandle("KERNEL32.DLL");
    if (hKernel)
      pCopyFileEx=(COPYFILEEX)GetProcAddress(hKernel,"CopyFileExA");
    IsFn_FAR_CopyFileEx=pCopyFileEx != NULL;
    LoadAttempt=TRUE;
  }
  return IsFn_FAR_CopyFileEx;
}

BOOL FAR_CopyFileEx(LPCTSTR lpExistingFileName,
            LPCTSTR lpNewFileName,void *lpProgressRoutine,
            LPVOID lpData,LPBOOL pbCancel,DWORD dwCopyFlags)
{
  if(pCopyFileEx)
    return pCopyFileEx(lpExistingFileName,lpNewFileName,lpProgressRoutine,lpData,pbCancel,dwCopyFlags);
  return FALSE;
}

BOOL FAR_MoveFile(
    LPCTSTR lpExistingFileName, // address of name of the existing file
    LPCTSTR lpNewFileName   // address of new name for the file
   )
{
  return MoveFile(lpExistingFileName,lpNewFileName);
}

BOOL FAR_MoveFileEx(
    LPCTSTR lpExistingFileName, // address of name of the existing file
    LPCTSTR lpNewFileName,   // address of new name for the file
    DWORD dwFlags   // flag to determine how to move file
   )
{
  return MoveFileEx(lpExistingFileName,lpNewFileName,dwFlags);
}

BOOL MoveFileThroughTemp(const char *Src, const char *Dest)
{
  char Temp[NM];
  BOOL rc = FALSE;
  if(FarMkTempEx(Temp, NULL, FALSE))
  {
    if(MoveFile(Src, Temp))
      rc = MoveFile(Temp, Dest);
  }
  return rc;
}

BOOL WINAPI FAR_GlobalMemoryStatusEx(LPMEMORYSTATUSEX lpBuffer)
{
  typedef BOOL (WINAPI *PGlobalMemoryStatusEx)(LPMEMORYSTATUSEX lpBuffer);
  static PGlobalMemoryStatusEx pGlobalMemoryStatusEx=NULL;
  BOOL Ret=FALSE;

  if(!pGlobalMemoryStatusEx)
    pGlobalMemoryStatusEx = (PGlobalMemoryStatusEx)GetProcAddress(GetModuleHandle("KERNEL32"),"GlobalMemoryStatusEx");

  if(pGlobalMemoryStatusEx)
  {
    MEMORYSTATUSEX ms;
    ms.dwLength=sizeof(ms);
    Ret=pGlobalMemoryStatusEx(&ms);
    if(Ret)
      memcpy(lpBuffer,&ms,sizeof(ms));
  }
  else
  {
    MEMORYSTATUS ms;
    ms.dwLength=sizeof(ms);
    GlobalMemoryStatus(&ms);
    lpBuffer->dwLength=sizeof(MEMORYSTATUSEX);
    lpBuffer->dwMemoryLoad=ms.dwMemoryLoad;
    lpBuffer->ullTotalPhys           =(DWORDLONG)ms.dwTotalPhys;
    lpBuffer->ullAvailPhys           =(DWORDLONG)ms.dwAvailPhys;
    lpBuffer->ullTotalPageFile       =(DWORDLONG)ms.dwTotalPageFile;
    lpBuffer->ullAvailPageFile       =(DWORDLONG)ms.dwAvailPageFile;
    lpBuffer->ullTotalVirtual        =(DWORDLONG)ms.dwTotalVirtual;
    lpBuffer->ullAvailVirtual        =(DWORDLONG)ms.dwAvailVirtual;
    lpBuffer->ullAvailExtendedVirtual=0;
    Ret=TRUE;
  }
  return Ret;
}

BOOL FAR_GetFileSize (HANDLE hFile, unsigned __int64 *pSize)
{
  DWORD dwHi, dwLo;

  dwLo = GetFileSize (hFile, &dwHi);

  int nError = GetLastError();
  SetLastError (nError);

  if ( (dwLo == INVALID_FILE_SIZE) && (nError != NO_ERROR) )
    return FALSE;
  else
  {
    if ( pSize )
    *pSize = dwHi*_ui64(0x100000000)+dwLo;

    return TRUE;
  }
}

BOOL WINAPI FAR_SetFilePointerEx(HANDLE hFile,LARGE_INTEGER liDistanceToMove,PLARGE_INTEGER lpNewFilePointer,DWORD dwMoveMethod)
{
  typedef BOOL (WINAPI *PSetFilePointerEx)(HANDLE hFile,LARGE_INTEGER liDistanceToMove,PLARGE_INTEGER lpNewFilePointer,DWORD dwMoveMethod);
  static PSetFilePointerEx pSetFilePointerEx=NULL;

  if(!pSetFilePointerEx)
    pSetFilePointerEx=(PSetFilePointerEx)GetProcAddress(GetModuleHandleW(L"KERNEL32.DLL"),"SetFilePointerEx");

  if(pSetFilePointerEx)
  {
    return pSetFilePointerEx(hFile,liDistanceToMove,lpNewFilePointer,dwMoveMethod);
  }
  else
  {
    LONG HighPart=liDistanceToMove.u.HighPart;
    DWORD LowPart=SetFilePointer(hFile,liDistanceToMove.u.LowPart,&HighPart,dwMoveMethod);
    if(LowPart==INVALID_SET_FILE_POINTER && GetLastError()!=NO_ERROR)
      return FALSE;
    if(lpNewFilePointer)
    {
      lpNewFilePointer->u.HighPart=HighPart;
      lpNewFilePointer->u.LowPart=LowPart;
    }
    return TRUE;
  }
}
