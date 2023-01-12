#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,com.adjust.sdk.JSONNode>
struct Dictionary_2_t8310586D40E281DE2C7E50F0594273A3DDCB38A7;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<com.adjust.sdk.JSONNode>
struct List_1_tC6B5C6E3C0915B3ADCE4851E6AB17C943A3F51FA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// com.adjust.sdk.AdjustUtils
struct AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// com.adjust.sdk.JSONArray
struct JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663;
// com.adjust.sdk.JSONClass
struct JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B;
// com.adjust.sdk.JSONData
struct JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412;
// com.adjust.sdk.JSONNode
struct JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// IronSourceJSON.Json/Parser
struct Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87;
// IronSourceJSON.Json/Serializer
struct Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F;

IL2CPP_EXTERN_C RuntimeClass* AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09F6BF5807F21976DC5A8B817678D0F3CA09B367;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0E7889CA73C20C46B2F66AD10574288C6588120D;
IL2CPP_EXTERN_C String_t* _stringLiteral199406D22C247C128830321CCA0F0AA8B9EA8AF2;
IL2CPP_EXTERN_C String_t* _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251;
IL2CPP_EXTERN_C String_t* _stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C;
IL2CPP_EXTERN_C String_t* _stringLiteral252C0671443017876C13A4B1405734D0B2A251E4;
IL2CPP_EXTERN_C String_t* _stringLiteral25E049EC7B4CD14D8602F67EE0C37C9AB40177F0;
IL2CPP_EXTERN_C String_t* _stringLiteral3D5ED547017EE65E294DEE1E52D286F1875F1660;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral587E53A8030FB45502AD4B59E2E80ED12683441E;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5C0B39AFA1D09BF84C4FF1412FDD072EBFBD3124;
IL2CPP_EXTERN_C String_t* _stringLiteral5ED04C43CC8F7FBE8FFFF015C5538190204F9C6B;
IL2CPP_EXTERN_C String_t* _stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84;
IL2CPP_EXTERN_C String_t* _stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46;
IL2CPP_EXTERN_C String_t* _stringLiteral69711252401E05EA08F1FC661CC7158162B64332;
IL2CPP_EXTERN_C String_t* _stringLiteral6F6EDA7F146F65D72B4809F9E8F843CC687A82AE;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral79129E77C99D9B997190424687919AB33976D848;
IL2CPP_EXTERN_C String_t* _stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3;
IL2CPP_EXTERN_C String_t* _stringLiteral7D046F7A5E043071C26805C1E921D468CAB706D4;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral87E6B368D708695D844FB24A36D0437AFFE064A0;
IL2CPP_EXTERN_C String_t* _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069;
IL2CPP_EXTERN_C String_t* _stringLiteral9ACD0102DF47E7CF98E660BDDEC79497C54A8EB3;
IL2CPP_EXTERN_C String_t* _stringLiteral9F85DBEFEA5FADBE3465375963EFAA0318BDEB3E;
IL2CPP_EXTERN_C String_t* _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralACA02A5838DA1B746B34D0B4661576E1D6ED6515;
IL2CPP_EXTERN_C String_t* _stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralC122FD1744C24B2A4C733C7189953AF4AF702474;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCC3135654FE5454A443D0D19C37529E7EE6B1408;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86;
IL2CPP_EXTERN_C String_t* _stringLiteralCCED2B25A49F5AB8A840818C053B996994270607;
IL2CPP_EXTERN_C String_t* _stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12;
IL2CPP_EXTERN_C String_t* _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A3CA0977C7EAB9154A7C6E8BEA40D60065C347;
IL2CPP_EXTERN_C String_t* _stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0;
IL2CPP_EXTERN_C String_t* _stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C;
IL2CPP_EXTERN_C String_t* _stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C;
IL2CPP_EXTERN_C String_t* _stringLiteralEE7F2E90C1A80816B11CAE0EA9389988CBD19F97;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952;
IL2CPP_EXTERN_C String_t* _stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36;
IL2CPP_EXTERN_C String_t* _stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467;
IL2CPP_EXTERN_C String_t* _stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m01BD798AD7B3C3ABC6CFC7A4B9D7A410A0E8C066_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m0E55ACFE8DAB0F44EDF10E9EDF26FD2B84B68122_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m3E66C5AA84110E479EAF0DDBC518BDB9E45199D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// com.adjust.sdk.AdjustUtils
struct AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// com.adjust.sdk.JSONNode
struct JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97  : public RuntimeObject
{
};

// IronSourceJSON.Json
struct Json_tCB200AB7C522C88DD1CD94A7048AD5BD0F6E9B3A  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// IronSourceJSON.Json/Parser
struct Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87  : public RuntimeObject
{
	// System.IO.StringReader IronSourceJSON.Json/Parser::json
	StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* ___json_2;
};

// IronSourceJSON.Json/Serializer
struct Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F  : public RuntimeObject
{
	// System.Text.StringBuilder IronSourceJSON.Json/Serializer::builder
	StringBuilder_t* ___builder_0;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,com.adjust.sdk.JSONNode>
struct KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Nullable`1<com.adjust.sdk.AdjustLogLevel>
struct Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// com.adjust.sdk.JSONArray
struct JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663  : public JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97
{
	// System.Collections.Generic.List`1<com.adjust.sdk.JSONNode> com.adjust.sdk.JSONArray::m_List
	List_1_tC6B5C6E3C0915B3ADCE4851E6AB17C943A3F51FA* ___m_List_0;
};

// com.adjust.sdk.JSONClass
struct JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B  : public JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97
{
	// System.Collections.Generic.Dictionary`2<System.String,com.adjust.sdk.JSONNode> com.adjust.sdk.JSONClass::m_Dict
	Dictionary_2_t8310586D40E281DE2C7E50F0594273A3DDCB38A7* ___m_Dict_0;
};

// com.adjust.sdk.JSONData
struct JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412  : public JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97
{
	// System.String com.adjust.sdk.JSONData::m_Data
	String_t* ___m_Data_0;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.String System.IO.StringReader::_s
	String_t* ____s_2;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_3;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_4;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// com.adjust.sdk.AdjustUtils
struct AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields
{
	// System.String com.adjust.sdk.AdjustUtils::KeyAdid
	String_t* ___KeyAdid_0;
	// System.String com.adjust.sdk.AdjustUtils::KeyMessage
	String_t* ___KeyMessage_1;
	// System.String com.adjust.sdk.AdjustUtils::KeyNetwork
	String_t* ___KeyNetwork_2;
	// System.String com.adjust.sdk.AdjustUtils::KeyAdgroup
	String_t* ___KeyAdgroup_3;
	// System.String com.adjust.sdk.AdjustUtils::KeyCampaign
	String_t* ___KeyCampaign_4;
	// System.String com.adjust.sdk.AdjustUtils::KeyCreative
	String_t* ___KeyCreative_5;
	// System.String com.adjust.sdk.AdjustUtils::KeyWillRetry
	String_t* ___KeyWillRetry_6;
	// System.String com.adjust.sdk.AdjustUtils::KeyTimestamp
	String_t* ___KeyTimestamp_7;
	// System.String com.adjust.sdk.AdjustUtils::KeyCallbackId
	String_t* ___KeyCallbackId_8;
	// System.String com.adjust.sdk.AdjustUtils::KeyEventToken
	String_t* ___KeyEventToken_9;
	// System.String com.adjust.sdk.AdjustUtils::KeyClickLabel
	String_t* ___KeyClickLabel_10;
	// System.String com.adjust.sdk.AdjustUtils::KeyTrackerName
	String_t* ___KeyTrackerName_11;
	// System.String com.adjust.sdk.AdjustUtils::KeyTrackerToken
	String_t* ___KeyTrackerToken_12;
	// System.String com.adjust.sdk.AdjustUtils::KeyJsonResponse
	String_t* ___KeyJsonResponse_13;
	// System.String com.adjust.sdk.AdjustUtils::KeyCostType
	String_t* ___KeyCostType_14;
	// System.String com.adjust.sdk.AdjustUtils::KeyCostAmount
	String_t* ___KeyCostAmount_15;
	// System.String com.adjust.sdk.AdjustUtils::KeyCostCurrency
	String_t* ___KeyCostCurrency_16;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsBaseUrl
	String_t* ___KeyTestOptionsBaseUrl_17;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsGdprUrl
	String_t* ___KeyTestOptionsGdprUrl_18;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsSubscriptionUrl
	String_t* ___KeyTestOptionsSubscriptionUrl_19;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsExtraPath
	String_t* ___KeyTestOptionsExtraPath_20;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsBasePath
	String_t* ___KeyTestOptionsBasePath_21;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsGdprPath
	String_t* ___KeyTestOptionsGdprPath_22;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsDeleteState
	String_t* ___KeyTestOptionsDeleteState_23;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsUseTestConnectionOptions
	String_t* ___KeyTestOptionsUseTestConnectionOptions_24;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsTimerIntervalInMilliseconds
	String_t* ___KeyTestOptionsTimerIntervalInMilliseconds_25;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsTimerStartInMilliseconds
	String_t* ___KeyTestOptionsTimerStartInMilliseconds_26;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsSessionIntervalInMilliseconds
	String_t* ___KeyTestOptionsSessionIntervalInMilliseconds_27;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsSubsessionIntervalInMilliseconds
	String_t* ___KeyTestOptionsSubsessionIntervalInMilliseconds_28;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsTeardown
	String_t* ___KeyTestOptionsTeardown_29;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsNoBackoffWait
	String_t* ___KeyTestOptionsNoBackoffWait_30;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsiAdFrameworkEnabled
	String_t* ___KeyTestOptionsiAdFrameworkEnabled_31;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsAdServicesFrameworkEnabled
	String_t* ___KeyTestOptionsAdServicesFrameworkEnabled_32;
};

// com.adjust.sdk.AdjustUtils

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// com.adjust.sdk.JSONNode

// com.adjust.sdk.JSONNode

// IronSourceJSON.Json

// IronSourceJSON.Json

// System.MarshalByRefObject

// System.MarshalByRefObject

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.ValueType

// System.ValueType

// IronSourceJSON.Json/Parser

// IronSourceJSON.Json/Parser

// IronSourceJSON.Json/Serializer

// IronSourceJSON.Json/Serializer

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,com.adjust.sdk.JSONNode>

// System.Collections.Generic.KeyValuePair`2<System.String,com.adjust.sdk.JSONNode>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// System.Nullable`1<com.adjust.sdk.AdjustLogLevel>

// System.Nullable`1<com.adjust.sdk.AdjustLogLevel>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Double>

// System.Nullable`1<System.Double>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<System.Int64>

// System.Nullable`1<System.Int64>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Decimal

// System.Double

// System.Double

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// com.adjust.sdk.JSONArray

// com.adjust.sdk.JSONArray

// com.adjust.sdk.JSONClass

// com.adjust.sdk.JSONClass

// com.adjust.sdk.JSONData

// com.adjust.sdk.JSONData

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextReader

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::067EAF3F727B985767F95E6014895724A51BEC050B158CBF78429570BF08F888
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___067EAF3F727B985767F95E6014895724A51BEC050B158CBF78429570BF08F888_0;
};

// <PrivateImplementationDetails>

// System.IO.StringReader

// System.IO.StringReader
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int64>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Set<System.Object>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, RuntimeObject* ___1_val, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;

// System.Boolean System.Nullable`1<com.adjust.sdk.AdjustLogLevel>::get_HasValue()
inline bool Nullable_1_get_HasValue_m0E55ACFE8DAB0F44EDF10E9EDF26FD2B84B68122_inline (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// T System.Nullable`1<com.adjust.sdk.AdjustLogLevel>::get_Value()
inline int32_t Nullable_1_get_Value_m3E66C5AA84110E479EAF0DDBC518BDB9E45199D6 (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0*, const RuntimeMethod*))Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Double>::get_Value()
inline double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int64>::get_Value()
inline int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void com.adjust.sdk.JSONArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray__ctor_m6ECA2300A22DEFC3387A72AF03FEC3355B150C4E (JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void com.adjust.sdk.JSONData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONData__ctor_mF07078A36644CD1C44FD4394482FFF67BCCEEAC5 (JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* __this, String_t* ___0_aData, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
inline Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.String com.adjust.sdk.AdjustUtils::GetJsonResponseCompact(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_GetJsonResponseCompact_mB1763C6F6A17665BAA0534CE919BCFB7D7D491F6 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_dictionary, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Boolean com.adjust.sdk.JSONNode::op_Equality(com.adjust.sdk.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634 (JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
// System.Collections.IEnumerator com.adjust.sdk.JSONClass::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONClass_GetEnumerator_mC63BF81FA10F977320F60BFF46CDA748A7F09DAD (JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,com.adjust.sdk.JSONNode>::get_Value()
inline JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_inline (KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* (*) (KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,com.adjust.sdk.JSONNode>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m01BD798AD7B3C3ABC6CFC7A4B9D7A410A0E8C066_inline (KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void com.adjust.sdk.AdjustUtils::WriteJsonResponseDictionary(com.adjust.sdk.JSONClass,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED (JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* ___0_jsonObject, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_output, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<System.String>(System.String,FieldType)
inline void AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, String_t* ___1_val, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, String_t*, const RuntimeMethod*))AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared)(__this, ___0_fieldName, ___1_val, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Set<UnityEngine.AndroidJavaObject>(System.String,FieldType)
inline void AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_val, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, const RuntimeMethod*))AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared)(__this, ___0_fieldName, ___1_val, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Int64 System.Int64::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object IronSourceJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_Parse_m550577AC93E71023378D27EA1361383BA16504CE (String_t* ___0_jsonString, const RuntimeMethod* method) ;
// System.String IronSourceJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m074256116E009BD598CCC76D76661DFADCA49C09 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0 (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* __this, String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void IronSourceJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mF6E2F8B708BC8DA7BDB80DAD1DF622355BF50536 (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, String_t* ___0_jsonString, const RuntimeMethod* method) ;
// System.Object IronSourceJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseValue_m1BDF43E4AD2A64690AAFB6DBA800472F2A94272B (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) ;
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616 (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* __this, const RuntimeMethod* method) ;
// IronSourceJSON.Json/Parser/TOKEN IronSourceJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m2CF12E0515A498D7CD696E6065BB8F5401182EB4 (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) ;
// System.String IronSourceJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m4913878D0B3878423C25644610F690615E7724C2 (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Object IronSourceJSON.Json/Parser::ParseByToken(IronSourceJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseByToken_mF0830ED1965E050AE0195353B26ADB01C87E18F1 (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, int32_t ___0_token, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Object IronSourceJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseNumber_mDE9009CD828B692F4E5683708FEC450BF88D465F (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> IronSourceJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Parser_ParseObject_mF3509D092287719C782B830F60B511483B9E570B (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Object> IronSourceJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Parser_ParseArray_m3F732244DC13726B9DB99A9A335D4E8A9B31A575 (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Char IronSourceJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m93C329D94339309A4654DF11D6C06D4D1ABBDBDF (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mD1B3AFBDA26E52D0382434804364FEF8BA241FB4 (String_t* ___0_value, int32_t ___1_fromBase, const RuntimeMethod* method) ;
// System.String IronSourceJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m0FDD048038CF96F085F527E30FB94893225C2725 (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m64CEDECE4C3F16B715CA1057801018B2957AE0E3 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, int64_t* ___3_result, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m1D39DC22A45BC9A576B9D9130600BFD3CB6DA382 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, double* ___3_result, const RuntimeMethod* method) ;
// System.Char IronSourceJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m631004C7D090E106B50F8CDFA62CB254B8C5553A (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) ;
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void IronSourceJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m3D91DD801FB915B39B1A5B133CB159DA4A6D2CF1 (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) ;
// System.Void IronSourceJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m75AAE9DA26CF48B1C8608E850915E74AC135BD0F (Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F* __this, const RuntimeMethod* method) ;
// System.Void IronSourceJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m402A1869F9E3A33F621B305ED4C2322D6C1B16A7 (Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void IronSourceJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m5FB343C30BD22AB9DE403EB8135FF8C9A58DBF4C (Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F* __this, String_t* ___0_str, const RuntimeMethod* method) ;
// System.Void IronSourceJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mCC39C55C650C20A797385B9B3737F6DF08ECB30D (Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F* __this, RuntimeObject* ___0_anArray, const RuntimeMethod* method) ;
// System.Void IronSourceJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m76665B596B2DA337CFBAFD5374CBC170E29AE684 (Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void IronSourceJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m1ADF12DA620629116FC15C5FF3E60019B8409AA0 (Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mDBBE9318A7CCE1560974CE93F5BFED9931CF0052 (Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35 (int32_t ___0_value, int32_t ___1_toBase, const RuntimeMethod* method) ;
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F (String_t* __this, int32_t ___0_totalWidth, Il2CppChar ___1_paddingChar, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 com.adjust.sdk.AdjustUtils::ConvertLogLevel(System.Nullable`1<com.adjust.sdk.AdjustLogLevel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdjustUtils_ConvertLogLevel_mF7D0CB4C0B08008E37686670B7361871B737A53F (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0 ___0_logLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m0E55ACFE8DAB0F44EDF10E9EDF26FD2B84B68122_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m3E66C5AA84110E479EAF0DDBC518BDB9E45199D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (logLevel == null)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m0E55ACFE8DAB0F44EDF10E9EDF26FD2B84B68122_inline((&___0_logLevel), Nullable_1_get_HasValue_m0E55ACFE8DAB0F44EDF10E9EDF26FD2B84B68122_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// return (int)logLevel;
		int32_t L_1;
		L_1 = Nullable_1_get_Value_m3E66C5AA84110E479EAF0DDBC518BDB9E45199D6((&___0_logLevel), Nullable_1_get_Value_m3E66C5AA84110E479EAF0DDBC518BDB9E45199D6_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 com.adjust.sdk.AdjustUtils::ConvertBool(System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdjustUtils_ConvertBool_mBFC3BC841A003201C7056448C67C35625379E786 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&___0_value), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// if (value.Value)
		bool L_1;
		L_1 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&___0_value), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0016:
	{
		// return 0;
		return 0;
	}
}
// System.Double com.adjust.sdk.AdjustUtils::ConvertDouble(System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AdjustUtils_ConvertDouble_m328F7E087047FA52AEF1D681FCCD32D80791B749 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___0_value), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return -1;
		return (-1.0);
	}

IL_0013:
	{
		// return (double)value;
		double L_1;
		L_1 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&___0_value), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		return ((double)L_1);
	}
}
// System.Int32 com.adjust.sdk.AdjustUtils::ConvertInt(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdjustUtils_ConvertInt_mE9AACF8054BA25B7605B3F8727091ED4F41CF37C (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___0_value), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// return (int)value;
		int32_t L_1;
		L_1 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&___0_value), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int64 com.adjust.sdk.AdjustUtils::ConvertLong(System.Nullable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AdjustUtils_ConvertLong_m7B66091ED09C4DA947FB5C61D5AC40762100FAF4 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&___0_value), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// return -1;
		return ((int64_t)(-1));
	}

IL_000c:
	{
		// return (long)value;
		int64_t L_1;
		L_1 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC((&___0_value), Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		return L_1;
	}
}
// System.String com.adjust.sdk.AdjustUtils::ConvertListToJson(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_ConvertListToJson_m0834067B90DD8AA9713B0A395933C806BDB84689 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	{
		// if (list == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0005:
	{
		// if (list.Count % 2 != 0)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = ___0_list;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_1, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if (!((int32_t)(L_2%2)))
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0011:
	{
		// List<String> processedList = new List<String>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_3;
		// for (int i = 0; i < list.Count; i += 2)
		V_2 = 0;
		goto IL_0048;
	}

IL_001b:
	{
		// String key = list[i];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___0_list;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_4, L_5, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_3 = L_6;
		// String value = list[i + 1];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ___0_list;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_4 = L_9;
		// if (key == null || value == null)
		String_t* L_10 = V_3;
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_11 = V_4;
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		// processedList.Add(key);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_0;
		String_t* L_13 = V_3;
		NullCheck(L_12);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// processedList.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = V_0;
		String_t* L_15 = V_4;
		NullCheck(L_14);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0044:
	{
		// for (int i = 0; i < list.Count; i += 2)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 2));
	}

IL_0048:
	{
		// for (int i = 0; i < list.Count; i += 2)
		int32_t L_17 = V_2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = ___0_list;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_18, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_001b;
		}
	}
	{
		// var jsonArray = new JSONArray();
		JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663* L_20 = (JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663*)il2cpp_codegen_object_new(JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		JSONArray__ctor_m6ECA2300A22DEFC3387A72AF03FEC3355B150C4E(L_20, NULL);
		V_1 = L_20;
		// foreach (var listItem in processedList)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = V_0;
		NullCheck(L_21);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_22;
		L_22 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_21, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_5 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_5), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0077_1;
			}

IL_0061_1:
			{
				// foreach (var listItem in processedList)
				String_t* L_23;
				L_23 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_5), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_6 = L_23;
				// jsonArray.Add(new JSONData(listItem));
				JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663* L_24 = V_1;
				String_t* L_25 = V_6;
				JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* L_26 = (JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412*)il2cpp_codegen_object_new(JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412_il2cpp_TypeInfo_var);
				NullCheck(L_26);
				JSONData__ctor_mF07078A36644CD1C44FD4394482FFF67BCCEEAC5(L_26, L_25, NULL);
				NullCheck(L_24);
				VirtualActionInvoker1< JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* >::Invoke(12 /* System.Void com.adjust.sdk.JSONNode::Add(com.adjust.sdk.JSONNode) */, L_24, L_26);
			}

IL_0077_1:
			{
				// foreach (var listItem in processedList)
				bool L_27;
				L_27 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_5), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0061_1;
				}
			}
			{
				goto IL_0090;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0090:
	{
		// return jsonArray.ToString();
		JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663* L_28 = V_1;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		return L_29;
	}
}
// System.String com.adjust.sdk.AdjustUtils::GetJsonResponseCompact(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_GetJsonResponseCompact_mB1763C6F6A17665BAA0534CE919BCFB7D7D491F6 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_dictionary, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_5 = NULL;
	{
		// string logJsonResponse = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (dictionary == null)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___0_dictionary;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return logJsonResponse;
		String_t* L_1 = V_0;
		return L_1;
	}

IL_000b:
	{
		// int preLoopCounter = 0;
		V_1 = 0;
		// logJsonResponse += "{";
		String_t* L_2 = V_0;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		V_0 = L_3;
		// foreach (KeyValuePair<string, object> pair in dictionary)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ___0_dictionary;
		NullCheck(L_4);
		Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 L_5;
		L_5 = Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC(L_4, Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0135:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F((&V_2), Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0127_1;
			}

IL_0025_1:
			{
				// foreach (KeyValuePair<string, object> pair in dictionary)
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_6;
				L_6 = Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline((&V_2), Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
				V_3 = L_6;
				// String valueString = pair.Value as string;
				RuntimeObject* L_7;
				L_7 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_3), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				V_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var));
				// if (valueString != null)
				String_t* L_8 = V_4;
				if (!L_8)
				{
					goto IL_00df_1;
				}
			}
			{
				// if (++preLoopCounter > 1)
				int32_t L_9 = V_1;
				int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
				V_1 = L_10;
				if ((((int32_t)L_10) <= ((int32_t)1)))
				{
					goto IL_0056_1;
				}
			}
			{
				// logJsonResponse += ",";
				String_t* L_11 = V_0;
				String_t* L_12;
				L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				V_0 = L_12;
			}

IL_0056_1:
			{
				// if (valueString.StartsWith("{") && valueString.EndsWith("}"))
				String_t* L_13 = V_4;
				NullCheck(L_13);
				bool L_14;
				L_14 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_13, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
				if (!L_14)
				{
					goto IL_00a6_1;
				}
			}
			{
				String_t* L_15 = V_4;
				NullCheck(L_15);
				bool L_16;
				L_16 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_15, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
				if (!L_16)
				{
					goto IL_00a6_1;
				}
			}
			{
				// logJsonResponse += "\"" + pair.Key + "\"" + ":" + valueString;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
				String_t* L_19 = V_0;
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, L_19);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_18;
				NullCheck(L_20);
				ArrayElementTypeCheck (L_20, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
				String_t* L_22;
				L_22 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_3), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				NullCheck(L_21);
				ArrayElementTypeCheck (L_21, L_22);
				(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_22);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_21;
				NullCheck(L_23);
				ArrayElementTypeCheck (L_23, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
				(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
				String_t* L_25 = V_4;
				NullCheck(L_24);
				ArrayElementTypeCheck (L_24, L_25);
				(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_25);
				String_t* L_26;
				L_26 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_24, NULL);
				V_0 = L_26;
				goto IL_0127_1;
			}

IL_00a6_1:
			{
				// logJsonResponse += "\"" + pair.Key + "\"" + ":" + "\"" + valueString + "\"";
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
				String_t* L_29 = V_0;
				NullCheck(L_28);
				ArrayElementTypeCheck (L_28, L_29);
				(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_29);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_28;
				NullCheck(L_30);
				ArrayElementTypeCheck (L_30, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
				String_t* L_32;
				L_32 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_3), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				NullCheck(L_31);
				ArrayElementTypeCheck (L_31, L_32);
				(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_32);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_31;
				NullCheck(L_33);
				ArrayElementTypeCheck (L_33, _stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
				(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
				String_t* L_35 = V_4;
				NullCheck(L_34);
				ArrayElementTypeCheck (L_34, L_35);
				(L_34)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_35);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_34;
				NullCheck(L_36);
				ArrayElementTypeCheck (L_36, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				(L_36)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				String_t* L_37;
				L_37 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_36, NULL);
				V_0 = L_37;
				// continue;
				goto IL_0127_1;
			}

IL_00df_1:
			{
				// Dictionary<string, object> valueDictionary = pair.Value as Dictionary<string, object>;
				RuntimeObject* L_38;
				L_38 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_3), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				V_5 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)IsInstClass((RuntimeObject*)L_38, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
				// if (++preLoopCounter > 1)
				int32_t L_39 = V_1;
				int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				V_1 = L_40;
				if ((((int32_t)L_40) <= ((int32_t)1)))
				{
					goto IL_0101_1;
				}
			}
			{
				// logJsonResponse += ",";
				String_t* L_41 = V_0;
				String_t* L_42;
				L_42 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_41, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				V_0 = L_42;
			}

IL_0101_1:
			{
				// logJsonResponse += "\"" + pair.Key + "\"" + ":";
				String_t* L_43 = V_0;
				String_t* L_44;
				L_44 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_3), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				String_t* L_45;
				L_45 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_43, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_44, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0, NULL);
				V_0 = L_45;
				// logJsonResponse += GetJsonResponseCompact(valueDictionary);
				String_t* L_46 = V_0;
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_47 = V_5;
				il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
				String_t* L_48;
				L_48 = AdjustUtils_GetJsonResponseCompact_mB1763C6F6A17665BAA0534CE919BCFB7D7D491F6(L_47, NULL);
				String_t* L_49;
				L_49 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_46, L_48, NULL);
				V_0 = L_49;
			}

IL_0127_1:
			{
				// foreach (KeyValuePair<string, object> pair in dictionary)
				bool L_50;
				L_50 = Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E((&V_2), Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
				if (L_50)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_0143;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0143:
	{
		// logJsonResponse += "}";
		String_t* L_51 = V_0;
		String_t* L_52;
		L_52 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_51, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		V_0 = L_52;
		// return logJsonResponse;
		String_t* L_53 = V_0;
		return L_53;
	}
}
// System.String com.adjust.sdk.AdjustUtils::GetJsonString(com.adjust.sdk.JSONNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1 (JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* ___0_node, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* V_0 = NULL;
	{
		// if (node == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_0 = ___0_node;
		bool L_1;
		L_1 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_000b:
	{
		// var nodeValue = node[key] as JSONData;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = ___0_node;
		String_t* L_3 = ___1_key;
		NullCheck(L_2);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_4;
		L_4 = VirtualFuncInvoker1< JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97*, String_t* >::Invoke(7 /* com.adjust.sdk.JSONNode com.adjust.sdk.JSONNode::get_Item(System.String) */, L_2, L_3);
		V_0 = ((JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412*)IsInstClass((RuntimeObject*)L_4, JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412_il2cpp_TypeInfo_var));
		// if (nodeValue == null)
		JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* L_5 = V_0;
		bool L_6;
		L_6 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_5, NULL, NULL);
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0023:
	{
		// if (nodeValue == "")
		JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* L_7 = V_0;
		bool L_8;
		L_8 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0032:
	{
		// return nodeValue.Value;
		JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String com.adjust.sdk.JSONNode::get_Value() */, L_9);
		return L_10;
	}
}
// System.Void com.adjust.sdk.AdjustUtils::WriteJsonResponseDictionary(com.adjust.sdk.JSONClass,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED (JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* ___0_jsonObject, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_output, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m01BD798AD7B3C3ABC6CFC7A4B9D7A410A0E8C066_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E V_1;
	memset((&V_1), 0, sizeof(V_1));
	JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* V_2 = NULL;
	String_t* V_3 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_4 = NULL;
	String_t* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// foreach (KeyValuePair<string, JSONNode> pair in jsonObject)
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_0 = ___0_jsonObject;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = JSONClass_GetEnumerator_mC63BF81FA10F977320F60BFF46CDA748A7F09DAD(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_0081;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0081:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0064_1;
			}

IL_0009_1:
			{
				// foreach (KeyValuePair<string, JSONNode> pair in jsonObject)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = ((*(KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E*)((KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E*)(KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E*)UnBox(L_6, KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E_il2cpp_TypeInfo_var))));
				// var subNode = pair.Value.AsObject;
				JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_7;
				L_7 = KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_inline((&V_1), KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_RuntimeMethod_var);
				NullCheck(L_7);
				JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_8;
				L_8 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_7);
				V_2 = L_8;
				// var key = pair.Key;
				String_t* L_9;
				L_9 = KeyValuePair_2_get_Key_m01BD798AD7B3C3ABC6CFC7A4B9D7A410A0E8C066_inline((&V_1), KeyValuePair_2_get_Key_m01BD798AD7B3C3ABC6CFC7A4B9D7A410A0E8C066_RuntimeMethod_var);
				V_3 = L_9;
				// if (subNode == null)
				JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_10 = V_2;
				bool L_11;
				L_11 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_10, NULL, NULL);
				if (!L_11)
				{
					goto IL_004c_1;
				}
			}
			{
				// var value = pair.Value.Value;
				JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_12;
				L_12 = KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_inline((&V_1), KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_RuntimeMethod_var);
				NullCheck(L_12);
				String_t* L_13;
				L_13 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String com.adjust.sdk.JSONNode::get_Value() */, L_12);
				V_5 = L_13;
				// output.Add(key, value);
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_14 = ___1_output;
				String_t* L_15 = V_3;
				String_t* L_16 = V_5;
				NullCheck(L_14);
				Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_14, L_15, L_16, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
				// continue;
				goto IL_0064_1;
			}

IL_004c_1:
			{
				// var newSubDictionary = new Dictionary<string, object>();
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_17 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_17, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
				V_4 = L_17;
				// output.Add(key, newSubDictionary);
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_18 = ___1_output;
				String_t* L_19 = V_3;
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_20 = V_4;
				NullCheck(L_18);
				Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_18, L_19, L_20, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
				// WriteJsonResponseDictionary(subNode, newSubDictionary);
				JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_21 = V_2;
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_22 = V_4;
				il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
				AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED(L_21, L_22, NULL);
			}

IL_0064_1:
			{
				// foreach (KeyValuePair<string, JSONNode> pair in jsonObject)
				RuntimeObject* L_23 = V_0;
				NullCheck(L_23);
				bool L_24;
				L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				if (L_24)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0082;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.String com.adjust.sdk.AdjustUtils::TryGetValue(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_dictionary, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (dictionary.TryGetValue(key, out value))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_dictionary;
		String_t* L_1 = ___1_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// if (value == "")
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_001a:
	{
		// return value;
		String_t* L_5 = V_0;
		return L_5;
	}

IL_001c:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// UnityEngine.AndroidJavaObject com.adjust.sdk.AdjustUtils::TestOptionsMap2AndroidJavaObject(System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AdjustUtils_TestOptionsMap2AndroidJavaObject_m898CB8FB47E84D854197B546786A2AD9C160FCAB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_testOptionsMap, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_ajoCurrentActivity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25E049EC7B4CD14D8602F67EE0C37C9AB40177F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F6EDA7F146F65D72B4809F9E8F843CC687A82AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA02A5838DA1B746B34D0B4661576E1D6ED6515);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCED2B25A49F5AB8A840818C053B996994270607);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	bool V_1 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	int64_t V_3 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_4 = NULL;
	int64_t V_5 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_6 = NULL;
	int64_t V_7 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_8 = NULL;
	int64_t V_9 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_10 = NULL;
	bool V_11 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_12 = NULL;
	bool V_13 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_14 = NULL;
	{
		// AndroidJavaObject ajoTestOptions = new AndroidJavaObject("com.adjust.sdk.AdjustTestOptions");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteralACA02A5838DA1B746B34D0B4661576E1D6ED6515, L_0, NULL);
		V_0 = L_1;
		// ajoTestOptions.Set<String>("baseUrl", testOptionsMap[KeyTestOptionsBaseUrl]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_4 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsBaseUrl_17;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_3, L_4, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_2, _stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46, L_5, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// ajoTestOptions.Set<String>("gdprUrl", testOptionsMap[KeyTestOptionsGdprUrl]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = ___0_testOptionsMap;
		String_t* L_8 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsGdprUrl_18;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_7, L_8, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_6);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_6, _stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888, L_9, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// ajoTestOptions.Set<String>("subscriptionUrl", testOptionsMap[KeyTestOptionsSubscriptionUrl]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = ___0_testOptionsMap;
		String_t* L_12 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubscriptionUrl_19;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_11, L_12, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_10);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_10, _stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C, L_13, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// if (testOptionsMap.ContainsKey(KeyTestOptionsExtraPath) && !string.IsNullOrEmpty(testOptionsMap[KeyTestOptionsExtraPath]))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = ___0_testOptionsMap;
		String_t* L_15 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_20;
		NullCheck(L_14);
		bool L_16;
		L_16 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_14, L_15, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_00b3;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_17 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_18 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_20;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_17, L_18, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_20;
		L_20 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_19, NULL);
		if (L_20)
		{
			goto IL_00b3;
		}
	}
	{
		// ajoTestOptions.Set<String>("basePath", testOptionsMap[KeyTestOptionsExtraPath]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_22 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_23 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_20;
		NullCheck(L_22);
		String_t* L_24;
		L_24 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_22, L_23, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_21);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_21, _stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84, L_24, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// ajoTestOptions.Set<String>("gdprPath", testOptionsMap[KeyTestOptionsExtraPath]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_26 = ___0_testOptionsMap;
		String_t* L_27 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_20;
		NullCheck(L_26);
		String_t* L_28;
		L_28 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_26, L_27, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_25);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_25, _stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309, L_28, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// ajoTestOptions.Set<String>("subscriptionPath", testOptionsMap[KeyTestOptionsExtraPath]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_30 = ___0_testOptionsMap;
		String_t* L_31 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_20;
		NullCheck(L_30);
		String_t* L_32;
		L_32 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_30, L_31, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_29);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_29, _stringLiteral25E049EC7B4CD14D8602F67EE0C37C9AB40177F0, L_32, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
	}

IL_00b3:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsDeleteState) && ajoCurrentActivity != null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_33 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_34 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsDeleteState_23;
		NullCheck(L_33);
		bool L_35;
		L_35 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_33, L_34, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_35)
		{
			goto IL_00cf;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_36 = ___1_ajoCurrentActivity;
		if (!L_36)
		{
			goto IL_00cf;
		}
	}
	{
		// ajoTestOptions.Set<AndroidJavaObject>("context", ajoCurrentActivity);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_37 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_38 = ___1_ajoCurrentActivity;
		NullCheck(L_37);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_37, _stringLiteral6F6EDA7F146F65D72B4809F9E8F843CC687A82AE, L_38, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_00cf:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsUseTestConnectionOptions))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_39 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_40 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsUseTestConnectionOptions_24;
		NullCheck(L_39);
		bool L_41;
		L_41 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_39, L_40, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_41)
		{
			goto IL_011d;
		}
	}
	{
		// bool useTestConnectionOptions = testOptionsMap[KeyTestOptionsUseTestConnectionOptions].ToLower() == "true";
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_42 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_43 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsUseTestConnectionOptions_24;
		NullCheck(L_42);
		String_t* L_44;
		L_44 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_42, L_43, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_44, NULL);
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		V_1 = L_46;
		// AndroidJavaObject ajoUseTestConnectionOptions = new AndroidJavaObject("java.lang.Boolean", useTestConnectionOptions);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = L_47;
		bool L_49 = V_1;
		bool L_50 = L_49;
		RuntimeObject* L_51 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_51);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_52 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_52, _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_48, NULL);
		V_2 = L_52;
		// ajoTestOptions.Set<AndroidJavaObject>("useTestConnectionOptions", ajoUseTestConnectionOptions);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_53 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_54 = V_2;
		NullCheck(L_53);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_53, _stringLiteralCCED2B25A49F5AB8A840818C053B996994270607, L_54, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_011d:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsTimerIntervalInMilliseconds))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_55 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_56 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerIntervalInMilliseconds_25;
		NullCheck(L_55);
		bool L_57;
		L_57 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_55, L_56, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_57)
		{
			goto IL_0163;
		}
	}
	{
		// var timerIntervalInMilliseconds = long.Parse(testOptionsMap[KeyTestOptionsTimerIntervalInMilliseconds]);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_58 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_59 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerIntervalInMilliseconds_25;
		NullCheck(L_58);
		String_t* L_60;
		L_60 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_58, L_59, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		int64_t L_61;
		L_61 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(L_60, NULL);
		V_3 = L_61;
		// AndroidJavaObject ajoTimerIntervalInMilliseconds = new AndroidJavaObject("java.lang.Long", timerIntervalInMilliseconds);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = L_62;
		int64_t L_64 = V_3;
		int64_t L_65 = L_64;
		RuntimeObject* L_66 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_65);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_66);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_66);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_67 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_67, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_63, NULL);
		V_4 = L_67;
		// ajoTestOptions.Set<AndroidJavaObject>("timerIntervalInMilliseconds", ajoTimerIntervalInMilliseconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_68 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_69 = V_4;
		NullCheck(L_68);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_68, _stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36, L_69, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_0163:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsTimerStartInMilliseconds))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_70 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_71 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerStartInMilliseconds_26;
		NullCheck(L_70);
		bool L_72;
		L_72 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_70, L_71, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_72)
		{
			goto IL_01ab;
		}
	}
	{
		// var timerStartInMilliseconds = long.Parse(testOptionsMap[KeyTestOptionsTimerStartInMilliseconds]);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_73 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_74 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerStartInMilliseconds_26;
		NullCheck(L_73);
		String_t* L_75;
		L_75 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_73, L_74, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		int64_t L_76;
		L_76 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(L_75, NULL);
		V_5 = L_76;
		// AndroidJavaObject ajoTimerStartInMilliseconds = new AndroidJavaObject("java.lang.Long", timerStartInMilliseconds);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_77 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = L_77;
		int64_t L_79 = V_5;
		int64_t L_80 = L_79;
		RuntimeObject* L_81 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_81);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_81);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_82 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_82);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_82, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_78, NULL);
		V_6 = L_82;
		// ajoTestOptions.Set<AndroidJavaObject>("timerStartInMilliseconds", ajoTimerStartInMilliseconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_83 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_84 = V_6;
		NullCheck(L_83);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_83, _stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86, L_84, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_01ab:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsSessionIntervalInMilliseconds))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_85 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_86 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSessionIntervalInMilliseconds_27;
		NullCheck(L_85);
		bool L_87;
		L_87 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_85, L_86, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_87)
		{
			goto IL_01f3;
		}
	}
	{
		// var sessionIntervalInMilliseconds = long.Parse(testOptionsMap[KeyTestOptionsSessionIntervalInMilliseconds]);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_88 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_89 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSessionIntervalInMilliseconds_27;
		NullCheck(L_88);
		String_t* L_90;
		L_90 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_88, L_89, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		int64_t L_91;
		L_91 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(L_90, NULL);
		V_7 = L_91;
		// AndroidJavaObject ajoSessionIntervalInMilliseconds = new AndroidJavaObject("java.lang.Long", sessionIntervalInMilliseconds);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_92 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_93 = L_92;
		int64_t L_94 = V_7;
		int64_t L_95 = L_94;
		RuntimeObject* L_96 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_95);
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_96);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_96);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_97 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_97);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_97, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_93, NULL);
		V_8 = L_97;
		// ajoTestOptions.Set<AndroidJavaObject>("sessionIntervalInMilliseconds", ajoSessionIntervalInMilliseconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_98 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_99 = V_8;
		NullCheck(L_98);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_98, _stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467, L_99, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_01f3:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsSubsessionIntervalInMilliseconds))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_100 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_101 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubsessionIntervalInMilliseconds_28;
		NullCheck(L_100);
		bool L_102;
		L_102 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_100, L_101, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_102)
		{
			goto IL_023b;
		}
	}
	{
		// var subsessionIntervalInMilliseconds = long.Parse(testOptionsMap[KeyTestOptionsSubsessionIntervalInMilliseconds]);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_103 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_104 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubsessionIntervalInMilliseconds_28;
		NullCheck(L_103);
		String_t* L_105;
		L_105 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_103, L_104, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		int64_t L_106;
		L_106 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(L_105, NULL);
		V_9 = L_106;
		// AndroidJavaObject ajoSubsessionIntervalInMilliseconds = new AndroidJavaObject("java.lang.Long", subsessionIntervalInMilliseconds);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_107 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_108 = L_107;
		int64_t L_109 = V_9;
		int64_t L_110 = L_109;
		RuntimeObject* L_111 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_110);
		NullCheck(L_108);
		ArrayElementTypeCheck (L_108, L_111);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_111);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_112 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_112);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_112, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_108, NULL);
		V_10 = L_112;
		// ajoTestOptions.Set<AndroidJavaObject>("subsessionIntervalInMilliseconds", ajoSubsessionIntervalInMilliseconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_113 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_114 = V_10;
		NullCheck(L_113);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_113, _stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C, L_114, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_023b:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsTeardown))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_115 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_116 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTeardown_29;
		NullCheck(L_115);
		bool L_117;
		L_117 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_115, L_116, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_117)
		{
			goto IL_028d;
		}
	}
	{
		// bool teardown = testOptionsMap[KeyTestOptionsTeardown].ToLower() == "true";
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_118 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_119 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTeardown_29;
		NullCheck(L_118);
		String_t* L_120;
		L_120 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_118, L_119, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_120);
		String_t* L_121;
		L_121 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_120, NULL);
		bool L_122;
		L_122 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_121, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		V_11 = L_122;
		// AndroidJavaObject ajoTeardown = new AndroidJavaObject("java.lang.Boolean", teardown);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_123 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_124 = L_123;
		bool L_125 = V_11;
		bool L_126 = L_125;
		RuntimeObject* L_127 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_126);
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, L_127);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_127);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_128 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_128);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_128, _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_124, NULL);
		V_12 = L_128;
		// ajoTestOptions.Set<AndroidJavaObject>("teardown", ajoTeardown);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_129 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_130 = V_12;
		NullCheck(L_129);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_129, _stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12, L_130, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_028d:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsNoBackoffWait))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_131 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_132 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsNoBackoffWait_30;
		NullCheck(L_131);
		bool L_133;
		L_133 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_131, L_132, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_133)
		{
			goto IL_02df;
		}
	}
	{
		// bool noBackoffWait = testOptionsMap[KeyTestOptionsNoBackoffWait].ToLower() == "true";
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_134 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_135 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsNoBackoffWait_30;
		NullCheck(L_134);
		String_t* L_136;
		L_136 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_134, L_135, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_136);
		String_t* L_137;
		L_137 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_136, NULL);
		bool L_138;
		L_138 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_137, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		V_13 = L_138;
		// AndroidJavaObject ajoNoBackoffWait = new AndroidJavaObject("java.lang.Boolean", noBackoffWait);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_139 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_140 = L_139;
		bool L_141 = V_13;
		bool L_142 = L_141;
		RuntimeObject* L_143 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_142);
		NullCheck(L_140);
		ArrayElementTypeCheck (L_140, L_143);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_143);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_144 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_144);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_144, _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_140, NULL);
		V_14 = L_144;
		// ajoTestOptions.Set<AndroidJavaObject>("noBackoffWait", ajoNoBackoffWait);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_145 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_146 = V_14;
		NullCheck(L_145);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_145, _stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3, L_146, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_02df:
	{
		// return ajoTestOptions;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_147 = V_0;
		return L_147;
	}
}
// System.Void com.adjust.sdk.AdjustUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustUtils__ctor_mEE74F3B9A26BAE12B3C426FF63604FD7396544A2 (AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void com.adjust.sdk.AdjustUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustUtils__cctor_m4489DD780E5669549E8C7EDAF985BDEC7AC456E1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09F6BF5807F21976DC5A8B817678D0F3CA09B367);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E7889CA73C20C46B2F66AD10574288C6588120D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral199406D22C247C128830321CCA0F0AA8B9EA8AF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral252C0671443017876C13A4B1405734D0B2A251E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D5ED547017EE65E294DEE1E52D286F1875F1660);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587E53A8030FB45502AD4B59E2E80ED12683441E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C0B39AFA1D09BF84C4FF1412FDD072EBFBD3124);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ED04C43CC8F7FBE8FFFF015C5538190204F9C6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69711252401E05EA08F1FC661CC7158162B64332);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79129E77C99D9B997190424687919AB33976D848);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D046F7A5E043071C26805C1E921D468CAB706D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6B368D708695D844FB24A36D0437AFFE064A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ACD0102DF47E7CF98E660BDDEC79497C54A8EB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F85DBEFEA5FADBE3465375963EFAA0318BDEB3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC122FD1744C24B2A4C733C7189953AF4AF702474);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC3135654FE5454A443D0D19C37529E7EE6B1408);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCED2B25A49F5AB8A840818C053B996994270607);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5A3CA0977C7EAB9154A7C6E8BEA40D60065C347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE7F2E90C1A80816B11CAE0EA9389988CBD19F97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string KeyAdid = "adid";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0 = _stringLiteral87E6B368D708695D844FB24A36D0437AFFE064A0;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0), (void*)_stringLiteral87E6B368D708695D844FB24A36D0437AFFE064A0);
		// public static string KeyMessage = "message";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1 = _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1), (void*)_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		// public static string KeyNetwork = "network";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyNetwork_2 = _stringLiteral199406D22C247C128830321CCA0F0AA8B9EA8AF2;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyNetwork_2), (void*)_stringLiteral199406D22C247C128830321CCA0F0AA8B9EA8AF2);
		// public static string KeyAdgroup = "adgroup";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdgroup_3 = _stringLiteral252C0671443017876C13A4B1405734D0B2A251E4;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdgroup_3), (void*)_stringLiteral252C0671443017876C13A4B1405734D0B2A251E4);
		// public static string KeyCampaign = "campaign";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCampaign_4 = _stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCampaign_4), (void*)_stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C);
		// public static string KeyCreative = "creative";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCreative_5 = _stringLiteral3D5ED547017EE65E294DEE1E52D286F1875F1660;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCreative_5), (void*)_stringLiteral3D5ED547017EE65E294DEE1E52D286F1875F1660);
		// public static string KeyWillRetry = "willRetry";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyWillRetry_6 = _stringLiteralC122FD1744C24B2A4C733C7189953AF4AF702474;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyWillRetry_6), (void*)_stringLiteralC122FD1744C24B2A4C733C7189953AF4AF702474);
		// public static string KeyTimestamp = "timestamp";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7 = _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7), (void*)_stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294);
		// public static string KeyCallbackId = "callbackId";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCallbackId_8 = _stringLiteral69711252401E05EA08F1FC661CC7158162B64332;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCallbackId_8), (void*)_stringLiteral69711252401E05EA08F1FC661CC7158162B64332);
		// public static string KeyEventToken = "eventToken";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyEventToken_9 = _stringLiteral79129E77C99D9B997190424687919AB33976D848;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyEventToken_9), (void*)_stringLiteral79129E77C99D9B997190424687919AB33976D848);
		// public static string KeyClickLabel = "clickLabel";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyClickLabel_10 = _stringLiteral0E7889CA73C20C46B2F66AD10574288C6588120D;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyClickLabel_10), (void*)_stringLiteral0E7889CA73C20C46B2F66AD10574288C6588120D);
		// public static string KeyTrackerName = "trackerName";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerName_11 = _stringLiteral5C0B39AFA1D09BF84C4FF1412FDD072EBFBD3124;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerName_11), (void*)_stringLiteral5C0B39AFA1D09BF84C4FF1412FDD072EBFBD3124);
		// public static string KeyTrackerToken = "trackerToken";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerToken_12 = _stringLiteral5ED04C43CC8F7FBE8FFFF015C5538190204F9C6B;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerToken_12), (void*)_stringLiteral5ED04C43CC8F7FBE8FFFF015C5538190204F9C6B);
		// public static string KeyJsonResponse = "jsonResponse";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13 = _stringLiteral9ACD0102DF47E7CF98E660BDDEC79497C54A8EB3;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13), (void*)_stringLiteral9ACD0102DF47E7CF98E660BDDEC79497C54A8EB3);
		// public static string KeyCostType = "costType";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostType_14 = _stringLiteral587E53A8030FB45502AD4B59E2E80ED12683441E;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostType_14), (void*)_stringLiteral587E53A8030FB45502AD4B59E2E80ED12683441E);
		// public static string KeyCostAmount = "costAmount";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostAmount_15 = _stringLiteralD5A3CA0977C7EAB9154A7C6E8BEA40D60065C347;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostAmount_15), (void*)_stringLiteralD5A3CA0977C7EAB9154A7C6E8BEA40D60065C347);
		// public static string KeyCostCurrency = "costCurrency";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostCurrency_16 = _stringLiteralEE7F2E90C1A80816B11CAE0EA9389988CBD19F97;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostCurrency_16), (void*)_stringLiteralEE7F2E90C1A80816B11CAE0EA9389988CBD19F97);
		// public static string KeyTestOptionsBaseUrl = "baseUrl";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsBaseUrl_17 = _stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsBaseUrl_17), (void*)_stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46);
		// public static string KeyTestOptionsGdprUrl = "gdprUrl";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsGdprUrl_18 = _stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsGdprUrl_18), (void*)_stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888);
		// public static string KeyTestOptionsSubscriptionUrl = "subscriptionUrl";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubscriptionUrl_19 = _stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubscriptionUrl_19), (void*)_stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C);
		// public static string KeyTestOptionsExtraPath = "extraPath";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_20 = _stringLiteral9F85DBEFEA5FADBE3465375963EFAA0318BDEB3E;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_20), (void*)_stringLiteral9F85DBEFEA5FADBE3465375963EFAA0318BDEB3E);
		// public static string KeyTestOptionsBasePath = "basePath";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsBasePath_21 = _stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsBasePath_21), (void*)_stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84);
		// public static string KeyTestOptionsGdprPath = "gdprPath";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsGdprPath_22 = _stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsGdprPath_22), (void*)_stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309);
		// public static string KeyTestOptionsDeleteState = "deleteState";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsDeleteState_23 = _stringLiteralCC3135654FE5454A443D0D19C37529E7EE6B1408;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsDeleteState_23), (void*)_stringLiteralCC3135654FE5454A443D0D19C37529E7EE6B1408);
		// public static string KeyTestOptionsUseTestConnectionOptions = "useTestConnectionOptions";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsUseTestConnectionOptions_24 = _stringLiteralCCED2B25A49F5AB8A840818C053B996994270607;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsUseTestConnectionOptions_24), (void*)_stringLiteralCCED2B25A49F5AB8A840818C053B996994270607);
		// public static string KeyTestOptionsTimerIntervalInMilliseconds = "timerIntervalInMilliseconds";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerIntervalInMilliseconds_25 = _stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerIntervalInMilliseconds_25), (void*)_stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36);
		// public static string KeyTestOptionsTimerStartInMilliseconds = "timerStartInMilliseconds";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerStartInMilliseconds_26 = _stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerStartInMilliseconds_26), (void*)_stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86);
		// public static string KeyTestOptionsSessionIntervalInMilliseconds = "sessionIntervalInMilliseconds";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSessionIntervalInMilliseconds_27 = _stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSessionIntervalInMilliseconds_27), (void*)_stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467);
		// public static string KeyTestOptionsSubsessionIntervalInMilliseconds = "subsessionIntervalInMilliseconds";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubsessionIntervalInMilliseconds_28 = _stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubsessionIntervalInMilliseconds_28), (void*)_stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C);
		// public static string KeyTestOptionsTeardown = "teardown";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTeardown_29 = _stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTeardown_29), (void*)_stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12);
		// public static string KeyTestOptionsNoBackoffWait = "noBackoffWait";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsNoBackoffWait_30 = _stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsNoBackoffWait_30), (void*)_stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3);
		// public static string KeyTestOptionsiAdFrameworkEnabled = "iAdFrameworkEnabled";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsiAdFrameworkEnabled_31 = _stringLiteral7D046F7A5E043071C26805C1E921D468CAB706D4;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsiAdFrameworkEnabled_31), (void*)_stringLiteral7D046F7A5E043071C26805C1E921D468CAB706D4);
		// public static string KeyTestOptionsAdServicesFrameworkEnabled = "adServicesFrameworkEnabled";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsAdServicesFrameworkEnabled_32 = _stringLiteral09F6BF5807F21976DC5A8B817678D0F3CA09B367;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsAdServicesFrameworkEnabled_32), (void*)_stringLiteral09F6BF5807F21976DC5A8B817678D0F3CA09B367);
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
// System.Object IronSourceJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_m8FE82986ED46C15633CE71CEA565F9436B6474A4 (String_t* ___0_json, const RuntimeMethod* method) 
{
	{
		// if (json == null) {
		String_t* L_0 = ___0_json;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0005:
	{
		// return Parser.Parse (json);
		String_t* L_1 = ___0_json;
		RuntimeObject* L_2;
		L_2 = Parser_Parse_m550577AC93E71023378D27EA1361383BA16504CE(L_1, NULL);
		return L_2;
	}
}
// System.String IronSourceJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_mC01A3EE8555C42F6DA02F3BFBF75C3E8F7D2342B (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return Serializer.Serialize (obj);
		RuntimeObject* L_0 = ___0_obj;
		String_t* L_1;
		L_1 = Serializer_Serialize_m074256116E009BD598CCC76D76661DFADCA49C09(L_0, NULL);
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
// System.Void IronSourceJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mF6E2F8B708BC8DA7BDB80DAD1DF622355BF50536 (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, String_t* ___0_jsonString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Parser (string jsonString)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// json = new StringReader (jsonString);
		String_t* L_0 = ___0_jsonString;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_1, L_0, NULL);
		__this->___json_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_2), (void*)L_1);
		// }
		return;
	}
}
// System.Object IronSourceJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_Parse_m550577AC93E71023378D27EA1361383BA16504CE (String_t* ___0_jsonString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// using (var instance = new Parser(jsonString)) {
		String_t* L_0 = ___0_jsonString;
		Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* L_1 = (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87*)il2cpp_codegen_object_new(Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Parser__ctor_mF6E2F8B708BC8DA7BDB80DAD1DF622355BF50536(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				{
					Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0019;
					}
				}
				{
					Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0019:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return instance.ParseValue ();
			Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* L_4 = V_0;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = Parser_ParseValue_m1BDF43E4AD2A64690AAFB6DBA800472F2A94272B(L_4, NULL);
			V_1 = L_5;
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		// }
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
// System.Void IronSourceJSON.Json/Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_mC88EEDDFE3CDB836F3AF49F721D3614158DED3A1 (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) 
{
	{
		// json.Dispose ();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_2;
		NullCheck(L_0);
		TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616(L_0, NULL);
		// json = null;
		__this->___json_2 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_2), (void*)(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> IronSourceJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Parser_ParseObject_mF3509D092287719C782B830F60B511483B9E570B (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Dictionary<string, object> table = new Dictionary<string, object> ();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read ();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		// switch (NextToken) {
		int32_t L_3;
		L_3 = Parser_get_NextToken_m2CF12E0515A498D7CD696E6065BB8F5401182EB4(__this, NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		// return null;
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0028:
	{
		// return table;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = V_0;
		return L_7;
	}

IL_002a:
	{
		// string name = ParseString ();
		String_t* L_8;
		L_8 = Parser_ParseString_m4913878D0B3878423C25644610F690615E7724C2(__this, NULL);
		V_1 = L_8;
		// if (name == null) {
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		// return null;
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0036:
	{
		// if (NextToken != TOKEN.COLON) {
		int32_t L_10;
		L_10 = Parser_get_NextToken_m2CF12E0515A498D7CD696E6065BB8F5401182EB4(__this, NULL);
		if ((((int32_t)L_10) == ((int32_t)5)))
		{
			goto IL_0041;
		}
	}
	{
		// return null;
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0041:
	{
		// json.Read ();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_11 = __this->___json_2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// table [name] = ParseValue ();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13 = V_0;
		String_t* L_14 = V_1;
		RuntimeObject* L_15;
		L_15 = Parser_ParseValue_m1BDF43E4AD2A64690AAFB6DBA800472F2A94272B(__this, NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_13, L_14, L_15, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		// break;
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> IronSourceJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Parser_ParseArray_m3F732244DC13726B9DB99A9A335D4E8A9B31A575 (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		// List<object> array = new List<object> ();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read ();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// var parsing = true;
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		// TOKEN nextToken = NextToken;
		int32_t L_3;
		L_3 = Parser_get_NextToken_m2CF12E0515A498D7CD696E6065BB8F5401182EB4(__this, NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		// return null;
		return (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL;
	}

IL_002c:
	{
		// parsing = false;
		V_1 = (bool)0;
		// break;
		goto IL_003f;
	}

IL_0030:
	{
		// object value = ParseByToken (nextToken);
		int32_t L_7 = V_2;
		RuntimeObject* L_8;
		L_8 = Parser_ParseByToken_mF0830ED1965E050AE0195353B26ADB01C87E18F1(__this, L_7, NULL);
		V_3 = L_8;
		// array.Add (value);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = V_0;
		RuntimeObject* L_10 = V_3;
		NullCheck(L_9);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_9, L_10, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
	}

IL_003f:
	{
		// while (parsing) {
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0016;
		}
	}
	{
		// return array;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_12 = V_0;
		return L_12;
	}
}
// System.Object IronSourceJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseValue_m1BDF43E4AD2A64690AAFB6DBA800472F2A94272B (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// TOKEN nextToken = NextToken;
		int32_t L_0;
		L_0 = Parser_get_NextToken_m2CF12E0515A498D7CD696E6065BB8F5401182EB4(__this, NULL);
		V_0 = L_0;
		// return ParseByToken (nextToken);
		int32_t L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = Parser_ParseByToken_mF0830ED1965E050AE0195353B26ADB01C87E18F1(__this, L_1, NULL);
		return L_2;
	}
}
// System.Object IronSourceJSON.Json/Parser::ParseByToken(IronSourceJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseByToken_mF0830ED1965E050AE0195353B26ADB01C87E18F1 (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_token;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0052;
			}
			case 9:
			{
				goto IL_0059;
			}
			case 10:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0036:
	{
		// return ParseString ();
		String_t* L_1;
		L_1 = Parser_ParseString_m4913878D0B3878423C25644610F690615E7724C2(__this, NULL);
		return L_1;
	}

IL_003d:
	{
		// return ParseNumber ();
		RuntimeObject* L_2;
		L_2 = Parser_ParseNumber_mDE9009CD828B692F4E5683708FEC450BF88D465F(__this, NULL);
		return L_2;
	}

IL_0044:
	{
		// return ParseObject ();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3;
		L_3 = Parser_ParseObject_mF3509D092287719C782B830F60B511483B9E570B(__this, NULL);
		return L_3;
	}

IL_004b:
	{
		// return ParseArray ();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4;
		L_4 = Parser_ParseArray_m3F732244DC13726B9DB99A9A335D4E8A9B31A575(__this, NULL);
		return L_4;
	}

IL_0052:
	{
		// return true;
		bool L_5 = ((bool)1);
		RuntimeObject* L_6 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		// return false;
		bool L_7 = ((bool)0);
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		// return null;
		return NULL;
	}

IL_0062:
	{
		// return null;
		return NULL;
	}
}
// System.String IronSourceJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m4913878D0B3878423C25644610F690615E7724C2 (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// StringBuilder s = new StringBuilder ();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// json.Read ();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// bool parsing = true;
		V_2 = (bool)1;
		goto IL_0139;
	}

IL_0019:
	{
		// if (json.Peek () == -1) {
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_3 = __this->___json_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_013f;
	}

IL_002e:
	{
		// c = NextChar;
		Il2CppChar L_5;
		L_5 = Parser_get_NextChar_m93C329D94339309A4654DF11D6C06D4D1ABBDBDF(__this, NULL);
		V_1 = L_5;
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0131;
	}

IL_0044:
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0139;
	}

IL_004b:
	{
		// if (json.Peek () == -1) {
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_8 = __this->___json_2;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0139;
	}

IL_0060:
	{
		// c = NextChar;
		Il2CppChar L_10;
		L_10 = Parser_get_NextChar_m93C329D94339309A4654DF11D6C06D4D1ABBDBDF(__this, NULL);
		V_1 = L_10;
		Il2CppChar L_11 = V_1;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)47))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0139;
	}

IL_0080:
	{
		Il2CppChar L_15 = V_1;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)98))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)102))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0139;
	}

IL_0094:
	{
		Il2CppChar L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)110))))
		{
			goto IL_00d6;
		}
	}
	{
		Il2CppChar L_19 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_00e1;
			}
			case 1:
			{
				goto IL_0139;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0139;
	}

IL_00b7:
	{
		// s.Append (c);
		StringBuilder_t* L_20 = V_0;
		Il2CppChar L_21 = V_1;
		NullCheck(L_20);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_20, L_21, NULL);
		// break;
		goto IL_0139;
	}

IL_00c1:
	{
		// s.Append ('\b');
		StringBuilder_t* L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, 8, NULL);
		// break;
		goto IL_0139;
	}

IL_00cb:
	{
		// s.Append ('\f');
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_25, ((int32_t)12), NULL);
		// break;
		goto IL_0139;
	}

IL_00d6:
	{
		// s.Append ('\n');
		StringBuilder_t* L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_27, ((int32_t)10), NULL);
		// break;
		goto IL_0139;
	}

IL_00e1:
	{
		// s.Append ('\r');
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, ((int32_t)13), NULL);
		// break;
		goto IL_0139;
	}

IL_00ec:
	{
		// s.Append ('\t');
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_31, ((int32_t)9), NULL);
		// break;
		goto IL_0139;
	}

IL_00f7:
	{
		// var hex = new StringBuilder ();
		StringBuilder_t* L_33 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_33, NULL);
		V_3 = L_33;
		// for (int i=0; i< 4; i++) {
		V_4 = 0;
		goto IL_0115;
	}

IL_0102:
	{
		// hex.Append (NextChar);
		StringBuilder_t* L_34 = V_3;
		Il2CppChar L_35;
		L_35 = Parser_get_NextChar_m93C329D94339309A4654DF11D6C06D4D1ABBDBDF(__this, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_34, L_35, NULL);
		// for (int i=0; i< 4; i++) {
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0115:
	{
		// for (int i=0; i< 4; i++) {
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) < ((int32_t)4)))
		{
			goto IL_0102;
		}
	}
	{
		// s.Append ((char)Convert.ToInt32 (hex.ToString (), 16));
		StringBuilder_t* L_39 = V_0;
		StringBuilder_t* L_40 = V_3;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Convert_ToInt32_mD1B3AFBDA26E52D0382434804364FEF8BA241FB4(L_41, ((int32_t)16), NULL);
		NullCheck(L_39);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_39, ((int32_t)(uint16_t)L_42), NULL);
		// break;
		goto IL_0139;
	}

IL_0131:
	{
		// s.Append (c);
		StringBuilder_t* L_44 = V_0;
		Il2CppChar L_45 = V_1;
		NullCheck(L_44);
		StringBuilder_t* L_46;
		L_46 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_44, L_45, NULL);
	}

IL_0139:
	{
		// while (parsing) {
		bool L_47 = V_2;
		if (L_47)
		{
			goto IL_0019;
		}
	}

IL_013f:
	{
		// return s.ToString ();
		StringBuilder_t* L_48 = V_0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		return L_49;
	}
}
// System.Object IronSourceJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseNumber_mDE9009CD828B692F4E5683708FEC450BF88D465F (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	{
		// string number = NextWord;
		String_t* L_0;
		L_0 = Parser_get_NextWord_m0FDD048038CF96F085F527E30FB94893225C2725(__this, NULL);
		V_0 = L_0;
		// if (number.IndexOf ('.') == -1) {
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_1, ((int32_t)46), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002c;
		}
	}
	{
		// Int64.TryParse (number, NumberStyles.Any, CultureInfo.InvariantCulture, out parsedInt);
		String_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4;
		L_4 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_5;
		L_5 = Int64_TryParse_m64CEDECE4C3F16B715CA1057801018B2957AE0E3(L_3, ((int32_t)511), L_4, (&V_2), NULL);
		// return parsedInt;
		int64_t L_6 = V_2;
		int64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_002c:
	{
		// Double.TryParse (number, NumberStyles.Any, CultureInfo.InvariantCulture, out parsedDouble);
		String_t* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10;
		L_10 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_11;
		L_11 = Double_TryParse_m1D39DC22A45BC9A576B9D9130600BFD3CB6DA382(L_9, ((int32_t)511), L_10, (&V_1), NULL);
		// return parsedDouble;
		double L_12 = V_1;
		double L_13 = L_12;
		RuntimeObject* L_14 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Void IronSourceJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m3D91DD801FB915B39B1A5B133CB159DA4A6D2CF1 (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001c;
	}

IL_0002:
	{
		// json.Read ();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		// if (json.Peek () == -1) {
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = __this->___json_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_002f;
		}
	}

IL_001c:
	{
		// while (WHITE_SPACE.IndexOf(PeekChar) != -1) {
		Il2CppChar L_4;
		L_4 = Parser_get_PeekChar_m631004C7D090E106B50F8CDFA62CB254B8C5553A(__this, NULL);
		NullCheck(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C, L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0002;
		}
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Char IronSourceJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m631004C7D090E106B50F8CDFA62CB254B8C5553A (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar (json.Peek ());
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24(L_1, NULL);
		return L_2;
	}
}
// System.Char IronSourceJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m93C329D94339309A4654DF11D6C06D4D1ABBDBDF (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar (json.Read ());
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24(L_1, NULL);
		return L_2;
	}
}
// System.String IronSourceJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m0FDD048038CF96F085F527E30FB94893225C2725 (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		// StringBuilder word = new StringBuilder ();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		goto IL_0023;
	}

IL_0008:
	{
		// word.Append (NextChar);
		StringBuilder_t* L_1 = V_0;
		Il2CppChar L_2;
		L_2 = Parser_get_NextChar_m93C329D94339309A4654DF11D6C06D4D1ABBDBDF(__this, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, L_2, NULL);
		// if (json.Peek () == -1) {
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_4 = __this->___json_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_4);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0036;
		}
	}

IL_0023:
	{
		// while (WORD_BREAK.IndexOf(PeekChar) == -1) {
		Il2CppChar L_6;
		L_6 = Parser_get_PeekChar_m631004C7D090E106B50F8CDFA62CB254B8C5553A(__this, NULL);
		NullCheck(_stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952);
		int32_t L_7;
		L_7 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952, L_6, NULL);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0008;
		}
	}

IL_0036:
	{
		// return word.ToString ();
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// IronSourceJSON.Json/Parser/TOKEN IronSourceJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m2CF12E0515A498D7CD696E6065BB8F5401182EB4 (Parser_tD3FD58801FF77BF4EB267C0C7438BC574362EE87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		// EatWhitespace ();
		Parser_EatWhitespace_m3D91DD801FB915B39B1A5B133CB159DA4A6D2CF1(__this, NULL);
		// if (json.Peek () == -1) {
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
	}

IL_0016:
	{
		// char c = PeekChar;
		Il2CppChar L_2;
		L_2 = Parser_get_PeekChar_m631004C7D090E106B50F8CDFA62CB254B8C5553A(__this, NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00db;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00db;
			}
			case 8:
			{
				goto IL_00db;
			}
			case 9:
			{
				goto IL_00db;
			}
			case 10:
			{
				goto IL_00c7;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00db;
			}
			case 13:
			{
				goto IL_00db;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00d9;
			}
			case 16:
			{
				goto IL_00d9;
			}
			case 17:
			{
				goto IL_00d9;
			}
			case 18:
			{
				goto IL_00d9;
			}
			case 19:
			{
				goto IL_00d9;
			}
			case 20:
			{
				goto IL_00d9;
			}
			case 21:
			{
				goto IL_00d9;
			}
			case 22:
			{
				goto IL_00d9;
			}
			case 23:
			{
				goto IL_00d9;
			}
			case 24:
			{
				goto IL_00d7;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00db;
	}

IL_00a7:
	{
		// return TOKEN.CURLY_OPEN;
		return (int32_t)(1);
	}

IL_00a9:
	{
		// json.Read ();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_9 = __this->___json_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		// return TOKEN.CURLY_CLOSE;
		return (int32_t)(2);
	}

IL_00b7:
	{
		// return TOKEN.SQUARED_OPEN;
		return (int32_t)(3);
	}

IL_00b9:
	{
		// json.Read ();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_11 = __this->___json_2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// return TOKEN.SQUARED_CLOSE;
		return (int32_t)(4);
	}

IL_00c7:
	{
		// json.Read ();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_13 = __this->___json_2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_13);
		// return TOKEN.COMMA;
		return (int32_t)(6);
	}

IL_00d5:
	{
		// return TOKEN.STRING;
		return (int32_t)(7);
	}

IL_00d7:
	{
		// return TOKEN.COLON;
		return (int32_t)(5);
	}

IL_00d9:
	{
		// return TOKEN.NUMBER;
		return (int32_t)(8);
	}

IL_00db:
	{
		// string word = NextWord;
		String_t* L_15;
		L_15 = Parser_get_NextWord_m0FDD048038CF96F085F527E30FB94893225C2725(__this, NULL);
		V_1 = L_15;
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		if (L_17)
		{
			goto IL_010b;
		}
	}
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (L_19)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		if (L_21)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0114;
	}

IL_010b:
	{
		// return TOKEN.FALSE;
		return (int32_t)(((int32_t)10));
	}

IL_010e:
	{
		// return TOKEN.TRUE;
		return (int32_t)(((int32_t)9));
	}

IL_0111:
	{
		// return TOKEN.NULL;
		return (int32_t)(((int32_t)11));
	}

IL_0114:
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
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
// System.Void IronSourceJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m75AAE9DA26CF48B1C8608E850915E74AC135BD0F (Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Serializer ()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// builder = new StringBuilder ();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->___builder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___builder_0), (void*)L_0);
		// }
		return;
	}
}
// System.String IronSourceJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m074256116E009BD598CCC76D76661DFADCA49C09 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var instance = new Serializer ();
		Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F* L_0 = (Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F*)il2cpp_codegen_object_new(Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Serializer__ctor_m75AAE9DA26CF48B1C8608E850915E74AC135BD0F(L_0, NULL);
		// instance.SerializeValue (obj);
		Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F* L_1 = L_0;
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_1);
		Serializer_SerializeValue_m402A1869F9E3A33F621B305ED4C2322D6C1B16A7(L_1, L_2, NULL);
		// return instance.builder.ToString ();
		NullCheck(L_1);
		StringBuilder_t* L_3 = L_1->___builder_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void IronSourceJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m402A1869F9E3A33F621B305ED4C2322D6C1B16A7 (Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// if (value == null) {
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// builder.Append ("null");
		StringBuilder_t* L_1 = __this->___builder_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		return;
	}

IL_0015:
	{
		// } else if ((asStr = value as string) != null) {
		RuntimeObject* L_3 = ___0_value;
		String_t* L_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		V_2 = L_4;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// SerializeString (asStr);
		String_t* L_5 = V_2;
		Serializer_SerializeString_m5FB343C30BD22AB9DE403EB8135FF8C9A58DBF4C(__this, L_5, NULL);
		return;
	}

IL_0027:
	{
		// } else if (value is bool) {
		RuntimeObject* L_6 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_0047;
		}
	}
	{
		// builder.Append (value.ToString ().ToLower ());
		StringBuilder_t* L_7 = __this->___builder_0;
		RuntimeObject* L_8 = ___0_value;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_9, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, L_10, NULL);
		return;
	}

IL_0047:
	{
		// } else if ((asList = value as IList) != null) {
		RuntimeObject* L_12 = ___0_value;
		RuntimeObject* L_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		V_0 = L_13;
		if (!L_13)
		{
			goto IL_0059;
		}
	}
	{
		// SerializeArray (asList);
		RuntimeObject* L_14 = V_0;
		Serializer_SerializeArray_mCC39C55C650C20A797385B9B3737F6DF08ECB30D(__this, L_14, NULL);
		return;
	}

IL_0059:
	{
		// } else if ((asDict = value as IDictionary) != null) {
		RuntimeObject* L_15 = ___0_value;
		RuntimeObject* L_16 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		V_1 = L_16;
		if (!L_16)
		{
			goto IL_006b;
		}
	}
	{
		// SerializeObject (asDict);
		RuntimeObject* L_17 = V_1;
		Serializer_SerializeObject_m76665B596B2DA337CFBAFD5374CBC170E29AE684(__this, L_17, NULL);
		return;
	}

IL_006b:
	{
		// } else if (value is char) {
		RuntimeObject* L_18 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_18, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))
		{
			goto IL_0080;
		}
	}
	{
		// SerializeString (value.ToString ());
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		Serializer_SerializeString_m5FB343C30BD22AB9DE403EB8135FF8C9A58DBF4C(__this, L_20, NULL);
		return;
	}

IL_0080:
	{
		// SerializeOther (value);
		RuntimeObject* L_21 = ___0_value;
		Serializer_SerializeOther_m1ADF12DA620629116FC15C5FF3E60019B8409AA0(__this, L_21, NULL);
		// }
		return;
	}
}
// System.Void IronSourceJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m76665B596B2DA337CFBAFD5374CBC170E29AE684 (Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// bool first = true;
		V_0 = (bool)1;
		// builder.Append ('{');
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)123), NULL);
		// foreach (object e in obj.Keys) {
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0069:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_3;
					if (!L_6)
					{
						goto IL_0079;
					}
				}
				{
					RuntimeObject* L_7 = V_3;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0079:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005f_1;
			}

IL_001e_1:
			{
				// foreach (object e in obj.Keys) {
				RuntimeObject* L_8 = V_1;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				V_2 = L_9;
				// if (!first) {
				bool L_10 = V_0;
				if (L_10)
				{
					goto IL_0036_1;
				}
			}
			{
				// builder.Append (',');
				StringBuilder_t* L_11 = __this->___builder_0;
				NullCheck(L_11);
				StringBuilder_t* L_12;
				L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)44), NULL);
			}

IL_0036_1:
			{
				// SerializeString (e.ToString ());
				RuntimeObject* L_13 = V_2;
				NullCheck(L_13);
				String_t* L_14;
				L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
				Serializer_SerializeString_m5FB343C30BD22AB9DE403EB8135FF8C9A58DBF4C(__this, L_14, NULL);
				// builder.Append (':');
				StringBuilder_t* L_15 = __this->___builder_0;
				NullCheck(L_15);
				StringBuilder_t* L_16;
				L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, ((int32_t)58), NULL);
				// SerializeValue (obj [e]);
				RuntimeObject* L_17 = ___0_obj;
				RuntimeObject* L_18 = V_2;
				NullCheck(L_17);
				RuntimeObject* L_19;
				L_19 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_17, L_18);
				Serializer_SerializeValue_m402A1869F9E3A33F621B305ED4C2322D6C1B16A7(__this, L_19, NULL);
				// first = false;
				V_0 = (bool)0;
			}

IL_005f_1:
			{
				// foreach (object e in obj.Keys) {
				RuntimeObject* L_20 = V_1;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		// builder.Append ('}');
		StringBuilder_t* L_22 = __this->___builder_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)125), NULL);
		// }
		return;
	}
}
// System.Void IronSourceJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mCC39C55C650C20A797385B9B3737F6DF08ECB30D (Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F* __this, RuntimeObject* ___0_anArray, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// builder.Append ('[');
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)91), NULL);
		// bool first = true;
		V_0 = (bool)1;
		// foreach (object obj in anArray) {
		RuntimeObject* L_2 = ___0_anArray;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0054;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0054:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003a_1;
			}

IL_0019_1:
			{
				// foreach (object obj in anArray) {
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				// if (!first) {
				bool L_9 = V_0;
				if (L_9)
				{
					goto IL_0031_1;
				}
			}
			{
				// builder.Append (',');
				StringBuilder_t* L_10 = __this->___builder_0;
				NullCheck(L_10);
				StringBuilder_t* L_11;
				L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, ((int32_t)44), NULL);
			}

IL_0031_1:
			{
				// SerializeValue (obj);
				RuntimeObject* L_12 = V_2;
				Serializer_SerializeValue_m402A1869F9E3A33F621B305ED4C2322D6C1B16A7(__this, L_12, NULL);
				// first = false;
				V_0 = (bool)0;
			}

IL_003a_1:
			{
				// foreach (object obj in anArray) {
				RuntimeObject* L_13 = V_1;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0055;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		// builder.Append (']');
		StringBuilder_t* L_15 = __this->___builder_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, ((int32_t)93), NULL);
		// }
		return;
	}
}
// System.Void IronSourceJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m5FB343C30BD22AB9DE403EB8135FF8C9A58DBF4C (Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		// builder.Append ('\"');
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)34), NULL);
		// char[] charArray = str.ToCharArray ();
		String_t* L_2 = ___0_str;
		NullCheck(L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3;
		L_3 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_2, NULL);
		// foreach (var c in charArray) {
		V_0 = L_3;
		V_1 = 0;
		goto IL_0127;
	}

IL_001c:
	{
		// foreach (var c in charArray) {
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00ca;
			}
			case 2:
			{
				goto IL_00a4;
			}
			case 3:
			{
				goto IL_00dd;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00b7;
			}
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00dd;
	}

IL_004f:
	{
		// builder.Append ("\\\"");
		StringBuilder_t* L_11 = __this->___builder_0;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		// break;
		goto IL_0123;
	}

IL_0065:
	{
		// builder.Append ("\\\\");
		StringBuilder_t* L_13 = __this->___builder_0;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		// break;
		goto IL_0123;
	}

IL_007b:
	{
		// builder.Append ("\\b");
		StringBuilder_t* L_15 = __this->___builder_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		// break;
		goto IL_0123;
	}

IL_0091:
	{
		// builder.Append ("\\f");
		StringBuilder_t* L_17 = __this->___builder_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		// break;
		goto IL_0123;
	}

IL_00a4:
	{
		// builder.Append ("\\n");
		StringBuilder_t* L_19 = __this->___builder_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		// break;
		goto IL_0123;
	}

IL_00b7:
	{
		// builder.Append ("\\r");
		StringBuilder_t* L_21 = __this->___builder_0;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		// break;
		goto IL_0123;
	}

IL_00ca:
	{
		// builder.Append ("\\t");
		StringBuilder_t* L_23 = __this->___builder_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		// break;
		goto IL_0123;
	}

IL_00dd:
	{
		// int codepoint = Convert.ToInt32 (c);
		Il2CppChar L_25 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Convert_ToInt32_mDBBE9318A7CCE1560974CE93F5BFED9931CF0052(L_25, NULL);
		V_3 = L_26;
		// if ((codepoint >= 32) && (codepoint <= 126)) {
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)32))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)126))))
		{
			goto IL_00fd;
		}
	}
	{
		// builder.Append (c);
		StringBuilder_t* L_29 = __this->___builder_0;
		Il2CppChar L_30 = V_2;
		NullCheck(L_29);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, L_30, NULL);
		goto IL_0123;
	}

IL_00fd:
	{
		// builder.Append ("\\u" + Convert.ToString (codepoint, 16).PadLeft (4, '0'));
		StringBuilder_t* L_32 = __this->___builder_0;
		int32_t L_33 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_34;
		L_34 = Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35(L_33, ((int32_t)16), NULL);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_34, 4, ((int32_t)48), NULL);
		String_t* L_36;
		L_36 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, L_35, NULL);
		NullCheck(L_32);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, L_36, NULL);
	}

IL_0123:
	{
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0127:
	{
		// foreach (var c in charArray) {
		int32_t L_39 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// builder.Append ('\"');
		StringBuilder_t* L_41 = __this->___builder_0;
		NullCheck(L_41);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_41, ((int32_t)34), NULL);
		// }
		return;
	}
}
// System.Void IronSourceJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m1ADF12DA620629116FC15C5FF3E60019B8409AA0 (Serializer_tF43EAC1A0234ADD6A82206B329FB793C93AD880F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value is float
		//     || value is int
		//     || value is uint
		//     || value is long
		//     || value is double
		//     || value is sbyte
		//     || value is byte
		//     || value is short
		//     || value is ushort
		//     || value is ulong
		//     || value is decimal) {
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_3 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_3, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_4 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_5 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_6 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_7 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_8 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_9 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_10 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))
		{
			goto IL_006b;
		}
	}

IL_0058:
	{
		// builder.Append (value.ToString ());
		StringBuilder_t* L_11 = __this->___builder_0;
		RuntimeObject* L_12 = ___0_value;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		NullCheck(L_11);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_13, NULL);
		return;
	}

IL_006b:
	{
		// SerializeString (value.ToString ());
		RuntimeObject* L_15 = ___0_value;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		Serializer_SerializeString_m5FB343C30BD22AB9DE403EB8135FF8C9A58DBF4C(__this, L_16, NULL);
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
