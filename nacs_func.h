#define NO_WIN32_LEAN_AND_MEAN     //   ��   Windows   ͷ���ų�����ʹ�õ�����
#include <shlobj.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string>
#include <windows.h>
#include <winioctl.h>
#define NACS_SK "$RACS2010RHS04RACS$"
long getHardDriveComputerID();
DWORD   verifyProcess(LPCSTR   lpszProcessName) ;
bool   create_windows_shotcut   (  LPCWSTR   szPath,  LPSTR   szLink,LPCWSTR szArguments,LPCWSTR szIcon);
