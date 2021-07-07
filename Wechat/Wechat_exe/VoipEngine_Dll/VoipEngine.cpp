


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 头文件
#include <Windows.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
#pragma comment(linker, "/EXPORT:CreateChannelInstance=_AheadLib_CreateChannelInstance,@53")
#pragma comment(linker, "/EXPORT:CreateEngineInstance=_AheadLib_CreateEngineInstance,@54")
#pragma comment(linker, "/EXPORT:DestroyEngineInstance=_AheadLib_DestroyEngineInstance,@55")
#pragma comment(linker, "/EXPORT:MMTWriteLog=_AheadLib_MMTWriteLog,@56")
#pragma comment(linker, "/EXPORT:SKP_Silk_SDK_Decode=_AheadLib_SKP_Silk_SDK_Decode,@57")
#pragma comment(linker, "/EXPORT:SKP_Silk_SDK_Get_Decoder_Size=_AheadLib_SKP_Silk_SDK_Get_Decoder_Size,@58")
#pragma comment(linker, "/EXPORT:SKP_Silk_SDK_InitDecoder=_AheadLib_SKP_Silk_SDK_InitDecoder,@59")
#pragma comment(linker, "/EXPORT:___ASSERT=_AheadLib___ASSERT,@60")
#pragma comment(linker, "/EXPORT:getWxGFInfo=_AheadLib_getWxGFInfo,@61")
#pragma comment(linker, "/EXPORT:isWxGF=_AheadLib_isWxGF,@62")
#pragma comment(linker, "/EXPORT:wxam2pic=_AheadLib_wxam2pic,@63")
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 原函数地址指针
PVOID pfn__0IChannelLogWriter__QAE_$$QAV0__Z;
PVOID pfn__0IChannelLogWriter__QAE_ABV0__Z;
PVOID pfn__0IChannelLogWriter__QAE_XZ;
PVOID pfn__0IMultiTalkMgr_MultiTalk__QAE_PAVIMVQQEngine___Z;
PVOID pfn__0IMultiTalkObserver_MultiTalk__QAE_$$QAV01__Z;
PVOID pfn__0IMultiTalkObserver_MultiTalk__QAE_ABV01__Z;
PVOID pfn__0IMultiTalkObserver_MultiTalk__QAE_XZ;
PVOID pfn__1IMultiTalkMgr_MultiTalk__QAE_XZ;
PVOID pfn__4CVoipEngine__QAEAAV0_$$QAV0__Z;
PVOID pfn__4CVoipEngine__QAEAAV0_ABV0__Z;
PVOID pfn__4IChannelLogWriter__QAEAAV0_$$QAV0__Z;
PVOID pfn__4IChannelLogWriter__QAEAAV0_ABV0__Z;
PVOID pfn__4ILogWriter__QAEAAV0_$$QAV0__Z;
PVOID pfn__4ILogWriter__QAEAAV0_ABV0__Z;
PVOID pfn__4IMultiTalkMgr_MultiTalk__QAEAAV01_ABV01__Z;
PVOID pfn__4IMultiTalkObserver_MultiTalk__QAEAAV01_$$QAV01__Z;
PVOID pfn__4IMultiTalkObserver_MultiTalk__QAEAAV01_ABV01__Z;
PVOID pfn_Close_IMultiTalkMgr_MultiTalk__QAEHXZ;
PVOID pfn_DisableLogWriter_ILogWriter__SAXXZ;
PVOID pfn_EnableLogWriter_ILogWriter__SAXXZ;
PVOID pfn_GetAudioData_IMultiTalkMgr_MultiTalk__QAEHPAEG_Z;
PVOID pfn_GetAudioFormat_IMultiTalkMgr_MultiTalk__QAEHPAH0_Z;
PVOID pfn_GetChannelBytes_IMultiTalkMgr_MultiTalk__QAEXAAH0_Z;
PVOID pfn_GetInviteInfo_IMultiTalkMgr_MultiTalk__QAEXPAPAXPAH_Z;
PVOID pfn_GetPolicyValue_IMultiTalkMgr_MultiTalk__SAHW4MultiTalkGeneralPolicy_2_PAIH_Z;
PVOID pfn_GetScreenData_IMultiTalkMgr_MultiTalk__QAEHPAEPAH1111_Z;
PVOID pfn_GetVideoData_IMultiTalkMgr_MultiTalk__QAEHPAH0000_Z;
PVOID pfn_GetVoiceActivity_IMultiTalkMgr_MultiTalk__QAEHH_Z;
PVOID pfn_MMTGetIPv4Int_MMTinyLib__YAIPBD_Z;
PVOID pfn_MMTSetLogLevel_MMTinyLib__YAXH_Z;
PVOID pfn_MMTSetLogWriter_MMTinyLib__YAXP6AXHPBDH00H_Z_Z;
PVOID pfn_MMTWriteLog_MMTinyLib__YAXHPBDH00ZZ;
PVOID pfn_OnMemberChanged_IMultiTalkMgr_MultiTalk__QAEXABV_$vector_HV_$allocator_H_std___std___Z;
PVOID pfn_OnNetworkChange_IMultiTalkMgr_MultiTalk__QAEXH_Z;
PVOID pfn_Open_IMultiTalkMgr_MultiTalk__QAEHPAVIMultiTalkObserver_2_III_KPAUSvrAddrArray_MP_2_IABV_$vector_HV_$allocator_H_std___std__PAEH_NH2HHH4PAIHHI_Z;
PVOID pfn_Redirect_IMultiTalkMgr_MultiTalk__QAEHPAUSvrAddrArray_MP_2_0H_Z;
PVOID pfn_SendAudio_IMultiTalkMgr_MultiTalk__QAEHPAEG_Z;
PVOID pfn_SendScreen_IMultiTalkMgr_MultiTalk__QAEHPAEHPAX_Z;
PVOID pfn_SendVideo_IMultiTalkMgr_MultiTalk__QAEHHPAEHPAX_Z;
PVOID pfn_SetAVEncryptType_IMultiTalkMgr_MultiTalk__QAEXHH_Z;
PVOID pfn_SetAppCmd_IMultiTalkMgr_MultiTalk__QAEHHPAEH_Z;
PVOID pfn_SetEngintInfo_IMultiTalkMgr_MultiTalk__QAEXPAXH_Z;
PVOID pfn_SetLogWriter_ILogWriter__SAHPAVIChannelLogWriter__H_Z;
PVOID pfn_SetSpeakerStatus_IMultiTalkMgr_MultiTalk__QAEXH_Z;
PVOID pfn_TransScreen_IMultiTalkMgr_MultiTalk__QAEHPAEPAX01_Z;
PVOID pfn_TransVideo_IMultiTalkMgr_MultiTalk__QAEHPAEHPAX0PAH2_Z;
PVOID pfn_UnSetLogWriter_ILogWriter__SAHPAVIChannelLogWriter___Z;
PVOID pfn___autoclassinit2_IMultiTalkMgr_MultiTalk__QAEXI_Z;
PVOID pfn_getEngineInfo_IMultiTalkMgr_MultiTalk__QAEPAUMVQQEngineInfo__XZ;
PVOID pfn_getTotalBytes_IMultiTalkMgr_MultiTalk__QAEHXZ;
PVOID pfnCreateChannelInstance;
PVOID pfnCreateEngineInstance;
PVOID pfnDestroyEngineInstance;
PVOID pfnMMTWriteLog;
PVOID pfnSKP_Silk_SDK_Decode;
PVOID pfnSKP_Silk_SDK_Get_Decoder_Size;
PVOID pfnSKP_Silk_SDK_InitDecoder;
PVOID pfn__ASSERT;
PVOID pfngetWxGFInfo;
PVOID pfnisWxGF;
PVOID pfnwxam2pic;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 宏定义
#define EXTERNC extern "C"
#define NAKED __declspec(naked)
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
	DWORD m_dwReturn[63] = {0};	// 原始函数返回地址


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
		pfn__0IChannelLogWriter__QAE_$$QAV0__Z = GetAddress("??0IChannelLogWriter@@QAE@$$QAV0@@Z");
		pfn__0IChannelLogWriter__QAE_ABV0__Z = GetAddress("??0IChannelLogWriter@@QAE@ABV0@@Z");
		pfn__0IChannelLogWriter__QAE_XZ = GetAddress("??0IChannelLogWriter@@QAE@XZ");
		pfn__0IMultiTalkMgr_MultiTalk__QAE_PAVIMVQQEngine___Z = GetAddress("??0IMultiTalkMgr@MultiTalk@@QAE@PAVIMVQQEngine@@@Z");
		pfn__0IMultiTalkObserver_MultiTalk__QAE_$$QAV01__Z = GetAddress("??0IMultiTalkObserver@MultiTalk@@QAE@$$QAV01@@Z");
		pfn__0IMultiTalkObserver_MultiTalk__QAE_ABV01__Z = GetAddress("??0IMultiTalkObserver@MultiTalk@@QAE@ABV01@@Z");
		pfn__0IMultiTalkObserver_MultiTalk__QAE_XZ = GetAddress("??0IMultiTalkObserver@MultiTalk@@QAE@XZ");
		pfn__1IMultiTalkMgr_MultiTalk__QAE_XZ = GetAddress("??1IMultiTalkMgr@MultiTalk@@QAE@XZ");
		pfn__4CVoipEngine__QAEAAV0_$$QAV0__Z = GetAddress("??4CVoipEngine@@QAEAAV0@$$QAV0@@Z");
		pfn__4CVoipEngine__QAEAAV0_ABV0__Z = GetAddress("??4CVoipEngine@@QAEAAV0@ABV0@@Z");
		pfn__4IChannelLogWriter__QAEAAV0_$$QAV0__Z = GetAddress("??4IChannelLogWriter@@QAEAAV0@$$QAV0@@Z");
		pfn__4IChannelLogWriter__QAEAAV0_ABV0__Z = GetAddress("??4IChannelLogWriter@@QAEAAV0@ABV0@@Z");
		pfn__4ILogWriter__QAEAAV0_$$QAV0__Z = GetAddress("??4ILogWriter@@QAEAAV0@$$QAV0@@Z");
		pfn__4ILogWriter__QAEAAV0_ABV0__Z = GetAddress("??4ILogWriter@@QAEAAV0@ABV0@@Z");
		pfn__4IMultiTalkMgr_MultiTalk__QAEAAV01_ABV01__Z = GetAddress("??4IMultiTalkMgr@MultiTalk@@QAEAAV01@ABV01@@Z");
		pfn__4IMultiTalkObserver_MultiTalk__QAEAAV01_$$QAV01__Z = GetAddress("??4IMultiTalkObserver@MultiTalk@@QAEAAV01@$$QAV01@@Z");
		pfn__4IMultiTalkObserver_MultiTalk__QAEAAV01_ABV01__Z = GetAddress("??4IMultiTalkObserver@MultiTalk@@QAEAAV01@ABV01@@Z");
		pfn_Close_IMultiTalkMgr_MultiTalk__QAEHXZ = GetAddress("?Close@IMultiTalkMgr@MultiTalk@@QAEHXZ");
		pfn_DisableLogWriter_ILogWriter__SAXXZ = GetAddress("?DisableLogWriter@ILogWriter@@SAXXZ");
		pfn_EnableLogWriter_ILogWriter__SAXXZ = GetAddress("?EnableLogWriter@ILogWriter@@SAXXZ");
		pfn_GetAudioData_IMultiTalkMgr_MultiTalk__QAEHPAEG_Z = GetAddress("?GetAudioData@IMultiTalkMgr@MultiTalk@@QAEHPAEG@Z");
		pfn_GetAudioFormat_IMultiTalkMgr_MultiTalk__QAEHPAH0_Z = GetAddress("?GetAudioFormat@IMultiTalkMgr@MultiTalk@@QAEHPAH0@Z");
		pfn_GetChannelBytes_IMultiTalkMgr_MultiTalk__QAEXAAH0_Z = GetAddress("?GetChannelBytes@IMultiTalkMgr@MultiTalk@@QAEXAAH0@Z");
		pfn_GetInviteInfo_IMultiTalkMgr_MultiTalk__QAEXPAPAXPAH_Z = GetAddress("?GetInviteInfo@IMultiTalkMgr@MultiTalk@@QAEXPAPAXPAH@Z");
		pfn_GetPolicyValue_IMultiTalkMgr_MultiTalk__SAHW4MultiTalkGeneralPolicy_2_PAIH_Z = GetAddress("?GetPolicyValue@IMultiTalkMgr@MultiTalk@@SAHW4MultiTalkGeneralPolicy@2@PAIH@Z");
		pfn_GetScreenData_IMultiTalkMgr_MultiTalk__QAEHPAEPAH1111_Z = GetAddress("?GetScreenData@IMultiTalkMgr@MultiTalk@@QAEHPAEPAH1111@Z");
		pfn_GetVideoData_IMultiTalkMgr_MultiTalk__QAEHPAH0000_Z = GetAddress("?GetVideoData@IMultiTalkMgr@MultiTalk@@QAEHPAH0000@Z");
		pfn_GetVoiceActivity_IMultiTalkMgr_MultiTalk__QAEHH_Z = GetAddress("?GetVoiceActivity@IMultiTalkMgr@MultiTalk@@QAEHH@Z");
		pfn_MMTGetIPv4Int_MMTinyLib__YAIPBD_Z = GetAddress("?MMTGetIPv4Int@MMTinyLib@@YAIPBD@Z");
		pfn_MMTSetLogLevel_MMTinyLib__YAXH_Z = GetAddress("?MMTSetLogLevel@MMTinyLib@@YAXH@Z");
		pfn_MMTSetLogWriter_MMTinyLib__YAXP6AXHPBDH00H_Z_Z = GetAddress("?MMTSetLogWriter@MMTinyLib@@YAXP6AXHPBDH00H@Z@Z");
		pfn_MMTWriteLog_MMTinyLib__YAXHPBDH00ZZ = GetAddress("?MMTWriteLog@MMTinyLib@@YAXHPBDH00ZZ");
		pfn_OnMemberChanged_IMultiTalkMgr_MultiTalk__QAEXABV_$vector_HV_$allocator_H_std___std___Z = GetAddress("?OnMemberChanged@IMultiTalkMgr@MultiTalk@@QAEXABV?$vector@HV?$allocator@H@std@@@std@@@Z");
		pfn_OnNetworkChange_IMultiTalkMgr_MultiTalk__QAEXH_Z = GetAddress("?OnNetworkChange@IMultiTalkMgr@MultiTalk@@QAEXH@Z");
		pfn_Open_IMultiTalkMgr_MultiTalk__QAEHPAVIMultiTalkObserver_2_III_KPAUSvrAddrArray_MP_2_IABV_$vector_HV_$allocator_H_std___std__PAEH_NH2HHH4PAIHHI_Z = GetAddress("?Open@IMultiTalkMgr@MultiTalk@@QAEHPAVIMultiTalkObserver@2@III_KPAUSvrAddrArray_MP@2@IABV?$vector@HV?$allocator@H@std@@@std@@PAEH_NH2HHH4PAIHHI@Z");
		pfn_Redirect_IMultiTalkMgr_MultiTalk__QAEHPAUSvrAddrArray_MP_2_0H_Z = GetAddress("?Redirect@IMultiTalkMgr@MultiTalk@@QAEHPAUSvrAddrArray_MP@2@0H@Z");
		pfn_SendAudio_IMultiTalkMgr_MultiTalk__QAEHPAEG_Z = GetAddress("?SendAudio@IMultiTalkMgr@MultiTalk@@QAEHPAEG@Z");
		pfn_SendScreen_IMultiTalkMgr_MultiTalk__QAEHPAEHPAX_Z = GetAddress("?SendScreen@IMultiTalkMgr@MultiTalk@@QAEHPAEHPAX@Z");
		pfn_SendVideo_IMultiTalkMgr_MultiTalk__QAEHHPAEHPAX_Z = GetAddress("?SendVideo@IMultiTalkMgr@MultiTalk@@QAEHHPAEHPAX@Z");
		pfn_SetAVEncryptType_IMultiTalkMgr_MultiTalk__QAEXHH_Z = GetAddress("?SetAVEncryptType@IMultiTalkMgr@MultiTalk@@QAEXHH@Z");
		pfn_SetAppCmd_IMultiTalkMgr_MultiTalk__QAEHHPAEH_Z = GetAddress("?SetAppCmd@IMultiTalkMgr@MultiTalk@@QAEHHPAEH@Z");
		pfn_SetEngintInfo_IMultiTalkMgr_MultiTalk__QAEXPAXH_Z = GetAddress("?SetEngintInfo@IMultiTalkMgr@MultiTalk@@QAEXPAXH@Z");
		pfn_SetLogWriter_ILogWriter__SAHPAVIChannelLogWriter__H_Z = GetAddress("?SetLogWriter@ILogWriter@@SAHPAVIChannelLogWriter@@H@Z");
		pfn_SetSpeakerStatus_IMultiTalkMgr_MultiTalk__QAEXH_Z = GetAddress("?SetSpeakerStatus@IMultiTalkMgr@MultiTalk@@QAEXH@Z");
		pfn_TransScreen_IMultiTalkMgr_MultiTalk__QAEHPAEPAX01_Z = GetAddress("?TransScreen@IMultiTalkMgr@MultiTalk@@QAEHPAEPAX01@Z");
		pfn_TransVideo_IMultiTalkMgr_MultiTalk__QAEHPAEHPAX0PAH2_Z = GetAddress("?TransVideo@IMultiTalkMgr@MultiTalk@@QAEHPAEHPAX0PAH2@Z");
		pfn_UnSetLogWriter_ILogWriter__SAHPAVIChannelLogWriter___Z = GetAddress("?UnSetLogWriter@ILogWriter@@SAHPAVIChannelLogWriter@@@Z");
		pfn___autoclassinit2_IMultiTalkMgr_MultiTalk__QAEXI_Z = GetAddress("?__autoclassinit2@IMultiTalkMgr@MultiTalk@@QAEXI@Z");
		pfn_getEngineInfo_IMultiTalkMgr_MultiTalk__QAEPAUMVQQEngineInfo__XZ = GetAddress("?getEngineInfo@IMultiTalkMgr@MultiTalk@@QAEPAUMVQQEngineInfo@@XZ");
		pfn_getTotalBytes_IMultiTalkMgr_MultiTalk__QAEHXZ = GetAddress("?getTotalBytes@IMultiTalkMgr@MultiTalk@@QAEHXZ");
		pfnCreateChannelInstance = GetAddress("CreateChannelInstance");
		pfnCreateEngineInstance = GetAddress("CreateEngineInstance");
		pfnDestroyEngineInstance = GetAddress("DestroyEngineInstance");
		pfnMMTWriteLog = GetAddress("MMTWriteLog");
		pfnSKP_Silk_SDK_Decode = GetAddress("SKP_Silk_SDK_Decode");
		pfnSKP_Silk_SDK_Get_Decoder_Size = GetAddress("SKP_Silk_SDK_Get_Decoder_Size");
		pfnSKP_Silk_SDK_InitDecoder = GetAddress("SKP_Silk_SDK_InitDecoder");
		pfn__ASSERT = GetAddress("__ASSERT");
		pfngetWxGFInfo = GetAddress("getWxGFInfo");
		pfnisWxGF = GetAddress("isWxGF");
		pfnwxam2pic = GetAddress("wxam2pic");
	}

	// 加载原始模块
	inline BOOL WINAPI Load()
	{
		TCHAR tzPath[MAX_PATH];
		TCHAR tzTemp[MAX_PATH * 2];

		lstrcpy(tzPath, TEXT("VoipEngineOrg.dll"));
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



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CreateChannelInstance(void)
{
	__asm JMP pfnCreateChannelInstance;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_CreateEngineInstance(void)
{
	__asm JMP pfnCreateEngineInstance;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_DestroyEngineInstance(void)
{
	__asm JMP pfnDestroyEngineInstance;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_MMTWriteLog(void)
{
	__asm JMP pfnMMTWriteLog;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SKP_Silk_SDK_Decode(void)
{
	__asm JMP pfnSKP_Silk_SDK_Decode;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SKP_Silk_SDK_Get_Decoder_Size(void)
{
	__asm JMP pfnSKP_Silk_SDK_Get_Decoder_Size;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_SKP_Silk_SDK_InitDecoder(void)
{
	__asm JMP pfnSKP_Silk_SDK_InitDecoder;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib___ASSERT(void)
{
	__asm JMP pfn__ASSERT;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_getWxGFInfo(void)
{
	__asm JMP pfngetWxGFInfo;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_isWxGF(void)
{
	__asm JMP pfnisWxGF;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 导出函数
ALCDECL AheadLib_wxam2pic(void)
{
	__asm JMP pfnwxam2pic;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma comment(linker, "/EXPORT:??0IChannelLogWriter@@QAE@$$QAV0@@Z=VoipEngineOrg.??0IChannelLogWriter@@QAE@$$QAV0@@Z,@1")
#pragma comment(linker, "/EXPORT:??0IMultiTalkObserver@MultiTalk@@QAE@$$QAV01@@Z=VoipEngineOrg.??0IMultiTalkObserver@MultiTalk@@QAE@$$QAV01@@Z,@5")
#pragma comment(linker, "/EXPORT:??4CVoipEngine@@QAEAAV0@$$QAV0@@Z=VoipEngineOrg.??4CVoipEngine@@QAEAAV0@$$QAV0@@Z,@9")
#pragma comment(linker, "/EXPORT:??4IChannelLogWriter@@QAEAAV0@$$QAV0@@Z=VoipEngineOrg.??4IChannelLogWriter@@QAEAAV0@$$QAV0@@Z,@11")
#pragma comment(linker, "/EXPORT:??4ILogWriter@@QAEAAV0@$$QAV0@@Z=VoipEngineOrg.??4ILogWriter@@QAEAAV0@$$QAV0@@Z,@13")
#pragma comment(linker, "/EXPORT:??4IMultiTalkObserver@MultiTalk@@QAEAAV01@$$QAV01@@Z=VoipEngineOrg.??4IMultiTalkObserver@MultiTalk@@QAEAAV01@$$QAV01@@Z,@16")
#pragma comment(linker, "/EXPORT:??_7IChannelLogWriter@@6B@=VoipEngineOrg.??_7IChannelLogWriter@@6B@,@18")
#pragma comment(linker, "/EXPORT:??_7IMultiTalkObserver@MultiTalk@@6B@=VoipEngineOrg.??_7IMultiTalkObserver@MultiTalk@@6B@,@19")
class EXPORT CVoipEngine
{
	public: class CVoipEngine & operator=(class CVoipEngine const &) ;
};
class EXPORT IChannelLogWriter
{
	public: IChannelLogWriter::IChannelLogWriter(class IChannelLogWriter const &) ;
	public: IChannelLogWriter::IChannelLogWriter(void) ;
	public: class IChannelLogWriter & operator=(class IChannelLogWriter const &) ;
};
class EXPORT ILogWriter
{
	public: class ILogWriter & operator=(class ILogWriter const &) ;
	public: static void __cdecl ILogWriter::DisableLogWriter(void) ;
	public: static void __cdecl ILogWriter::EnableLogWriter(void) ;
	public: static int __cdecl ILogWriter::SetLogWriter(class IChannelLogWriter *,int) ;
	public: static int __cdecl ILogWriter::UnSetLogWriter(class IChannelLogWriter *) ;
};
ALCPP class CVoipEngine & CVoipEngine::operator=(class CVoipEngine const &) 
{
	__asm JMP pfn__4CVoipEngine__QAEAAV0_ABV0__Z;
}
ALCPP IChannelLogWriter::IChannelLogWriter(class IChannelLogWriter const &) 
{
	__asm JMP pfn__0IChannelLogWriter__QAE_ABV0__Z;
}
ALCPP IChannelLogWriter::IChannelLogWriter(void) 
{
	__asm JMP pfn__0IChannelLogWriter__QAE_XZ;
}
ALCPP class IChannelLogWriter & IChannelLogWriter::operator=(class IChannelLogWriter const &) 
{
	__asm JMP pfn__4IChannelLogWriter__QAEAAV0_ABV0__Z;
}
ALCPP class ILogWriter & ILogWriter::operator=(class ILogWriter const &) 
{
	__asm JMP pfn__4ILogWriter__QAEAAV0_ABV0__Z;
}
ALCPP void __cdecl ILogWriter::DisableLogWriter(void) 
{
	__asm JMP pfn_DisableLogWriter_ILogWriter__SAXXZ;
}
ALCPP void __cdecl ILogWriter::EnableLogWriter(void) 
{
	__asm JMP pfn_EnableLogWriter_ILogWriter__SAXXZ;
}
ALCPP int __cdecl ILogWriter::SetLogWriter(class IChannelLogWriter *,int) 
{
	__asm JMP pfn_SetLogWriter_ILogWriter__SAHPAVIChannelLogWriter__H_Z;
}
ALCPP int __cdecl ILogWriter::UnSetLogWriter(class IChannelLogWriter *) 
{
	__asm JMP pfn_UnSetLogWriter_ILogWriter__SAHPAVIChannelLogWriter___Z;
}
namespace MMTinyLib
{
	ALCPP unsigned int __cdecl MMTGetIPv4Int(char const *) 
	{
		__asm JMP pfn_MMTGetIPv4Int_MMTinyLib__YAIPBD_Z;
	}
	ALCPP void __cdecl MMTSetLogLevel(int) 
	{
		__asm JMP pfn_MMTSetLogLevel_MMTinyLib__YAXH_Z;
	}
	ALCPP void __cdecl MMTSetLogWriter(void (__cdecl*)(int,char const *,int,char const *,char const *,int)) 
	{
		__asm JMP pfn_MMTSetLogWriter_MMTinyLib__YAXP6AXHPBDH00H_Z_Z;
	}
	ALCPP void __cdecl MMTWriteLog(int,char const *,int,char const *,char const *,...) 
	{
		__asm JMP pfn_MMTWriteLog_MMTinyLib__YAXHPBDH00ZZ;
	}
}
namespace MultiTalk
{
	class EXPORT IMultiTalkMgr
	{
		public: IMultiTalkMgr::IMultiTalkMgr(class IMVQQEngine *) ;
		public: IMultiTalkMgr::~IMultiTalkMgr(void) ;
		public: class IMultiTalkMgr & operator=(class IMultiTalkMgr const &) ;
		public: int IMultiTalkMgr::Close(void) ;
		public: int IMultiTalkMgr::GetAudioData(unsigned char *,unsigned short) ;
		public: int IMultiTalkMgr::GetAudioFormat(int *,int *) ;
		public: void IMultiTalkMgr::GetChannelBytes(int &,int &) ;
		public: void IMultiTalkMgr::GetInviteInfo(void * *,int *) ;
		public: static int __cdecl IMultiTalkMgr::GetPolicyValue(enum MultiTalkGeneralPolicy,unsigned int *,int) ;
		public: int IMultiTalkMgr::GetScreenData(unsigned char *,int *,int *,int *,int *,int *) ;
		public: int IMultiTalkMgr::GetVideoData(int *,int *,int *,int *,int *) ;
		public: int IMultiTalkMgr::GetVoiceActivity(int) ;
		public: void IMultiTalkMgr::OnMemberChanged(class std::vector<int,class std::allocator<int> > const &) ;
		public: void IMultiTalkMgr::OnNetworkChange(int) ;
		public: int IMultiTalkMgr::Open(class IMultiTalkObserver *,unsigned int,unsigned int,unsigned int,unsigned __int64,struct SvrAddrArray_MP *,unsigned int,class std::vector<int,class std::allocator<int> > const &,unsigned char *,int,bool,int,struct MultiTalk::SvrAddrArray_MP *,int,int,int,unsigned char *,unsigned int *,int,int,unsigned int) ;
		public: int IMultiTalkMgr::Redirect(struct SvrAddrArray_MP *,struct SvrAddrArray_MP *,int) ;
		public: int IMultiTalkMgr::SendAudio(unsigned char *,unsigned short) ;
		public: int IMultiTalkMgr::SendScreen(unsigned char *,int,void *) ;
		public: int IMultiTalkMgr::SendVideo(int,unsigned char *,int,void *) ;
		public: void IMultiTalkMgr::SetAVEncryptType(int,int) ;
		public: int IMultiTalkMgr::SetAppCmd(int,unsigned char *,int) ;
		public: void IMultiTalkMgr::SetEngintInfo(void *,int) ;
		public: void IMultiTalkMgr::SetSpeakerStatus(int) ;
		public: int IMultiTalkMgr::TransScreen(unsigned char *,void *,unsigned char *,void *) ;
		public: int IMultiTalkMgr::TransVideo(unsigned char *,int,void *,unsigned char *,int *,int *) ;
		public: void IMultiTalkMgr::__autoclassinit2(unsigned int) ;
		public: struct MVQQEngineInfo * IMultiTalkMgr::getEngineInfo(void) ;
		public: int IMultiTalkMgr::getTotalBytes(void) ;
	};
	class EXPORT IMultiTalkObserver
	{
		public: IMultiTalkObserver::IMultiTalkObserver(class IMultiTalkObserver const &) ;
		public: IMultiTalkObserver::IMultiTalkObserver(void) ;
		public: class IMultiTalkObserver & operator=(class IMultiTalkObserver const &) ;
	};
	ALCPP IMultiTalkMgr::IMultiTalkMgr(class IMVQQEngine *) 
	{
		__asm JMP pfn__0IMultiTalkMgr_MultiTalk__QAE_PAVIMVQQEngine___Z;
	}
	ALCPP IMultiTalkMgr::~IMultiTalkMgr(void) 
	{
		__asm JMP pfn__1IMultiTalkMgr_MultiTalk__QAE_XZ;
	}
	ALCPP class IMultiTalkMgr & IMultiTalkMgr::operator=(class IMultiTalkMgr const &) 
	{
		__asm JMP pfn__4IMultiTalkMgr_MultiTalk__QAEAAV01_ABV01__Z;
	}
	ALCPP int IMultiTalkMgr::Close(void) 
	{
		__asm JMP pfn_Close_IMultiTalkMgr_MultiTalk__QAEHXZ;
	}
	ALCPP int IMultiTalkMgr::GetAudioData(unsigned char *,unsigned short) 
	{
		__asm JMP pfn_GetAudioData_IMultiTalkMgr_MultiTalk__QAEHPAEG_Z;
	}
	ALCPP int IMultiTalkMgr::GetAudioFormat(int *,int *) 
	{
		__asm JMP pfn_GetAudioFormat_IMultiTalkMgr_MultiTalk__QAEHPAH0_Z;
	}
	ALCPP void IMultiTalkMgr::GetChannelBytes(int &,int &) 
	{
		__asm JMP pfn_GetChannelBytes_IMultiTalkMgr_MultiTalk__QAEXAAH0_Z;
	}
	ALCPP void IMultiTalkMgr::GetInviteInfo(void * *,int *) 
	{
		__asm JMP pfn_GetInviteInfo_IMultiTalkMgr_MultiTalk__QAEXPAPAXPAH_Z;
	}
	ALCPP int __cdecl IMultiTalkMgr::GetPolicyValue(enum MultiTalkGeneralPolicy,unsigned int *,int) 
	{
		__asm JMP pfn_GetPolicyValue_IMultiTalkMgr_MultiTalk__SAHW4MultiTalkGeneralPolicy_2_PAIH_Z;
	}
	ALCPP int IMultiTalkMgr::GetScreenData(unsigned char *,int *,int *,int *,int *,int *) 
	{
		__asm JMP pfn_GetScreenData_IMultiTalkMgr_MultiTalk__QAEHPAEPAH1111_Z;
	}
	ALCPP int IMultiTalkMgr::GetVideoData(int *,int *,int *,int *,int *) 
	{
		__asm JMP pfn_GetVideoData_IMultiTalkMgr_MultiTalk__QAEHPAH0000_Z;
	}
	ALCPP int IMultiTalkMgr::GetVoiceActivity(int) 
	{
		__asm JMP pfn_GetVoiceActivity_IMultiTalkMgr_MultiTalk__QAEHH_Z;
	}
	ALCPP void IMultiTalkMgr::OnMemberChanged(class std::vector<int,class std::allocator<int> > const &) 
	{
		__asm JMP pfn_OnMemberChanged_IMultiTalkMgr_MultiTalk__QAEXABV_$vector_HV_$allocator_H_std___std___Z;
	}
	ALCPP void IMultiTalkMgr::OnNetworkChange(int) 
	{
		__asm JMP pfn_OnNetworkChange_IMultiTalkMgr_MultiTalk__QAEXH_Z;
	}
	ALCPP int IMultiTalkMgr::Open(class IMultiTalkObserver *,unsigned int,unsigned int,unsigned int,unsigned __int64,struct SvrAddrArray_MP *,unsigned int,class std::vector<int,class std::allocator<int> > const &,unsigned char *,int,bool,int,struct MultiTalk::SvrAddrArray_MP *,int,int,int,unsigned char *,unsigned int *,int,int,unsigned int) 
	{
		__asm JMP pfn_Open_IMultiTalkMgr_MultiTalk__QAEHPAVIMultiTalkObserver_2_III_KPAUSvrAddrArray_MP_2_IABV_$vector_HV_$allocator_H_std___std__PAEH_NH2HHH4PAIHHI_Z;
	}
	ALCPP int IMultiTalkMgr::Redirect(struct SvrAddrArray_MP *,struct SvrAddrArray_MP *,int) 
	{
		__asm JMP pfn_Redirect_IMultiTalkMgr_MultiTalk__QAEHPAUSvrAddrArray_MP_2_0H_Z;
	}
	ALCPP int IMultiTalkMgr::SendAudio(unsigned char *,unsigned short) 
	{
		__asm JMP pfn_SendAudio_IMultiTalkMgr_MultiTalk__QAEHPAEG_Z;
	}
	ALCPP int IMultiTalkMgr::SendScreen(unsigned char *,int,void *) 
	{
		__asm JMP pfn_SendScreen_IMultiTalkMgr_MultiTalk__QAEHPAEHPAX_Z;
	}
	ALCPP int IMultiTalkMgr::SendVideo(int,unsigned char *,int,void *) 
	{
		__asm JMP pfn_SendVideo_IMultiTalkMgr_MultiTalk__QAEHHPAEHPAX_Z;
	}
	ALCPP void IMultiTalkMgr::SetAVEncryptType(int,int) 
	{
		__asm JMP pfn_SetAVEncryptType_IMultiTalkMgr_MultiTalk__QAEXHH_Z;
	}
	ALCPP int IMultiTalkMgr::SetAppCmd(int,unsigned char *,int) 
	{
		__asm JMP pfn_SetAppCmd_IMultiTalkMgr_MultiTalk__QAEHHPAEH_Z;
	}
	ALCPP void IMultiTalkMgr::SetEngintInfo(void *,int) 
	{
		__asm JMP pfn_SetEngintInfo_IMultiTalkMgr_MultiTalk__QAEXPAXH_Z;
	}
	ALCPP void IMultiTalkMgr::SetSpeakerStatus(int) 
	{
		__asm JMP pfn_SetSpeakerStatus_IMultiTalkMgr_MultiTalk__QAEXH_Z;
	}
	ALCPP int IMultiTalkMgr::TransScreen(unsigned char *,void *,unsigned char *,void *) 
	{
		__asm JMP pfn_TransScreen_IMultiTalkMgr_MultiTalk__QAEHPAEPAX01_Z;
	}
	ALCPP int IMultiTalkMgr::TransVideo(unsigned char *,int,void *,unsigned char *,int *,int *) 
	{
		__asm JMP pfn_TransVideo_IMultiTalkMgr_MultiTalk__QAEHPAEHPAX0PAH2_Z;
	}
	ALCPP void IMultiTalkMgr::__autoclassinit2(unsigned int) 
	{
		__asm JMP pfn___autoclassinit2_IMultiTalkMgr_MultiTalk__QAEXI_Z;
	}
	ALCPP struct MVQQEngineInfo * IMultiTalkMgr::getEngineInfo(void) 
	{
		__asm JMP pfn_getEngineInfo_IMultiTalkMgr_MultiTalk__QAEPAUMVQQEngineInfo__XZ;
	}
	ALCPP int IMultiTalkMgr::getTotalBytes(void) 
	{
		__asm JMP pfn_getTotalBytes_IMultiTalkMgr_MultiTalk__QAEHXZ;
	}
	ALCPP IMultiTalkObserver::IMultiTalkObserver(class IMultiTalkObserver const &) 
	{
		__asm JMP pfn__0IMultiTalkObserver_MultiTalk__QAE_ABV01__Z;
	}
	ALCPP IMultiTalkObserver::IMultiTalkObserver(void) 
	{
		__asm JMP pfn__0IMultiTalkObserver_MultiTalk__QAE_XZ;
	}
	ALCPP class IMultiTalkObserver & IMultiTalkObserver::operator=(class IMultiTalkObserver const &) 
	{
		__asm JMP pfn__4IMultiTalkObserver_MultiTalk__QAEAAV01_ABV01__Z;
	}
}
