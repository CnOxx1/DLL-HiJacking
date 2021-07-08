


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 头文件
#include <Windows.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
#pragma comment(linker, "/EXPORT:CreateHipsClient=AheadLib_CreateHipsClient,@1")
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 原函数地址指针
PVOID pfnCreateHipsClient;
PVOID pfn_StartListen2_Communicator__YAPEAXPEBD_Z;
PVOID pfn_StartListen3_Communicator__YAPEAXPEBDI_Z;
PVOID pfn_StartListen_Communicator__YAHPEBD_Z;
PVOID pfn_StopListen2_Communicator__YAXPEAX_Z;
PVOID pfn_StopListen_Communicator__YAHXZ;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 宏定义
#define EXTERNC extern "C"
#define NAKED 
#define EXPORT __declspec(dllexport)

#define ALCPP EXPORT NAKED
#define ALSTD EXTERNC EXPORT NAKED void __stdcall
#define ALCFAST EXTERNC EXPORT NAKED void __fastcall
#define ALCDECL EXTERNC NAKED void __cdecl
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// AheadLib 命名空间
namespace AheadLib
{
	HMODULE m_hModule = NULL;	// 原始模块句柄
	DWORD m_dwReturn[6] = {0};	// 原始函数返回地址


	// 获取原始函数地址
	FARPROC WINAPI GetAddress(PCSTR pszProcName)
	{
		FARPROC fpAddress;
		CHAR szProcName[16];
		TCHAR tzTemp[MAX_PATH];

		fpAddress = GetProcAddress(m_hModule, pszProcName);
		if (fpAddress == NULL)
		{
			if (HIWORD(pszProcName) == 0)
			{
				wsprintfA(szProcName, "%d", pszProcName);
				pszProcName = szProcName;
			}

			wsprintf(tzTemp, TEXT("无法找到函数 %hs，程序无法正常运行。"), pszProcName);
			MessageBox(NULL, tzTemp, TEXT("AheadLib"), MB_ICONSTOP);
			ExitProcess(-2);
		}

		return fpAddress;
	}

	// 初始化原始函数地址指针
	inline VOID WINAPI InitializeAddresses()
	{
		pfnCreateHipsClient = GetAddress("CreateHipsClient");
		pfn_StartListen2_Communicator__YAPEAXPEBD_Z = GetAddress("?StartListen2@Communicator@@YAPEAXPEBD@Z");
		pfn_StartListen3_Communicator__YAPEAXPEBDI_Z = GetAddress("?StartListen3@Communicator@@YAPEAXPEBDI@Z");
		pfn_StartListen_Communicator__YAHPEBD_Z = GetAddress("?StartListen@Communicator@@YAHPEBD@Z");
		pfn_StopListen2_Communicator__YAXPEAX_Z = GetAddress("?StopListen2@Communicator@@YAXPEAX@Z");
		pfn_StopListen_Communicator__YAHXZ = GetAddress("?StopListen@Communicator@@YAHXZ");
	}

	// 加载原始模块
	inline BOOL WINAPI Load()
	{
		TCHAR tzPath[MAX_PATH];
		TCHAR tzTemp[MAX_PATH * 2];

		lstrcpy(tzPath, TEXT("360rpOrg.dll"));
		m_hModule = LoadLibrary(tzPath);
		if (m_hModule == NULL)
		{
			wsprintf(tzTemp, TEXT("无法加载 %s，程序无法正常运行。"), tzPath);
			MessageBox(NULL, tzTemp, TEXT("AheadLib"), MB_ICONSTOP);
		}
		else
		{
			InitializeAddresses();
		}

		return (m_hModule != NULL);	
	}
		
	// 释放原始模块
	inline VOID WINAPI Free()
	{
		if (m_hModule)
		{
			FreeLibrary(m_hModule);
		}
	}
}
using namespace AheadLib;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 入口函数
BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, PVOID pvReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hModule);

		return Load();
	}
	else if (dwReason == DLL_PROCESS_DETACH)
	{
		Free();
	}

	return TRUE;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

extern "C" extern void prevFunc();
extern "C" extern void setFunc(LPVOID p);
extern "C" extern void endFunc();

#pragma optimize( "", off )

template< class T > T* retT()
{
	return new T;
}




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CreateHipsClient(void)
{
	prevFunc();
	setFunc(&pfnCreateHipsClient);
	endFunc();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
namespace Communicator
{
	ALCPP void * __ptr64 __cdecl StartListen2(char const * __ptr64) 
	{
		prevFunc();
		setFunc(&pfn_StartListen2_Communicator__YAPEAXPEBD_Z);
		endFunc();
		return *retT<void * __ptr64>();
	}
	ALCPP void * __ptr64 __cdecl StartListen3(char const * __ptr64,unsigned int) 
	{
		prevFunc();
		setFunc(&pfn_StartListen3_Communicator__YAPEAXPEBDI_Z);
		endFunc();
		return *retT<void * __ptr64>();
	}
	ALCPP int __cdecl StartListen(char const * __ptr64) 
	{
		prevFunc();
		setFunc(&pfn_StartListen_Communicator__YAHPEBD_Z);
		endFunc();
		return *retT<int>();
	}
	ALCPP void __cdecl StopListen2(void * __ptr64) 
	{
		prevFunc();
		setFunc(&pfn_StopListen2_Communicator__YAXPEAX_Z);
		endFunc();
	}
	ALCPP int __cdecl StopListen(void) 
	{
		prevFunc();
		setFunc(&pfn_StopListen_Communicator__YAHXZ);
		endFunc();
		return *retT<int>();
	}
}
