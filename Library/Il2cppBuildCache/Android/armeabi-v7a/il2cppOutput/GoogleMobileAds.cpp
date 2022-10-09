#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_t2A1A193196C2327863990528D7DD2E96649BF720;
// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t57855A95D2E170D06F84C98A3279AD188AFAA11A;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_t85714B6809C54C03F8A8EF5CA7E06BCCA9F1CB5A;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t1044F6D8235EF4BA61F582080C5D8FEC3497BAF5;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// GoogleMobileAds.Api.AdError
struct AdError_tA9B94F907044E6043ED34B074D51F65498EFAAC6;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6;
// GoogleMobileAds.Api.AdSize
struct AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127;
// GoogleMobileAds.Api.AdValue
struct AdValue_t360B016A12825E827C3995E843288FE6B5C2D8C9;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_t2A4AEEF98B2314674EBC8DC05143787D7EAA2031;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// GoogleMobileAds.Api.BannerView
struct BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_tA16B0DEDB291A8AF040F15EE212BD7C50D32E62B;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_tCD637F75B842D3BEB65B022A6CBE243526101263;
// GoogleMobileAds.IClientFactory
struct IClientFactory_t9AF483A28AAD50E1816B668B64A280B488C372B4;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t3A4FD70173B1FB51BD44E973313BD917F424DB69;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_tA448A4CAAA718A2FA2864DFAC8703B14224FEAAF;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_t729B7023CB3385B2357C7D007F1876124B57CC9E;
// GoogleMobileAds.Common.IMobileAdsClient
struct IMobileAdsClient_tB15E447CD319064E4181830F59DAE5F317CF20E7;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t7093D8754C20FFF65DB1C809FCA56437C562722C;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t8C4AF80746D71CD593F802FA784D49CB495624AE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GoogleMobileAds.Api.MobileAds
struct MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_t1F72CDDE384122345237DC4BF43CB53C62799208;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t2A1A193196C2327863990528D7DD2E96649BF720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t85714B6809C54C03F8A8EF5CA7E06BCCA9F1CB5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBannerClient_tCD637F75B842D3BEB65B022A6CBE243526101263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientFactory_t9AF483A28AAD50E1816B668B64A280B488C372B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMobileAdsClient_tB15E447CD319064E4181830F59DAE5F317CF20E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationStatus_t7093D8754C20FFF65DB1C809FCA56437C562722C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAdsEventExecutor_t099517A046E77298C089FAE30CF54D735C41CE7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeU3Ec__AnonStorey0_t1F72CDDE384122345237DC4BF43CB53C62799208_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mC49928CE8766B6B1070200B2B01CA7DD0AB9A108_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4D3E4AA40EB781E78A850A8CFAA17010BE27216D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__0_mAAC5F520BBB4CFD593FD295CDD5899389D100EC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__1_mBEF3AF7BAB40EB539B497CA05C002FBDAE2694D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__2_m367119D0A7BB1A9977494C31D860D15F74634A9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__3_m15F7111C5DB006FC1679D8D7142A59F7036051F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerView_U3CConfigureBannerEventsU3Em__4_mACDFD7DD84DBDDAC40E826CC7F25E3F5CE3C1234_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m04D9D32B9FE91BC5000F39E47655544D9FC3F906_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m56F2B88909716822072AD00B06657E0FF00D97ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m7C43BB1C27C2E208731656D81F73044547B19561_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mE664054E2D0784A7CA87031C137EB9645BD8E8AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MobileAds_GetClientFactory_m62E0C2B84F833DFA5974323446416ADD01A9E4AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_mE518CF70B8A615803C7B8CB58959A63FC79E68C2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4C8449BBA7D57BFD11B4CB6D14E40B5CDBFC0A9E 
{
public:

public:
};


// System.Object


// GoogleMobileAds.Api.AdError
struct AdError_tA9B94F907044E6043ED34B074D51F65498EFAAC6  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(AdError_tA9B94F907044E6043ED34B074D51F65498EFAAC6, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.AdRequest
struct AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t1044F6D8235EF4BA61F582080C5D8FEC3497BAF5 * ___U3CMediationExtrasU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6, ___U3CKeywordsU3Ek__BackingField_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_1() const { return ___U3CKeywordsU3Ek__BackingField_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_1() { return &___U3CKeywordsU3Ek__BackingField_1; }
	inline void set_U3CKeywordsU3Ek__BackingField_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6, ___U3CExtrasU3Ek__BackingField_2)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_2() const { return ___U3CExtrasU3Ek__BackingField_2; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_2() { return &___U3CExtrasU3Ek__BackingField_2; }
	inline void set_U3CExtrasU3Ek__BackingField_2(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6, ___U3CMediationExtrasU3Ek__BackingField_3)); }
	inline List_1_t1044F6D8235EF4BA61F582080C5D8FEC3497BAF5 * get_U3CMediationExtrasU3Ek__BackingField_3() const { return ___U3CMediationExtrasU3Ek__BackingField_3; }
	inline List_1_t1044F6D8235EF4BA61F582080C5D8FEC3497BAF5 ** get_address_of_U3CMediationExtrasU3Ek__BackingField_3() { return &___U3CMediationExtrasU3Ek__BackingField_3; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_3(List_1_t1044F6D8235EF4BA61F582080C5D8FEC3497BAF5 * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_3), (void*)value);
	}
};

struct AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6_StaticFields
{
public:
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6_StaticFields, ___U3CVersionU3Ek__BackingField_0)); }
	inline String_t* get_U3CVersionU3Ek__BackingField_0() const { return ___U3CVersionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CVersionU3Ek__BackingField_0() { return &___U3CVersionU3Ek__BackingField_0; }
	inline void set_U3CVersionU3Ek__BackingField_0(String_t* value)
	{
		___U3CVersionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// GoogleMobileAds.Api.BannerView
struct BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8 * ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdClosed_4;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::OnPaidEvent
	EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D * ___OnPaidEvent_5;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdLoaded_1() { return static_cast<int32_t>(offsetof(BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6, ___OnAdLoaded_1)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdLoaded_1() const { return ___OnAdLoaded_1; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdLoaded_1() { return &___OnAdLoaded_1; }
	inline void set_OnAdLoaded_1(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdLoaded_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_2() { return static_cast<int32_t>(offsetof(BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6, ___OnAdFailedToLoad_2)); }
	inline EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8 * get_OnAdFailedToLoad_2() const { return ___OnAdFailedToLoad_2; }
	inline EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8 ** get_address_of_OnAdFailedToLoad_2() { return &___OnAdFailedToLoad_2; }
	inline void set_OnAdFailedToLoad_2(EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8 * value)
	{
		___OnAdFailedToLoad_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_3() { return static_cast<int32_t>(offsetof(BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6, ___OnAdOpening_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdOpening_3() const { return ___OnAdOpening_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdOpening_3() { return &___OnAdOpening_3; }
	inline void set_OnAdOpening_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdOpening_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_4() { return static_cast<int32_t>(offsetof(BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6, ___OnAdClosed_4)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdClosed_4() const { return ___OnAdClosed_4; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdClosed_4() { return &___OnAdClosed_4; }
	inline void set_OnAdClosed_4(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdClosed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_5() { return static_cast<int32_t>(offsetof(BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6, ___OnPaidEvent_5)); }
	inline EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D * get_OnPaidEvent_5() const { return ___OnPaidEvent_5; }
	inline EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D ** get_address_of_OnPaidEvent_5() { return &___OnPaidEvent_5; }
	inline void set_OnPaidEvent_5(EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D * value)
	{
		___OnPaidEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_5), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t7093D8754C20FFF65DB1C809FCA56437C562722C  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InitializationStatus_t7093D8754C20FFF65DB1C809FCA56437C562722C, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.InterstitialAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8 * ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_t57855A95D2E170D06F84C98A3279AD188AFAA11A * ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D * ___OnPaidEvent_9;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_adUnitId_1() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___adUnitId_1)); }
	inline String_t* get_adUnitId_1() const { return ___adUnitId_1; }
	inline String_t** get_address_of_adUnitId_1() { return &___adUnitId_1; }
	inline void set_adUnitId_1(String_t* value)
	{
		___adUnitId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adUnitId_1), (void*)value);
	}

	inline static int32_t get_offset_of_isLoaded_2() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___isLoaded_2)); }
	inline bool get_isLoaded_2() const { return ___isLoaded_2; }
	inline bool* get_address_of_isLoaded_2() { return &___isLoaded_2; }
	inline void set_isLoaded_2(bool value)
	{
		___isLoaded_2 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_3() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___OnAdLoaded_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdLoaded_3() const { return ___OnAdLoaded_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdLoaded_3() { return &___OnAdLoaded_3; }
	inline void set_OnAdLoaded_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdLoaded_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_4() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___OnAdFailedToLoad_4)); }
	inline EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8 * get_OnAdFailedToLoad_4() const { return ___OnAdFailedToLoad_4; }
	inline EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8 ** get_address_of_OnAdFailedToLoad_4() { return &___OnAdFailedToLoad_4; }
	inline void set_OnAdFailedToLoad_4(EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8 * value)
	{
		___OnAdFailedToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_5() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___OnAdOpening_5)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdOpening_5() const { return ___OnAdOpening_5; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdOpening_5() { return &___OnAdOpening_5; }
	inline void set_OnAdOpening_5(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdOpening_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___OnAdClosed_6)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToShow_7() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___OnAdFailedToShow_7)); }
	inline EventHandler_1_t57855A95D2E170D06F84C98A3279AD188AFAA11A * get_OnAdFailedToShow_7() const { return ___OnAdFailedToShow_7; }
	inline EventHandler_1_t57855A95D2E170D06F84C98A3279AD188AFAA11A ** get_address_of_OnAdFailedToShow_7() { return &___OnAdFailedToShow_7; }
	inline void set_OnAdFailedToShow_7(EventHandler_1_t57855A95D2E170D06F84C98A3279AD188AFAA11A * value)
	{
		___OnAdFailedToShow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToShow_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdDidRecordImpression_8() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___OnAdDidRecordImpression_8)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdDidRecordImpression_8() const { return ___OnAdDidRecordImpression_8; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdDidRecordImpression_8() { return &___OnAdDidRecordImpression_8; }
	inline void set_OnAdDidRecordImpression_8(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdDidRecordImpression_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdDidRecordImpression_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_9() { return static_cast<int32_t>(offsetof(InterstitialAd_t33D4D459DE18209A3903DABE8D9BD0FCCF3310DE, ___OnPaidEvent_9)); }
	inline EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D * get_OnPaidEvent_9() const { return ___OnPaidEvent_9; }
	inline EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D ** get_address_of_OnPaidEvent_9() { return &___OnPaidEvent_9; }
	inline void set_OnPaidEvent_9(EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D * value)
	{
		___OnPaidEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_9), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// GoogleMobileAds.Api.MobileAds
struct MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};

struct MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_StaticFields
{
public:
	// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::clientFactory
	RuntimeObject* ___clientFactory_1;
	// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::instance
	MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B * ___instance_2;

public:
	inline static int32_t get_offset_of_clientFactory_1() { return static_cast<int32_t>(offsetof(MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_StaticFields, ___clientFactory_1)); }
	inline RuntimeObject* get_clientFactory_1() const { return ___clientFactory_1; }
	inline RuntimeObject** get_address_of_clientFactory_1() { return &___clientFactory_1; }
	inline void set_clientFactory_1(RuntimeObject* value)
	{
		___clientFactory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientFactory_1), (void*)value);
	}

	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_StaticFields, ___instance_2)); }
	inline MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B * get_instance_2() const { return ___instance_2; }
	inline MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_2), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_t1F72CDDE384122345237DC4BF43CB53C62799208  : public RuntimeObject
{
public:
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::initCompleteAction
	Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * ___initCompleteAction_0;

public:
	inline static int32_t get_offset_of_initCompleteAction_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t1F72CDDE384122345237DC4BF43CB53C62799208, ___initCompleteAction_0)); }
	inline Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * get_initCompleteAction_0() const { return ___initCompleteAction_0; }
	inline Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC ** get_address_of_initCompleteAction_0() { return &___initCompleteAction_0; }
	inline void set_initCompleteAction_0(Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * value)
	{
		___initCompleteAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initCompleteAction_0), (void*)value);
	}
};


// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_tDAD02D0E50F15C57E2DE06D4A4801B95EFAE085F  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdErrorEventArgs::<AdError>k__BackingField
	AdError_tA9B94F907044E6043ED34B074D51F65498EFAAC6 * ___U3CAdErrorU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_tDAD02D0E50F15C57E2DE06D4A4801B95EFAE085F, ___U3CAdErrorU3Ek__BackingField_1)); }
	inline AdError_tA9B94F907044E6043ED34B074D51F65498EFAAC6 * get_U3CAdErrorU3Ek__BackingField_1() const { return ___U3CAdErrorU3Ek__BackingField_1; }
	inline AdError_tA9B94F907044E6043ED34B074D51F65498EFAAC6 ** get_address_of_U3CAdErrorU3Ek__BackingField_1() { return &___U3CAdErrorU3Ek__BackingField_1; }
	inline void set_U3CAdErrorU3Ek__BackingField_1(AdError_tA9B94F907044E6043ED34B074D51F65498EFAAC6 * value)
	{
		___U3CAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_tDAD02D0E50F15C57E2DE06D4A4801B95EFAE085F, ___U3CMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_2() const { return ___U3CMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_2() { return &___U3CMessageU3Ek__BackingField_2; }
	inline void set_U3CMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_2), (void*)value);
	}
};


// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::<LoadAdError>k__BackingField
	LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6 * ___U3CLoadAdErrorU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC, ___U3CLoadAdErrorU3Ek__BackingField_1)); }
	inline LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6 * get_U3CLoadAdErrorU3Ek__BackingField_1() const { return ___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6 ** get_address_of_U3CLoadAdErrorU3Ek__BackingField_1() { return &___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorU3Ek__BackingField_1(LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6 * value)
	{
		___U3CLoadAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_t2A4AEEF98B2314674EBC8DC05143787D7EAA2031  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_t360B016A12825E827C3995E843288FE6B5C2D8C9 * ___U3CAdValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdValueEventArgs_t2A4AEEF98B2314674EBC8DC05143787D7EAA2031, ___U3CAdValueU3Ek__BackingField_1)); }
	inline AdValue_t360B016A12825E827C3995E843288FE6B5C2D8C9 * get_U3CAdValueU3Ek__BackingField_1() const { return ___U3CAdValueU3Ek__BackingField_1; }
	inline AdValue_t360B016A12825E827C3995E843288FE6B5C2D8C9 ** get_address_of_U3CAdValueU3Ek__BackingField_1() { return &___U3CAdValueU3Ek__BackingField_1; }
	inline void set_U3CAdValueU3Ek__BackingField_1(AdValue_t360B016A12825E827C3995E843288FE6B5C2D8C9 * value)
	{
		___U3CAdValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdValueU3Ek__BackingField_1), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6  : public AdError_tA9B94F907044E6043ED34B074D51F65498EFAAC6
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::client
	RuntimeObject* ___client_1;

public:
	inline static int32_t get_offset_of_client_1() { return static_cast<int32_t>(offsetof(LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6, ___client_1)); }
	inline RuntimeObject* get_client_1() const { return ___client_1; }
	inline RuntimeObject** get_address_of_client_1() { return &___client_1; }
	inline void set_client_1(RuntimeObject* value)
	{
		___client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_1), (void*)value);
	}
};


// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t8C4AF80746D71CD593F802FA784D49CB495624AE  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadAdErrorClientEventArgs_t8C4AF80746D71CD593F802FA784D49CB495624AE, ___U3CLoadAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CLoadAdErrorClientU3Ek__BackingField_1() const { return ___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return &___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CLoadAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// GoogleMobileAds.Api.AdPosition
struct AdPosition_t3DA963296826A272261AE8F356A6242927A8C8FE 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdPosition_t3DA963296826A272261AE8F356A6242927A8C8FE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// GoogleMobileAds.Api.Orientation
struct Orientation_t42578DAEF5755DA5D4F526CEF8BD5CC3F02B5EB3 
{
public:
	// System.Int32 GoogleMobileAds.Api.Orientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Orientation_t42578DAEF5755DA5D4F526CEF8BD5CC3F02B5EB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// GoogleMobileAds.Api.AdSize/Type
struct Type_t240FDA95BFCC5292518F68D55C99035D7779C812 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdSize/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t240FDA95BFCC5292518F68D55C99035D7779C812, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.AdSize
struct AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::type
	int32_t ___type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::orientation
	int32_t ___orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::width
	int32_t ___width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::height
	int32_t ___height_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127, ___orientation_1)); }
	inline int32_t get_orientation_1() const { return ___orientation_1; }
	inline int32_t* get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(int32_t value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}
};

struct AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127_StaticFields
{
public:
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;

public:
	inline static int32_t get_offset_of_Banner_4() { return static_cast<int32_t>(offsetof(AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127_StaticFields, ___Banner_4)); }
	inline AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * get_Banner_4() const { return ___Banner_4; }
	inline AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 ** get_address_of_Banner_4() { return &___Banner_4; }
	inline void set_Banner_4(AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * value)
	{
		___Banner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Banner_4), (void*)value);
	}

	inline static int32_t get_offset_of_MediumRectangle_5() { return static_cast<int32_t>(offsetof(AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127_StaticFields, ___MediumRectangle_5)); }
	inline AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * get_MediumRectangle_5() const { return ___MediumRectangle_5; }
	inline AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 ** get_address_of_MediumRectangle_5() { return &___MediumRectangle_5; }
	inline void set_MediumRectangle_5(AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * value)
	{
		___MediumRectangle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MediumRectangle_5), (void*)value);
	}

	inline static int32_t get_offset_of_IABBanner_6() { return static_cast<int32_t>(offsetof(AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127_StaticFields, ___IABBanner_6)); }
	inline AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * get_IABBanner_6() const { return ___IABBanner_6; }
	inline AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 ** get_address_of_IABBanner_6() { return &___IABBanner_6; }
	inline void set_IABBanner_6(AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * value)
	{
		___IABBanner_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IABBanner_6), (void*)value);
	}

	inline static int32_t get_offset_of_Leaderboard_7() { return static_cast<int32_t>(offsetof(AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127_StaticFields, ___Leaderboard_7)); }
	inline AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * get_Leaderboard_7() const { return ___Leaderboard_7; }
	inline AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 ** get_address_of_Leaderboard_7() { return &___Leaderboard_7; }
	inline void set_Leaderboard_7(AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * value)
	{
		___Leaderboard_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Leaderboard_7), (void*)value);
	}

	inline static int32_t get_offset_of_SmartBanner_8() { return static_cast<int32_t>(offsetof(AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127_StaticFields, ___SmartBanner_8)); }
	inline AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * get_SmartBanner_8() const { return ___SmartBanner_8; }
	inline AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 ** get_address_of_SmartBanner_8() { return &___SmartBanner_8; }
	inline void set_SmartBanner_8(AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * value)
	{
		___SmartBanner_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmartBanner_8), (void*)value);
	}

	inline static int32_t get_offset_of_FullWidth_9() { return static_cast<int32_t>(offsetof(AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127_StaticFields, ___FullWidth_9)); }
	inline int32_t get_FullWidth_9() const { return ___FullWidth_9; }
	inline int32_t* get_address_of_FullWidth_9() { return &___FullWidth_9; }
	inline void set_FullWidth_9(int32_t value)
	{
		___FullWidth_9 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_t2A1A193196C2327863990528D7DD2E96649BF720  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_t85714B6809C54C03F8A8EF5CA7E06BCCA9F1CB5A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_m62E0C2B84F833DFA5974323446416ADD01A9E4AD (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_mB507EF1BFD6A03D0BD3162B01802A4235077A0D8 (BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mE664054E2D0784A7CA87031C137EB9645BD8E8AC (EventHandler_1_t85714B6809C54C03F8A8EF5CA7E06BCCA9F1CB5A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t85714B6809C54C03F8A8EF5CA7E06BCCA9F1CB5A *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m7C43BB1C27C2E208731656D81F73044547B19561 (EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::get_LoadAdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m47E6D04DEF85BA69C87809F85E24A1698CDF6820_inline (LoadAdErrorClientEventArgs_t8C4AF80746D71CD593F802FA784D49CB495624AE * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_mAF56504B0355080B9595FA33B4AEF5A05E16556E (LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m8B5DB461A93533150A02A98E9DDC0683DBE18533 (AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_m7E74468DE5396FC1E30E333962E36B5BC5D44ADD_inline (AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC * __this, LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m04D9D32B9FE91BC5000F39E47655544D9FC3F906 (EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8 * __this, RuntimeObject * ___sender0, AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8 *, RuntimeObject *, AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m56F2B88909716822072AD00B06657E0FF00D97ED (EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D * __this, RuntimeObject * ___sender0, AdValueEventArgs_t2A4AEEF98B2314674EBC8DC05143787D7EAA2031 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D *, RuntimeObject *, AdValueEventArgs_t2A4AEEF98B2314674EBC8DC05143787D7EAA2031 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m50B28E632FD8931C81DEB9142686282B8A2492D2 (AdError_tA9B94F907044E6043ED34B074D51F65498EFAAC6 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_mE9A341DD0718DCEF3D91401F92AE85C25DF9407D (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_m3953F1888686CEEFEDD952220034D28E183836A8 (MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m3B9F8FC6C6BD43404E9F40A7ABBF8F9A1D857FA0 (U3CInitializeU3Ec__AnonStorey0_t1F72CDDE384122345237DC4BF43CB53C62799208 * __this, const RuntimeMethod* method);
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B * MobileAds_get_Instance_m3F5AB541EDE9FA5F15F313D18080DF1B7132FA7A (const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4D3E4AA40EB781E78A850A8CFAA17010BE27216D (Action_1_t2A1A193196C2327863990528D7DD2E96649BF720 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2A1A193196C2327863990528D7DD2E96649BF720 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_Initialize_m4D227F5180D25700A4294CE6EA1AB931D0245E58 (const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m81DC6F6D6B7A27D15255054E7D62C529F9A76DDB (InitializationStatus_t7093D8754C20FFF65DB1C809FCA56437C562722C * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::Invoke(!0)
inline void Action_1_Invoke_mC49928CE8766B6B1070200B2B01CA7DD0AB9A108 (Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * __this, InitializationStatus_t7093D8754C20FFF65DB1C809FCA56437C562722C * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC *, InitializationStatus_t7093D8754C20FFF65DB1C809FCA56437C562722C *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m50B28E632FD8931C81DEB9142686282B8A2492D2 (AdError_tA9B94F907044E6043ED34B074D51F65498EFAAC6 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set_client_0(L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.AdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_ToString_m366BD8EB01B338204A6F40149826976FC42FF2D7 (AdError_tA9B94F907044E6043ED34B074D51F65498EFAAC6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m8B5DB461A93533150A02A98E9DDC0683DBE18533 (AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_m7E74468DE5396FC1E30E333962E36B5BC5D44ADD (AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC * __this, LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6 * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6 * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_mFD023AB569A0F2E7C9CE777D05CF0229A589B61E (BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6 * __this, String_t* ___adUnitId0, AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * ___adSize1, int32_t ___position2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_tCD637F75B842D3BEB65B022A6CBE243526101263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t9AF483A28AAD50E1816B668B64A280B488C372B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_m62E0C2B84F833DFA5974323446416ADD01A9E4AD(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* GoogleMobileAds.Common.IBannerClient GoogleMobileAds.IClientFactory::BuildBannerClient() */, IClientFactory_t9AF483A28AAD50E1816B668B64A280B488C372B4_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		RuntimeObject* L_2 = __this->get_client_0();
		String_t* L_3 = ___adUnitId0;
		AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 * L_4 = ___adSize1;
		int32_t L_5 = ___position2;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, AdSize_tB9F6BFA9BA2B5C0D2759043E88A219B5814BF127 *, int32_t >::Invoke(10 /* System.Void GoogleMobileAds.Common.IBannerClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition) */, IBannerClient_tCD637F75B842D3BEB65B022A6CBE243526101263_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		BannerView_ConfigureBannerEvents_mB507EF1BFD6A03D0BD3162B01802A4235077A0D8(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_m2BC2877B1449F11FC9889BF95C4404B50554E235 (BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6 * __this, AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_tCD637F75B842D3BEB65B022A6CBE243526101263_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6 * L_1 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker1< AdRequest_tCE1714026D97810808C3601F863ACBA404BE30E6 * >::Invoke(11 /* System.Void GoogleMobileAds.Common.IBannerClient::LoadAd(GoogleMobileAds.Api.AdRequest) */, IBannerClient_tCD637F75B842D3BEB65B022A6CBE243526101263_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Destroy_m98F5B4C094806ABA851969F643FC587EF6B2E234 (BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_tCD637F75B842D3BEB65B022A6CBE243526101263_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(12 /* System.Void GoogleMobileAds.Common.IBannerClient::DestroyBannerView() */, IBannerClient_tCD637F75B842D3BEB65B022A6CBE243526101263_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::ConfigureBannerEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_ConfigureBannerEvents_mB507EF1BFD6A03D0BD3162B01802A4235077A0D8 (BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__0_mAAC5F520BBB4CFD593FD295CDD5899389D100EC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__1_mBEF3AF7BAB40EB539B497CA05C002FBDAE2694D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__2_m367119D0A7BB1A9977494C31D860D15F74634A9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__3_m15F7111C5DB006FC1679D8D7142A59F7036051F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_U3CConfigureBannerEventsU3Em__4_mACDFD7DD84DBDDAC40E826CC7F25E3F5CE3C1234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m7C43BB1C27C2E208731656D81F73044547B19561_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mE664054E2D0784A7CA87031C137EB9645BD8E8AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t85714B6809C54C03F8A8EF5CA7E06BCCA9F1CB5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBannerClient_tCD637F75B842D3BEB65B022A6CBE243526101263_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_1, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__0_mAAC5F520BBB4CFD593FD295CDD5899389D100EC0_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IBannerClient_tCD637F75B842D3BEB65B022A6CBE243526101263_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->get_client_0();
		EventHandler_1_t85714B6809C54C03F8A8EF5CA7E06BCCA9F1CB5A * L_3 = (EventHandler_1_t85714B6809C54C03F8A8EF5CA7E06BCCA9F1CB5A *)il2cpp_codegen_object_new(EventHandler_1_t85714B6809C54C03F8A8EF5CA7E06BCCA9F1CB5A_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mE664054E2D0784A7CA87031C137EB9645BD8E8AC(L_3, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__1_mBEF3AF7BAB40EB539B497CA05C002FBDAE2694D9_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mE664054E2D0784A7CA87031C137EB9645BD8E8AC_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< EventHandler_1_t85714B6809C54C03F8A8EF5CA7E06BCCA9F1CB5A * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IBannerClient_tCD637F75B842D3BEB65B022A6CBE243526101263_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_5 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_5, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__2_m367119D0A7BB1A9977494C31D860D15F74634A9A_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>) */, IBannerClient_tCD637F75B842D3BEB65B022A6CBE243526101263_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_7, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__3_m15F7111C5DB006FC1679D8D7142A59F7036051F8_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>) */, IBannerClient_tCD637F75B842D3BEB65B022A6CBE243526101263_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D * L_9 = (EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D *)il2cpp_codegen_object_new(EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m7C43BB1C27C2E208731656D81F73044547B19561(L_9, __this, (intptr_t)((intptr_t)BannerView_U3CConfigureBannerEventsU3Em__4_mACDFD7DD84DBDDAC40E826CC7F25E3F5CE3C1234_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m7C43BB1C27C2E208731656D81F73044547B19561_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IBannerClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IBannerClient_tCD637F75B842D3BEB65B022A6CBE243526101263_il2cpp_TypeInfo_var, L_8, L_9);
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__0_mAAC5F520BBB4CFD593FD295CDD5899389D100EC0 (BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_1();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdLoaded_1();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__1_mBEF3AF7BAB40EB539B497CA05C002FBDAE2694D9 (BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6 * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_t8C4AF80746D71CD593F802FA784D49CB495624AE * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m04D9D32B9FE91BC5000F39E47655544D9FC3F906_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6 * V_0 = NULL;
	AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC * V_1 = NULL;
	{
		EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8 * L_0 = __this->get_OnAdFailedToLoad_2();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t8C4AF80746D71CD593F802FA784D49CB495624AE * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m47E6D04DEF85BA69C87809F85E24A1698CDF6820_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6 * L_3 = (LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6 *)il2cpp_codegen_object_new(LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6_il2cpp_TypeInfo_var);
		LoadAdError__ctor_mAF56504B0355080B9595FA33B4AEF5A05E16556E(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_t61F7735EA1A59112F101A454B3674866E358C9F8 * L_4 = __this->get_OnAdFailedToLoad_2();
		AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC * L_5 = (AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_m8B5DB461A93533150A02A98E9DDC0683DBE18533(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC * L_6 = V_1;
		LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6 * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_m7E74468DE5396FC1E30E333962E36B5BC5D44ADD_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m04D9D32B9FE91BC5000F39E47655544D9FC3F906(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_m04D9D32B9FE91BC5000F39E47655544D9FC3F906_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__2_m367119D0A7BB1A9977494C31D860D15F74634A9A (BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_3();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdOpening_3();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__3_m15F7111C5DB006FC1679D8D7142A59F7036051F8 (BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_4();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdClosed_4();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.BannerView::<ConfigureBannerEvents>m__4(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_U3CConfigureBannerEventsU3Em__4_mACDFD7DD84DBDDAC40E826CC7F25E3F5CE3C1234 (BannerView_tB7384E09E7F75B5DC92958AF7F150608CEE839E6 * __this, RuntimeObject * ___sender0, AdValueEventArgs_t2A4AEEF98B2314674EBC8DC05143787D7EAA2031 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m56F2B88909716822072AD00B06657E0FF00D97ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D * L_0 = __this->get_OnPaidEvent_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tDEA0C73C54C6F47E60F6B23947A437B2D3BCDD4D * L_1 = __this->get_OnPaidEvent_5();
		AdValueEventArgs_t2A4AEEF98B2314674EBC8DC05143787D7EAA2031 * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m56F2B88909716822072AD00B06657E0FF00D97ED(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m56F2B88909716822072AD00B06657E0FF00D97ED_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m81DC6F6D6B7A27D15255054E7D62C529F9A76DDB (InitializationStatus_t7093D8754C20FFF65DB1C809FCA56437C562722C * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set_client_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_mAF56504B0355080B9595FA33B4AEF5A05E16556E (LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___client0;
		AdError__ctor_m50B28E632FD8931C81DEB9142686282B8A2492D2(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___client0;
		__this->set_client_1(L_1);
		return;
	}
}
// System.String GoogleMobileAds.Api.LoadAdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadAdError_ToString_mB583768A4CF490C637A8BDFC825B068E3A5D0093 (LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_1();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_m3953F1888686CEEFEDD952220034D28E183836A8 (MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetMobileAdsClient_mE9A341DD0718DCEF3D91401F92AE85C25DF9407D(/*hidden argument*/NULL);
		__this->set_client_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B * MobileAds_get_Instance_m3F5AB541EDE9FA5F15F313D18080DF1B7132FA7A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B * L_0 = ((MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_il2cpp_TypeInfo_var))->get_instance_2();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B * L_1 = (MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B *)il2cpp_codegen_object_new(MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_il2cpp_TypeInfo_var);
		MobileAds__ctor_m3953F1888686CEEFEDD952220034D28E183836A8(L_1, /*hidden argument*/NULL);
		((MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_il2cpp_TypeInfo_var))->set_instance_2(L_1);
	}

IL_0014:
	{
		MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B * L_2 = ((MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_il2cpp_TypeInfo_var))->get_instance_2();
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_mC0143F68C2436E9E811B1B57C94F593D8D762A2C (Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * ___initCompleteAction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m4D3E4AA40EB781E78A850A8CFAA17010BE27216D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2A1A193196C2327863990528D7DD2E96649BF720_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tB15E447CD319064E4181830F59DAE5F317CF20E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t099517A046E77298C089FAE30CF54D735C41CE7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_mE518CF70B8A615803C7B8CB58959A63FC79E68C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ec__AnonStorey0_t1F72CDDE384122345237DC4BF43CB53C62799208_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ec__AnonStorey0_t1F72CDDE384122345237DC4BF43CB53C62799208 * V_0 = NULL;
	{
		U3CInitializeU3Ec__AnonStorey0_t1F72CDDE384122345237DC4BF43CB53C62799208 * L_0 = (U3CInitializeU3Ec__AnonStorey0_t1F72CDDE384122345237DC4BF43CB53C62799208 *)il2cpp_codegen_object_new(U3CInitializeU3Ec__AnonStorey0_t1F72CDDE384122345237DC4BF43CB53C62799208_il2cpp_TypeInfo_var);
		U3CInitializeU3Ec__AnonStorey0__ctor_m3B9F8FC6C6BD43404E9F40A7ABBF8F9A1D857FA0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CInitializeU3Ec__AnonStorey0_t1F72CDDE384122345237DC4BF43CB53C62799208 * L_1 = V_0;
		Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * L_2 = ___initCompleteAction0;
		NullCheck(L_1);
		L_1->set_initCompleteAction_0(L_2);
		MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B * L_3;
		L_3 = MobileAds_get_Instance_m3F5AB541EDE9FA5F15F313D18080DF1B7132FA7A(/*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->get_client_0();
		U3CInitializeU3Ec__AnonStorey0_t1F72CDDE384122345237DC4BF43CB53C62799208 * L_5 = V_0;
		Action_1_t2A1A193196C2327863990528D7DD2E96649BF720 * L_6 = (Action_1_t2A1A193196C2327863990528D7DD2E96649BF720 *)il2cpp_codegen_object_new(Action_1_t2A1A193196C2327863990528D7DD2E96649BF720_il2cpp_TypeInfo_var);
		Action_1__ctor_m4D3E4AA40EB781E78A850A8CFAA17010BE27216D(L_6, L_5, (intptr_t)((intptr_t)U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_mE518CF70B8A615803C7B8CB58959A63FC79E68C2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4D3E4AA40EB781E78A850A8CFAA17010BE27216D_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_t2A1A193196C2327863990528D7DD2E96649BF720 * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::Initialize(System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>) */, IMobileAdsClient_tB15E447CD319064E4181830F59DAE5F317CF20E7_il2cpp_TypeInfo_var, L_4, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_t099517A046E77298C089FAE30CF54D735C41CE7C_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_Initialize_m4D227F5180D25700A4294CE6EA1AB931D0245E58(/*hidden argument*/NULL);
		return;
	}
}
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_m62E0C2B84F833DFA5974323446416ADD01A9E4AD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t9AF483A28AAD50E1816B668B64A280B488C372B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_GetClientFactory_m62E0C2B84F833DFA5974323446416ADD01A9E4AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		RuntimeObject* L_0 = ((MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_il2cpp_TypeInfo_var))->get_clientFactory_1();
		if (L_0)
		{
			goto IL_0056;
		}
	}
	{
		V_0 = (String_t*)NULL;
		int32_t L_1;
		L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
		goto IL_003f;
	}

IL_0022:
	{
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
		goto IL_003f;
	}

IL_0039:
	{
		V_0 = _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
	}

IL_003f:
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, L_3, MobileAds_GetClientFactory_m62E0C2B84F833DFA5974323446416ADD01A9E4AD_RuntimeMethod_var);
		V_1 = L_4;
		Type_t * L_5 = V_1;
		RuntimeObject * L_6;
		L_6 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_5, /*hidden argument*/NULL);
		((MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_il2cpp_TypeInfo_var))->set_clientFactory_1(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_t9AF483A28AAD50E1816B668B64A280B488C372B4_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		RuntimeObject* L_7 = ((MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tFEBD9090ED2E6836B2D63DA2D541D38B4016E11B_il2cpp_TypeInfo_var))->get_clientFactory_1();
		return L_7;
	}
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_mE9A341DD0718DCEF3D91401F92AE85C25DF9407D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t9AF483A28AAD50E1816B668B64A280B488C372B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_m62E0C2B84F833DFA5974323446416ADD01A9E4AD(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.IClientFactory::MobileAdsInstance() */, IClientFactory_t9AF483A28AAD50E1816B668B64A280B488C372B4_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m3B9F8FC6C6BD43404E9F40A7ABBF8F9A1D857FA0 (U3CInitializeU3Ec__AnonStorey0_t1F72CDDE384122345237DC4BF43CB53C62799208 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::<>m__0(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_mE518CF70B8A615803C7B8CB58959A63FC79E68C2 (U3CInitializeU3Ec__AnonStorey0_t1F72CDDE384122345237DC4BF43CB53C62799208 * __this, RuntimeObject* ___initStatusClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mC49928CE8766B6B1070200B2B01CA7DD0AB9A108_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationStatus_t7093D8754C20FFF65DB1C809FCA56437C562722C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * L_0 = __this->get_initCompleteAction_0();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Action_1_t0A77D06CC67DE106BDD92C7A0F81C626A0DCE1EC * L_1 = __this->get_initCompleteAction_0();
		RuntimeObject* L_2 = ___initStatusClient0;
		InitializationStatus_t7093D8754C20FFF65DB1C809FCA56437C562722C * L_3 = (InitializationStatus_t7093D8754C20FFF65DB1C809FCA56437C562722C *)il2cpp_codegen_object_new(InitializationStatus_t7093D8754C20FFF65DB1C809FCA56437C562722C_il2cpp_TypeInfo_var);
		InitializationStatus__ctor_m81DC6F6D6B7A27D15255054E7D62C529F9A76DDB(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Action_1_Invoke_mC49928CE8766B6B1070200B2B01CA7DD0AB9A108(L_1, L_3, /*hidden argument*/Action_1_Invoke_mC49928CE8766B6B1070200B2B01CA7DD0AB9A108_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m47E6D04DEF85BA69C87809F85E24A1698CDF6820_inline (LoadAdErrorClientEventArgs_t8C4AF80746D71CD593F802FA784D49CB495624AE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CLoadAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_m7E74468DE5396FC1E30E333962E36B5BC5D44ADD_inline (AdFailedToLoadEventArgs_tBB02DCA6A29CEE16F2A1D744D39C365F24B27DDC * __this, LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6 * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_t203105576D1FB257A298C940B06FD06F544BFFF6 * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
