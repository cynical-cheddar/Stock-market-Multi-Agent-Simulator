#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<ExitGames.Client.Photon.DisconnectMessage>
struct Action_1_tD73BC7FEF1671B01BA9C93C20E8C741DB8DEFCFD;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826;
// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Photon.Realtime.Region>
struct List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7;
// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>
struct List_1_t6F972EAFC64258DD491584080B232EC12BE33581;
// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15;
// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>
struct NonAllocDictionary_2_t731311DC35E31CEB666B4A4099E518236EA55F79;
// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary>
struct Pool_1_t47635E10016E83A1E327B583977D1F043544FB48;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Photon.Realtime.FriendInfo[]
struct FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Photon.Realtime.RoomInfo[]
struct RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Photon.Realtime.TypedLobbyInfo[]
struct TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Photon.Realtime.ErrorInfo
struct ErrorInfo_tBEC0163224E8E559901B5BA6D2DDDC2B15D013ED;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_tACE5277867F34445F8CAB737A6C60770A74FE635;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D;
// ExitGames.Client.Photon.ITrafficRecorder
struct ITrafficRecorder_t62EB15B7BDBC1428F5BFAF50DA2086B74E2ACBDF;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED;
// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C;
// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C;
// Photon.Realtime.Region
struct Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A;
// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB;
// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373;
// Photon.Realtime.RoomInfo
struct RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPools
struct StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD;
// Photon.Realtime.SupportLogger
struct SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9;
// System.Type
struct Type_t;
// Photon.Realtime.TypedLobby
struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Photon.Realtime.WebFlags
struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851;
// Photon.Realtime.WebRpcResponse
struct WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7;

IL2CPP_EXTERN_C RuntimeClass* AuthModeOption_t7CA0F11229CF212E10897F367BEE70D85C01B1EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomAuthenticationType_t202E72650121EDA3F5EC694D792F2DEBC48E9D0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncryptionMode_tD26BF6E736ED3A0AE841EE96A761723407E6FF98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01551127791BB14934414B8428B67FD51B390033;
IL2CPP_EXTERN_C String_t* _stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9;
IL2CPP_EXTERN_C String_t* _stringLiteral111D994A41187DCF854E2098345172E28925CD36;
IL2CPP_EXTERN_C String_t* _stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1;
IL2CPP_EXTERN_C String_t* _stringLiteral1E2510325BB91639BC80976746CCEC9FE9947D99;
IL2CPP_EXTERN_C String_t* _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466;
IL2CPP_EXTERN_C String_t* _stringLiteral28A00C6C2538607194DCD2548EF0DFB07D324A14;
IL2CPP_EXTERN_C String_t* _stringLiteral28C16AD3D08B7CCD40C5C1BC966F3A5EB27FEF18;
IL2CPP_EXTERN_C String_t* _stringLiteral293EEA1FC571998DF9F8F43C7C67DEE8ADA92F9C;
IL2CPP_EXTERN_C String_t* _stringLiteral2BA731B2704F57E0D64A0B832502A59C9A647418;
IL2CPP_EXTERN_C String_t* _stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00;
IL2CPP_EXTERN_C String_t* _stringLiteral38011452171D5D98758667404D6F17F5AF329293;
IL2CPP_EXTERN_C String_t* _stringLiteral3B24932FF933699B3A82EAC56B23A2606464B1D8;
IL2CPP_EXTERN_C String_t* _stringLiteral408EB95653B87D3CABA50A013197EF62E5DB13D6;
IL2CPP_EXTERN_C String_t* _stringLiteral4107A0725173791DF5ACF52B43FBF074AD90C194;
IL2CPP_EXTERN_C String_t* _stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77;
IL2CPP_EXTERN_C String_t* _stringLiteral49221D9FFDE2F83640CB6D959D4A66D1492381B7;
IL2CPP_EXTERN_C String_t* _stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB;
IL2CPP_EXTERN_C String_t* _stringLiteral5B49F56286E679FA58107352F1A55E4C9D0B9352;
IL2CPP_EXTERN_C String_t* _stringLiteral5C2B738C07CAF0CE8EC4DF3FD24573F2DFFE3D56;
IL2CPP_EXTERN_C String_t* _stringLiteral5C67743CDBE53FB079609F78DCB88B3481C5E480;
IL2CPP_EXTERN_C String_t* _stringLiteral677B5ACFFA9821CA29C5B6329DD4778CE1AC133B;
IL2CPP_EXTERN_C String_t* _stringLiteral6808135BCC86E2F4461A09CFB8F51ED8ADE6E02A;
IL2CPP_EXTERN_C String_t* _stringLiteral691FADBE26C2608C232E86F1289D3E5FCC330C03;
IL2CPP_EXTERN_C String_t* _stringLiteral7055E349A166CE4A3570F4C7C1A34114B0CEBF90;
IL2CPP_EXTERN_C String_t* _stringLiteral744BF9AE3CE56EE58F000CE7C3F4F94C51ABA032;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7E357C31C3E3A0DB2B89D68F7FD43137F7E8DDED;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8D1239F07A9E8331EAEB0B65C253D33291FDD92B;
IL2CPP_EXTERN_C String_t* _stringLiteral8F922B5D2735B37B3F9E1522305AB8CCD8ED274B;
IL2CPP_EXTERN_C String_t* _stringLiteral94C9907E8EDE0DCF9B99D296D066DF89F5E204E9;
IL2CPP_EXTERN_C String_t* _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
IL2CPP_EXTERN_C String_t* _stringLiteral9692BF3609B3FA99897E14252C1A031B33C30B4C;
IL2CPP_EXTERN_C String_t* _stringLiteral975531AFC28B31E2C3F222277BE27AB31AE7D4B6;
IL2CPP_EXTERN_C String_t* _stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA;
IL2CPP_EXTERN_C String_t* _stringLiteralAD892ABAE7A60B21A969B33CD88235B1C22DC99A;
IL2CPP_EXTERN_C String_t* _stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34;
IL2CPP_EXTERN_C String_t* _stringLiteralB18B972DF30D22EF004BFFEF3F5C7E126C9DA580;
IL2CPP_EXTERN_C String_t* _stringLiteralB4175BA66C7FF6F238B86BBCB5E18C2056A2A746;
IL2CPP_EXTERN_C String_t* _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCADE992351A796143F5F5164E100121E1080BF4C;
IL2CPP_EXTERN_C String_t* _stringLiteralD4790BF76CC94ADC0486FBF64F752246D60263C5;
IL2CPP_EXTERN_C String_t* _stringLiteralD6531E0D94FC153A90B43E184D8F7C53223B3B7D;
IL2CPP_EXTERN_C String_t* _stringLiteralDAE93AA613D9CE34751185FB80DED40E346E9444;
IL2CPP_EXTERN_C String_t* _stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F;
IL2CPP_EXTERN_C String_t* _stringLiteralE115685933AB6FADBFC7D7A380253AE496EE2014;
IL2CPP_EXTERN_C String_t* _stringLiteralE2B8CF328F46C5FE3BCBA0EAD12CCBFAF5CE1356;
IL2CPP_EXTERN_C String_t* _stringLiteralE51BAB8EEF309071E735D738BA793BB2B271FC56;
IL2CPP_EXTERN_C String_t* _stringLiteralFAFE1135E66E66BD15C9C823C63EB9B6F691436F;
IL2CPP_EXTERN_C String_t* _stringLiteralFB509740A88CB90C1FADEE5AF8BBF1DEEA0A7D27;
IL2CPP_EXTERN_C String_t* _stringLiteralFCF229FD3FDDCC26316DD55763B57CA36D12D076;
IL2CPP_EXTERN_C String_t* _stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD1A2E394D4FC47B9092FE11D1E27BC1AED671721_RuntimeMethod_var;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries_1;
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
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

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

// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ___s_emptyArray_5;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582* ___s_emptyArray_5;
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

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7  : public RuntimeObject
{
	// Photon.Realtime.CustomAuthenticationType Photon.Realtime.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Realtime.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Realtime.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject* ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.Object Photon.Realtime.AuthenticationValues::<Token>k__BackingField
	RuntimeObject* ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Realtime.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
};

// Photon.Realtime.ErrorInfo
struct ErrorInfo_tBEC0163224E8E559901B5BA6D2DDDC2B15D013ED  : public RuntimeObject
{
	// System.String Photon.Realtime.ErrorInfo::Info
	String_t* ___Info_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED  : public RuntimeObject
{
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// ExitGames.Client.Photon.ParameterDictionary ExitGames.Client.Photon.OperationResponse::Parameters
	ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* ___Parameters_3;
};

// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3  : public RuntimeObject
{
	// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.ParameterDictionary::paramDict
	NonAllocDictionary_2_t731311DC35E31CEB666B4A4099E518236EA55F79* ___paramDict_0;
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPools ExitGames.Client.Photon.ParameterDictionary::wrapperPools
	StructWrapperPools_t578C08F079D4A055E0ED8EF8196750B3DEDCEBBD* ___wrapperPools_1;
};

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::CommandLogSize
	int32_t ___CommandLogSize_4;
	// ExitGames.Client.Photon.TargetFrameworks ExitGames.Client.Photon.PhotonPeer::TargetFramework
	int32_t ___TargetFramework_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RemoveAppIdFromWebSocketPath
	bool ___RemoveAppIdFromWebSocketPath_10;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_11;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::UseInitV3
	bool ___UseInitV3_17;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_18;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989* ___SocketImplementationConfig_19;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t* ___U3CSocketImplementationU3Ek__BackingField_20;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_21;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_22;
	// System.Action`1<ExitGames.Client.Photon.DisconnectMessage> ExitGames.Client.Photon.PhotonPeer::OnDisconnectMessage
	Action_1_tD73BC7FEF1671B01BA9C93C20E8C741DB8DEFCFD* ___OnDisconnectMessage_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useByteArraySlicePoolForEvents
	bool ___useByteArraySlicePoolForEvents_25;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::wrapIncomingStructs
	bool ___wrapIncomingStructs_26;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_27;
	// ExitGames.Client.Photon.ITrafficRecorder ExitGames.Client.Photon.PhotonPeer::TrafficRecorder
	RuntimeObject* ___TrafficRecorder_28;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_29;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_30;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_31;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_32;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_33;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_34;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_35;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_36;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::disconnectTimeout
	int32_t ___disconnectTimeout_37;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_38;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_40;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_41;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_43;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___RandomizedSequenceNumbers_44;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::GcmDatagramEncryption
	bool ___GcmDatagramEncryption_45;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* ___U3CTrafficStatsIncomingU3Ek__BackingField_46;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t7EA2A81C7B25BB54EDF02507A5C1010BC9857503* ___U3CTrafficStatsOutgoingU3Ek__BackingField_47;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t2733AB6F5A530490DF25127C7183A811B63717D9* ___U3CTrafficStatsGameLevelU3Ek__BackingField_48;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___trafficStatsStopwatch_49;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_50;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___peerBase_51;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject* ___SendOutgoingLockObject_52;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject* ___DispatchLockObject_53;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject* ___EnqueueLock_54;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PayloadEncryptionSecret_55;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t* ___encryptorType_56;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_57;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CountDiscarded>k__BackingField
	int32_t ___U3CCountDiscardedU3Ek__BackingField_58;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<DeltaUnreliableNumber>k__BackingField
	int32_t ___U3CDeltaUnreliableNumberU3Ek__BackingField_59;
};

struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C_StaticFields
{
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NoNativeCallbacks
	bool ___NoNativeCallbacks_9;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::checkedNativeLibs
	bool ___checkedNativeLibs_13;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useSocketNative
	bool ___useSocketNative_14;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useDiffieHellmanCryptoProvider
	bool ___useDiffieHellmanCryptoProvider_15;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useEncryptorNative
	bool ___useEncryptorNative_16;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_39;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_42;
};

// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C  : public RuntimeObject
{
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject* ___TagObject_8;
};

// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler::<EnabledRegions>k__BackingField
	List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* ___U3CEnabledRegionsU3Ek__BackingField_1;
	// System.String Photon.Realtime.RegionHandler::availableRegionCodes
	String_t* ___availableRegionCodes_2;
	// Photon.Realtime.Region Photon.Realtime.RegionHandler::bestRegionCache
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___bestRegionCache_3;
	// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger> Photon.Realtime.RegionHandler::pingerList
	List_1_t6F972EAFC64258DD491584080B232EC12BE33581* ___pingerList_4;
	// System.Action`1<Photon.Realtime.RegionHandler> Photon.Realtime.RegionHandler::onCompleteCall
	Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* ___onCompleteCall_5;
	// System.Int32 Photon.Realtime.RegionHandler::previousPing
	int32_t ___previousPing_6;
	// System.Boolean Photon.Realtime.RegionHandler::<IsPinging>k__BackingField
	bool ___U3CIsPingingU3Ek__BackingField_7;
	// System.String Photon.Realtime.RegionHandler::previousSummaryProvided
	String_t* ___previousSummaryProvided_8;
};

struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_StaticFields
{
	// System.Type Photon.Realtime.RegionHandler::PingImplementation
	Type_t* ___PingImplementation_0;
};

// Photon.Realtime.RoomInfo
struct RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D  : public RuntimeObject
{
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// Photon.Realtime.TypedLobby
struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9  : public RuntimeObject
{
	// System.String Photon.Realtime.TypedLobby::Name
	String_t* ___Name_0;
	// Photon.Realtime.LobbyType Photon.Realtime.TypedLobby::Type
	uint8_t ___Type_1;
};

struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9_StaticFields
{
	// Photon.Realtime.TypedLobby Photon.Realtime.TypedLobby::Default
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___Default_2;
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

// Photon.Realtime.WebFlags
struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA  : public RuntimeObject
{
	// System.Byte Photon.Realtime.WebFlags::WebhookFlags
	uint8_t ___WebhookFlags_1;
};

struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_StaticFields
{
	// Photon.Realtime.WebFlags Photon.Realtime.WebFlags::Default
	WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* ___Default_0;
};

// Photon.Realtime.WebRpcResponse
struct WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7  : public RuntimeObject
{
	// System.String Photon.Realtime.WebRpcResponse::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.WebRpcResponse::<ResultCode>k__BackingField
	int32_t ___U3CResultCodeU3Ek__BackingField_1;
	// System.String Photon.Realtime.WebRpcResponse::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::<Parameters>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CParametersU3Ek__BackingField_3;
};

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint8_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A  : public Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA
{
};

struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A_StaticFields
{
	// System.Object[] ExitGames.Client.Photon.Hashtable::boxedByte
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___boxedByte_14;
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

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F  : public PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C
{
	// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary> Photon.Realtime.LoadBalancingPeer::paramDictionaryPool
	Pool_1_t47635E10016E83A1E327B583977D1F043544FB48* ___paramDictionaryPool_60;
};

// Photon.Realtime.PhotonPortDefinition
struct PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A 
{
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::NameServerPort
	uint16_t ___NameServerPort_1;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::MasterServerPort
	uint16_t ___MasterServerPort_2;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::GameServerPort
	uint16_t ___GameServerPort_3;
};

struct PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A_StaticFields
{
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.PhotonPortDefinition::AlternativeUdpPorts
	PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A ___AlternativeUdpPorts_0;
};

// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373  : public RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D
{
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* ___players_15;
	// System.Boolean Photon.Realtime.Room::<BroadcastPropertiesChangeToAll>k__BackingField
	bool ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;
	// System.Boolean Photon.Realtime.Room::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_17;
	// System.Boolean Photon.Realtime.Room::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_18;
	// System.Boolean Photon.Realtime.Room::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_19;
	// System.Boolean Photon.Realtime.Room::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_20;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=13
struct __StaticArrayInitTypeSizeU3D13_tB4D4C39ADAB2F68C29D8E4E332C05D5F6F56FB7A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D13_tB4D4C39ADAB2F68C29D8E4E332C05D5F6F56FB7A__padding[13];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6C220874B8288F2E9E07FEA41E6C8D50B90BBFF5  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t6C220874B8288F2E9E07FEA41E6C8D50B90BBFF5_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=13 <PrivateImplementationDetails>::1995DEFE26C524A9CB3CF007B4A76A325342658A716A5F50C3B262D2F38DF919
	__StaticArrayInitTypeSizeU3D13_tB4D4C39ADAB2F68C29D8E4E332C05D5F6F56FB7A ___1995DEFE26C524A9CB3CF007B4A76A325342658A716A5F50C3B262D2F38DF919_0;
};

// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4  : public RuntimeObject
{
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* ___U3CAuthValuesU3Ek__BackingField_3;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_4;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_5;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E ___U3CExpectedProtocolU3Ek__BackingField_6;
	// System.Object Photon.Realtime.LoadBalancingClient::tokenCache
	RuntimeObject* ___tokenCache_7;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_8;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_9;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_11;
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.LoadBalancingClient::ServerPortOverrides
	PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A ___ServerPortOverrides_12;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_13;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_14;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_15;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_16;
	// System.String Photon.Realtime.LoadBalancingClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_17;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_18;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* ___StateChanged_19;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295* ___EventReceived_20;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826* ___OpResponseReceived_21;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD* ___ConnectionCallbackTargets_22;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97* ___MatchMakingCallbackTargets_23;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488* ___InRoomCallbackTargets_24;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC* ___LobbyCallbackTargets_25;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851* ___WebRpcCallbackTargets_26;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7* ___ErrorInfoCallbackTargets_27;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_28;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___U3CCurrentLobbyU3Ek__BackingField_29;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_30;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___lobbyStatistics_31;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3CLocalPlayerU3Ek__BackingField_32;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CCurrentRoomU3Ek__BackingField_33;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_34;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_35;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_36;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_37;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___enterRoomParamsCache_38;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* ___failedRoomEntryOperation_39;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___friendListRequested_41;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_42;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_43;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___RegionHandler_44;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_45;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_46;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_47;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02* ___callbackTargetChanges_48;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___callbackTargets_49;
	// System.Int32 Photon.Realtime.LoadBalancingClient::NameServerPortInAppSettings
	int32_t ___NameServerPortInAppSettings_50;
};

struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_StaticFields
{
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80* ___ProtocolToNameServerPort_10;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Photon.Realtime.SupportLogger
struct SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Photon.Realtime.SupportLogger::LogTrafficStats
	bool ___LogTrafficStats_4;
	// System.Boolean Photon.Realtime.SupportLogger::loggedStillOfflineMessage
	bool ___loggedStillOfflineMessage_5;
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.SupportLogger::client
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___client_6;
	// System.Diagnostics.Stopwatch Photon.Realtime.SupportLogger::startStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___startStopwatch_7;
	// System.Int32 Photon.Realtime.SupportLogger::pingMax
	int32_t ___pingMax_8;
	// System.Int32 Photon.Realtime.SupportLogger::pingMin
	int32_t ___pingMin_9;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void ExitGames.Client.Photon.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m1C4D2BF84624173510D714545C1FBB92ADEFC624 (Hashtable_tD626399B3ADFD501225241D7366103F35472542A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.RoomInfo::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_mAB935BEF1DAE8C99C0051D85426956E689A939EF_inline (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Photon.Realtime.RoomInfo::get_PlayerCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m021CCF31A290BEADD0EECF2F3265D7D0BF2DD029_inline (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Extensions::ToStringFull(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_ToStringFull_m7D8AFCB5DE3085C237E3DE4D43209F74C60198C4 (RuntimeObject* ___origin0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Boolean ExitGames.Client.Photon.Hashtable::ContainsKey(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1 (Hashtable_tD626399B3ADFD501225241D7366103F35472542A* __this, uint8_t ___key0, const RuntimeMethod* method) ;
// System.Object ExitGames.Client.Photon.Hashtable::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A (Hashtable_tD626399B3ADFD501225241D7366103F35472542A* __this, uint8_t ___key0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RoomInfo::set_PlayerCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_m60E2655747392B753F507AF760FD5F1CE2C25B02_inline (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Extensions::MergeStringKeys(System.Collections.IDictionary,System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_MergeStringKeys_mDEDDE56F5A71A86B226F80FAE6D891B3AB44FC2A (RuntimeObject* ___target0, RuntimeObject* ___addHash1, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Extensions::StripKeysWithNullValues(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_StripKeysWithNullValues_m20F44EB611D67EFAB6F456D0B03BCBC6FA6DC607 (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::RemoveCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_RemoveCallbackTarget_mBDAB0466C92B29CFFB2A1B6E70E7FE3E8910740A (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::AddCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_AddCallbackTarget_mF98AF4F5A8EF6794C9038C50C619B03EC7FB22B8 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.SupportLogger::LogBasics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogBasics_mCA2B0EB1C33461698C1F0DC865A3189394B46CFB (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.SupportLogger::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_set_Client_m516EEF1AC5B8F2EA206BCA29CE2A2F3D0EFD560C (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___value0, const RuntimeMethod* method) ;
// System.String Photon.Realtime.SupportLogger::GetFormattedTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_get_IsConnected_mD98F9FFFBEFD1932A0898268507DFBE9BEE41257 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_m177BCBDFCEA3E09C02E3E444BF4FBA648FAE3CFA (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Seconds_m8CA21613DC31BD025C5D30D41BAD0ED50827578B (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Milliseconds_m09D9D6D0033D5FBC62A3C4007CC716A85F4FC8EA (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::get_LoadBalancingPeer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonPeer_get_RoundTripTime_mD58FA920ABABCC7DCF454164F5CF787E3749D98A (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.PhotonPeer::VitalStatsToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_VitalStatsToString_m86E7FCEC18792D5BFE615BE0F3A094C7FF1E742E (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, bool ___all0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.LoadBalancingClient::get_AppId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppId_mC1D36AE3AFE5FB808FF7CA10785002F65E500D5C_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String Photon.Realtime.LoadBalancingClient::get_AppVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_mA2E5DE4671D1C7BD67296921DBD776E61F63E388_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.PhotonPeer::get_ClientVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_ClientVersion_m986DC6E4D33743AE796F80A4A3CC4E5B9C137C24 (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151 (StringBuilder_t* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Type ExitGames.Client.Photon.PhotonPeer::get_SocketImplementation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* PhotonPeer_get_SocketImplementation_mE28201437EE67C611F6330E4D18AF46C9CFFC628_inline (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.String Photon.Realtime.LoadBalancingClient::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_UserId_mF095E7FB569A0CD2AEEBEA88FCADE18B9486148D (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::get_AuthValues()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// Photon.Realtime.CustomAuthenticationType Photon.Realtime.AuthenticationValues::get_AuthType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_m0B745D57BFF19DFFD283825D461C0417024AAC79_inline (AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* __this, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.PhotonPeer::get_PeerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_PeerID_m45C5EABD3528CBE69D022332411D035D0456D6B2 (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.LoadBalancingClient::get_CurrentServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CurrentServerAddress_mEECF2CACB633771F81D6F9A680CB4611F4E52ECB (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerIpAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_ServerIpAddress_m39ED914DE2093FDAE8B264A3AD9D3A97A02ED59D (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.LoadBalancingClient::get_CloudRegion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CloudRegion_m0093F59A916A2AC5BB01A653D31ED2A45C9421F0_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer_set_TrafficStatsEnabled_mACC1670E493D6B1BA54E1F564FF6C52ED36B017A (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.SupportLogger::StartLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartLogStats_mADEB668E877F7A13C48E457DCDFBBDD6FA45A439 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.SupportLogger::StartTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartTrackValues_mF1E8384DB1F9A9F472D58031DE53E3A3ED718CB0 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) ;
// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::get_CurrentLobby()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* LoadBalancingClient_get_CurrentLobby_mF4197912E9A2A11BAD29D87BC0FB8BD3F53D44D0_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.String System.Int16::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23 (int16_t* __this, const RuntimeMethod* method) ;
// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::get_CurrentRoom()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.LoadBalancingClient::get_GameServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_GameServerAddress_mA5C7E86447BEEB303C5AB1C932FC9DA907407F01_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.SupportLogger::StopLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopLogStats_mC018079D538BE027CAE1BE06562EF41064741AB3 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.SupportLogger::StopTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopTrackValues_m412943F66C1497EC8FEB2FAECDAC09883941FC38 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.SupportLogger::LogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogStats_m72117C40251F6016E6C2ADD79DD5F23B69A88AD4 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>::get_Count()
inline int32_t List_1_get_Count_mD1A2E394D4FC47B9092FE11D1E27BC1AED671721_inline (List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Realtime.WebRpcResponse::get_ResultCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_m54C63D7CA0AB1521398A01C8C720D581F65564CC_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.WebRpcResponse::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_m1A6458393A9B1F01BAD460ADF1F01AAEBBD429C7_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.ParameterDictionary::TryGetValue(System.Byte,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDictionary_TryGetValue_mBA556F2681C5F8AAE5058D98EDECAD8AEE154EA5 (ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* __this, uint8_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.WebRpcResponse::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_m095D12565064B14410FEE63E6C05DC546774A86D_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.WebRpcResponse::set_ResultCode(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_mD491E392728861EB290022B46D419B4E49364191_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mDB355FB4F2969B1F8E482DD930F5F7B9508E2133_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.WebRpcResponse::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_mE9A48AB2D1C8F35A86267E697309DDDDB4BD546A_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Photon.Realtime.WebRpcResponse::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_m07F774596848E8D7638725CCDDD315B2306E5DE7_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* WebRpcResponse_get_Parameters_m6F3D0C2BE5C482898AF11A1872B4B2F4B628BC56_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_m0645B43282EC5801A48D62AB3D4008DC43FB756E (RuntimeObject* ___dictionary0, bool ___includeTypes1, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.WebFlags::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__ctor_mB6C7632B44C70579815DEF054DB5D61D5D1AD06D (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* __this, uint8_t ___webhookFlags0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::get_CustomProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tD626399B3ADFD501225241D7366103F35472542A* RoomInfo_get_CustomProperties_mE54DDDE221FC51475970867611765A4205AFD422 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	{
		// return this.customProperties;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_0 = __this->___customProperties_1;
		return L_0;
	}
}
// System.String Photon.Realtime.RoomInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_mAB935BEF1DAE8C99C0051D85426956E689A939EF (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	{
		// return this.name;
		String_t* L_0 = __this->___name_9;
		return L_0;
	}
}
// System.Int32 Photon.Realtime.RoomInfo::get_PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m021CCF31A290BEADD0EECF2F3265D7D0BF2DD029 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = __this->___U3CPlayerCountU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomInfo::set_PlayerCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_m60E2655747392B753F507AF760FD5F1CE2C25B02 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CPlayerCountU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Byte Photon.Realtime.RoomInfo::get_MaxPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RoomInfo_get_MaxPlayers_mA59AFE46C3C2CB64D2DC7F6DB200187913DDAF24 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	{
		// return this.maxPlayers;
		uint8_t L_0 = __this->___maxPlayers_2;
		return L_0;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_get_IsOpen_m9ED1B11B219CC568D44FAEB8BE79276CC0066FBA (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	{
		// return this.isOpen;
		bool L_0 = __this->___isOpen_6;
		return L_0;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_get_IsVisible_m395C48045B9EE47BC9246AFDC378694B5E47F7CA (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	{
		// return this.isVisible;
		bool L_0 = __this->___isVisible_7;
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo__ctor_mB7E51C34204DD4DF7C230FA103E4474F00458F13 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, String_t* ___roomName0, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___roomProperties1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Hashtable customProperties = new Hashtable();
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_0 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Hashtable__ctor_m1C4D2BF84624173510D714545C1FBB92ADEFC624(L_0, NULL);
		__this->___customProperties_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___customProperties_1), (void*)L_0);
		// protected bool isOpen = true;
		__this->___isOpen_6 = (bool)1;
		// protected bool isVisible = true;
		__this->___isVisible_7 = (bool)1;
		// protected bool autoCleanUp = true;
		__this->___autoCleanUp_8 = (bool)1;
		// protected internal RoomInfo(string roomName, Hashtable roomProperties)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.InternalCacheProperties(roomProperties);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = ___roomProperties1;
		VirtualActionInvoker1< Hashtable_tD626399B3ADFD501225241D7366103F35472542A* >::Invoke(4 /* System.Void Photon.Realtime.RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable) */, __this, L_1);
		// this.name = roomName;
		String_t* L_2 = ___roomName0;
		__this->___name_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_9), (void*)L_2);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_Equals_m08325774F94189E228DD394F9DDFBE242DC9020D (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* V_0 = NULL;
	{
		// RoomInfo otherRoomInfo = other as RoomInfo;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)IsInstClass((RuntimeObject*)L_0, RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D_il2cpp_TypeInfo_var));
		// return (otherRoomInfo != null && this.Name.Equals(otherRoomInfo.name));
		RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2;
		L_2 = RoomInfo_get_Name_mAB935BEF1DAE8C99C0051D85426956E689A939EF_inline(__this, NULL);
		RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___name_9;
		NullCheck(L_2);
		bool L_5;
		L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_4, NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int32 Photon.Realtime.RoomInfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RoomInfo_GetHashCode_mDBC0A71D6BCE880B76090EC8089D50204D800B15 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	{
		// return this.name.GetHashCode();
		String_t* L_0 = __this->___name_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.String Photon.Realtime.RoomInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_ToString_m3FBEFFC9EA83EB7AEAB9103BBB75AF977D8DE55A (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = __this->___name_9;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		bool L_4 = __this->___isVisible_7;
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteralE0D745433E3F5754923781169B40D23E4FC9784F;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = _stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = G_B3_3;
		bool L_6 = __this->___isOpen_6;
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003c;
		}
	}
	{
		G_B6_0 = _stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0041;
	}

IL_003c:
	{
		G_B6_0 = _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0041:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = G_B6_3;
		uint8_t L_8 = __this->___maxPlayers_2;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		int32_t L_12;
		L_12 = RoomInfo_get_PlayerCount_m021CCF31A290BEADD0EECF2F3265D7D0BF2DD029_inline(__this, NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B6_4, L_11, NULL);
		return L_15;
	}
}
// System.String Photon.Realtime.RoomInfo::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_ToStringFull_mC61F0D3747E93670295CED51C81160748AF80E88 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.\ncustomProps: {5}", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount, this.customProperties.ToStringFull());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = __this->___name_9;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		bool L_4 = __this->___isVisible_7;
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteral475629C0DEA0F3121BE77E452FADCAEDFB9D3C77;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = _stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = _stringLiteralB66710B8486B3526B1F8168C6B5624E10E729DE4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = G_B3_3;
		bool L_6 = __this->___isOpen_6;
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003c;
		}
	}
	{
		G_B6_0 = _stringLiteralAA78D62572397C450533E39C24F376013C8BCEAA;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0041;
	}

IL_003c:
	{
		G_B6_0 = _stringLiteral963D8FD233ED8F4791C80833301C4D3C330D3E01;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0041:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = G_B6_3;
		uint8_t L_8 = __this->___maxPlayers_2;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		int32_t L_12;
		L_12 = RoomInfo_get_PlayerCount_m021CCF31A290BEADD0EECF2F3265D7D0BF2DD029_inline(__this, NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_16 = __this->___customProperties_1;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = Extensions_ToStringFull_m7D8AFCB5DE3085C237E3DE4D43209F74C60198C4(L_16, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_17);
		String_t* L_18;
		L_18 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B6_4, L_15, NULL);
		return L_18;
	}
}
// System.Void Photon.Realtime.RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo_InternalCacheProperties_m63DC75C2047A0B7BA236F9B708E72F6B85B9DF87 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___propertiesToCache0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (propertiesToCache == null || propertiesToCache.Count == 0 || this.customProperties.Equals(propertiesToCache))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_0 = ___propertiesToCache0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = ___propertiesToCache0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549(L_1, Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_3 = __this->___customProperties_1;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_4 = ___propertiesToCache0;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		if (!L_5)
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		// return;
		return;
	}

IL_001a:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.Removed))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_6 = ___propertiesToCache0;
		NullCheck(L_6);
		bool L_7;
		L_7 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_6, (uint8_t)((int32_t)251), NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// this.RemovedFromList = (bool)propertiesToCache[GamePropertyKey.Removed];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_8 = ___propertiesToCache0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_8, (uint8_t)((int32_t)251), NULL);
		__this->___RemovedFromList_0 = ((*(bool*)((bool*)(bool*)UnBox(L_9, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		// if (this.RemovedFromList)
		bool L_10 = __this->___RemovedFromList_0;
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		// return;
		return;
	}

IL_0046:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.MaxPlayers))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_11 = ___propertiesToCache0;
		NullCheck(L_11);
		bool L_12;
		L_12 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_11, (uint8_t)((int32_t)255), NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		// this.maxPlayers = (byte)propertiesToCache[GamePropertyKey.MaxPlayers];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_13 = ___propertiesToCache0;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_13, (uint8_t)((int32_t)255), NULL);
		__this->___maxPlayers_2 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_14, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
	}

IL_0069:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.IsOpen))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_15 = ___propertiesToCache0;
		NullCheck(L_15);
		bool L_16;
		L_16 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_15, (uint8_t)((int32_t)253), NULL);
		if (!L_16)
		{
			goto IL_008c;
		}
	}
	{
		// this.isOpen = (bool)propertiesToCache[GamePropertyKey.IsOpen];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_17 = ___propertiesToCache0;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_17, (uint8_t)((int32_t)253), NULL);
		__this->___isOpen_6 = ((*(bool*)((bool*)(bool*)UnBox(L_18, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
	}

IL_008c:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.IsVisible))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_19 = ___propertiesToCache0;
		NullCheck(L_19);
		bool L_20;
		L_20 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_19, (uint8_t)((int32_t)254), NULL);
		if (!L_20)
		{
			goto IL_00af;
		}
	}
	{
		// this.isVisible = (bool)propertiesToCache[GamePropertyKey.IsVisible];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_21 = ___propertiesToCache0;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_21, (uint8_t)((int32_t)254), NULL);
		__this->___isVisible_7 = ((*(bool*)((bool*)(bool*)UnBox(L_22, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
	}

IL_00af:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.PlayerCount))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_23 = ___propertiesToCache0;
		NullCheck(L_23);
		bool L_24;
		L_24 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_23, (uint8_t)((int32_t)252), NULL);
		if (!L_24)
		{
			goto IL_00d2;
		}
	}
	{
		// this.PlayerCount = (int)((byte)propertiesToCache[GamePropertyKey.PlayerCount]);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_25 = ___propertiesToCache0;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_25, (uint8_t)((int32_t)252), NULL);
		RoomInfo_set_PlayerCount_m60E2655747392B753F507AF760FD5F1CE2C25B02_inline(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_26, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))), NULL);
	}

IL_00d2:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.CleanupCacheOnLeave))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_27 = ___propertiesToCache0;
		NullCheck(L_27);
		bool L_28;
		L_28 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_27, (uint8_t)((int32_t)249), NULL);
		if (!L_28)
		{
			goto IL_00f5;
		}
	}
	{
		// this.autoCleanUp = (bool)propertiesToCache[GamePropertyKey.CleanupCacheOnLeave];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_29 = ___propertiesToCache0;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_29, (uint8_t)((int32_t)249), NULL);
		__this->___autoCleanUp_8 = ((*(bool*)((bool*)(bool*)UnBox(L_30, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
	}

IL_00f5:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.MasterClientId))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_31 = ___propertiesToCache0;
		NullCheck(L_31);
		bool L_32;
		L_32 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_31, (uint8_t)((int32_t)248), NULL);
		if (!L_32)
		{
			goto IL_0118;
		}
	}
	{
		// this.masterClientId = (int)propertiesToCache[GamePropertyKey.MasterClientId];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_33 = ___propertiesToCache0;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_33, (uint8_t)((int32_t)248), NULL);
		__this->___masterClientId_10 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_34, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}

IL_0118:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.PropsListedInLobby))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_35 = ___propertiesToCache0;
		NullCheck(L_35);
		bool L_36;
		L_36 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_35, (uint8_t)((int32_t)250), NULL);
		if (!L_36)
		{
			goto IL_013b;
		}
	}
	{
		// this.propertiesListedInLobby = propertiesToCache[GamePropertyKey.PropsListedInLobby] as string[];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_37 = ___propertiesToCache0;
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_37, (uint8_t)((int32_t)250), NULL);
		__this->___propertiesListedInLobby_11 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_38, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___propertiesListedInLobby_11), (void*)((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_38, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)));
	}

IL_013b:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.ExpectedUsers))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_39 = ___propertiesToCache0;
		NullCheck(L_39);
		bool L_40;
		L_40 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_39, (uint8_t)((int32_t)247), NULL);
		if (!L_40)
		{
			goto IL_015e;
		}
	}
	{
		// this.expectedUsers = (string[])propertiesToCache[GamePropertyKey.ExpectedUsers];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_41 = ___propertiesToCache0;
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_41, (uint8_t)((int32_t)247), NULL);
		__this->___expectedUsers_5 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_42, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___expectedUsers_5), (void*)((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_42, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)));
	}

IL_015e:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.EmptyRoomTtl))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_43 = ___propertiesToCache0;
		NullCheck(L_43);
		bool L_44;
		L_44 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_43, (uint8_t)((int32_t)245), NULL);
		if (!L_44)
		{
			goto IL_0181;
		}
	}
	{
		// this.emptyRoomTtl = (int)propertiesToCache[GamePropertyKey.EmptyRoomTtl];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_45 = ___propertiesToCache0;
		NullCheck(L_45);
		RuntimeObject* L_46;
		L_46 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_45, (uint8_t)((int32_t)245), NULL);
		__this->___emptyRoomTtl_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_46, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}

IL_0181:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.PlayerTtl))
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_47 = ___propertiesToCache0;
		NullCheck(L_47);
		bool L_48;
		L_48 = Hashtable_ContainsKey_m3D587133716FB10E52C313BA3C8FC186363ED2F1(L_47, (uint8_t)((int32_t)246), NULL);
		if (!L_48)
		{
			goto IL_01a4;
		}
	}
	{
		// this.playerTtl = (int)propertiesToCache[GamePropertyKey.PlayerTtl];
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_49 = ___propertiesToCache0;
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = Hashtable_get_Item_mE4741BBE2CD6294D3AC71811668524D262387B2A(L_49, (uint8_t)((int32_t)246), NULL);
		__this->___playerTtl_4 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_50, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}

IL_01a4:
	{
		// this.customProperties.MergeStringKeys(propertiesToCache);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_51 = __this->___customProperties_1;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_52 = ___propertiesToCache0;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		Extensions_MergeStringKeys_mDEDDE56F5A71A86B226F80FAE6D891B3AB44FC2A(L_51, L_52, NULL);
		// this.customProperties.StripKeysWithNullValues();
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_53 = __this->___customProperties_1;
		Extensions_StripKeysWithNullValues_m20F44EB611D67EFAB6F456D0B03BCBC6FA6DC607(L_53, NULL);
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
// Photon.Realtime.LoadBalancingClient Photon.Realtime.SupportLogger::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* SupportLogger_get_Client_m3F15DB2AB82BF840798089CEC8D9F798129EF7ED (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.client; }
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___client_6;
		return L_0;
	}
}
// System.Void Photon.Realtime.SupportLogger::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_set_Client_m516EEF1AC5B8F2EA206BCA29CE2A2F3D0EFD560C (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___value0, const RuntimeMethod* method) 
{
	{
		// if (this.client != value)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___client_6;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = ___value0;
		if ((((RuntimeObject*)(LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)L_0) == ((RuntimeObject*)(LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)L_1)))
		{
			goto IL_0038;
		}
	}
	{
		// if (this.client != null)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_2 = __this->___client_6;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// this.client.RemoveCallbackTarget(this);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_3 = __this->___client_6;
		NullCheck(L_3);
		LoadBalancingClient_RemoveCallbackTarget_mBDAB0466C92B29CFFB2A1B6E70E7FE3E8910740A(L_3, __this, NULL);
	}

IL_001d:
	{
		// this.client = value;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_4 = ___value0;
		__this->___client_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_6), (void*)L_4);
		// if (this.client != null)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_5 = __this->___client_6;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// this.client.AddCallbackTarget(this);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_6 = __this->___client_6;
		NullCheck(L_6);
		LoadBalancingClient_AddCallbackTarget_mF98AF4F5A8EF6794C9038C50C619B03EC7FB22B8(L_6, __this, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_Start_mEF5755517007326571A5BD067E423B06CDB25B20 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.LogBasics();
		SupportLogger_LogBasics_mCA2B0EB1C33461698C1F0DC865A3189394B46CFB(__this, NULL);
		// if (this.startStopwatch == null)
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->___startStopwatch_7;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// this.startStopwatch = new Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_1, NULL);
		__this->___startStopwatch_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___startStopwatch_7), (void*)L_1);
		// this.startStopwatch.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_2 = __this->___startStopwatch_7;
		NullCheck(L_2);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_2, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnDestroy_mA3759505591EF6386997E686F6C63A7860C14D61 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	{
		// this.Client = null; // will remove this SupportLogger as callback target
		SupportLogger_set_Client_m516EEF1AC5B8F2EA206BCA29CE2A2F3D0EFD560C(__this, (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnApplicationPause_m3C665BEB01364A8D08F776B48DB6B9FDF910C5FE (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, bool ___pause0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28C16AD3D08B7CCD40C5C1BC966F3A5EB27FEF18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E357C31C3E3A0DB2B89D68F7FD43137F7E8DDED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6531E0D94FC153A90B43E184D8F7C53223B3B7D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnApplicationPause: " + pause + " connected: " + (this.client == null ? "no (client is null)" : this.client.IsConnected.ToString()));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral7E357C31C3E3A0DB2B89D68F7FD43137F7E8DDED);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral7E357C31C3E3A0DB2B89D68F7FD43137F7E8DDED);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5;
		L_5 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___pause0), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD6531E0D94FC153A90B43E184D8F7C53223B3B7D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralD6531E0D94FC153A90B43E184D8F7C53223B3B7D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_8 = __this->___client_6;
		G_B1_0 = 4;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		if (!L_8)
		{
			G_B2_0 = 4;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			goto IL_0048;
		}
	}
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_9 = __this->___client_6;
		NullCheck(L_9);
		bool L_10;
		L_10 = LoadBalancingClient_get_IsConnected_mD98F9FFFBEFD1932A0898268507DFBE9BEE41257(L_9, NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		G_B3_0 = L_11;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_004d;
	}

IL_0048:
	{
		G_B3_0 = _stringLiteral28C16AD3D08B7CCD40C5C1BC966F3A5EB27FEF18;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_004d:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		String_t* L_12;
		L_12 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B3_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnApplicationQuit_m5D31C9746EB41F478159A481A2F42B979BA3EBCB (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	{
		// this.CancelInvoke();
		MonoBehaviour_CancelInvoke_m177BCBDFCEA3E09C02E3E444BF4FBA648FAE3CFA(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StartLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartLogStats_mADEB668E877F7A13C48E457DCDFBBDD6FA45A439 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.InvokeRepeating("LogStats", 10, 10);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00, (10.0f), (10.0f), NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StopLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopLogStats_mC018079D538BE027CAE1BE06562EF41064741AB3 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CancelInvoke("LogStats");
		MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01(__this, _stringLiteral33CA58FEF7436C175DDEA4DF7B79D3ED94347F00, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StartTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartTrackValues_mF1E8384DB1F9A9F472D58031DE53E3A3ED718CB0 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.InvokeRepeating("TrackValues", 0.5f, 0.5f);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D, (0.5f), (0.5f), NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StopTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopTrackValues_m412943F66C1497EC8FEB2FAECDAC09883941FC38 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CancelInvoke("TrackValues");
		MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01(__this, _stringLiteralFD75639C00900E4F0EE245691B4C30ECBDA2F78D, NULL);
		// }
		return;
	}
}
// System.String Photon.Realtime.SupportLogger::GetFormattedTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAFE1135E66E66BD15C9C823C63EB9B6F691436F);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (this.startStopwatch == null)
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->___startStopwatch_7;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// this.startStopwatch = new Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_1, NULL);
		__this->___startStopwatch_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___startStopwatch_7), (void*)L_1);
		// this.startStopwatch.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_2 = __this->___startStopwatch_7;
		NullCheck(L_2);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_2, NULL);
	}

IL_001e:
	{
		// return string.Format("[{0}.{1}]", this.startStopwatch.Elapsed.Seconds, this.startStopwatch.Elapsed.Milliseconds);
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_3 = __this->___startStopwatch_7;
		NullCheck(L_3);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_3, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = TimeSpan_get_Seconds_m8CA21613DC31BD025C5D30D41BAD0ED50827578B((&V_0), NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_8 = __this->___startStopwatch_7;
		NullCheck(L_8);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9;
		L_9 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_8, NULL);
		V_0 = L_9;
		int32_t L_10;
		L_10 = TimeSpan_get_Milliseconds_m09D9D6D0033D5FBC62A3C4007CC716A85F4FC8EA((&V_0), NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralFAFE1135E66E66BD15C9C823C63EB9B6F691436F, L_7, L_12, NULL);
		return L_13;
	}
}
// System.Void Photon.Realtime.SupportLogger::TrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_TrackValues_mA1B658F169546E0992EDB43CF5943E7C05B692EB (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (this.client != null)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___client_6;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// int currentRtt = this.client.LoadBalancingPeer.RoundTripTime;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = __this->___client_6;
		NullCheck(L_1);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_2;
		L_2 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PhotonPeer_get_RoundTripTime_mD58FA920ABABCC7DCF454164F5CF787E3749D98A(L_2, NULL);
		V_0 = L_3;
		// if (currentRtt > this.pingMax)
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___pingMax_8;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		// this.pingMax = currentRtt;
		int32_t L_6 = V_0;
		__this->___pingMax_8 = L_6;
	}

IL_0029:
	{
		// if (currentRtt < this.pingMin)
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___pingMin_9;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0039;
		}
	}
	{
		// this.pingMin = currentRtt;
		int32_t L_9 = V_0;
		__this->___pingMin_9 = L_9;
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::LogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogStats_m72117C40251F6016E6C2ADD79DD5F23B69A88AD4 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D1239F07A9E8331EAEB0B65C253D33291FDD92B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE51BAB8EEF309071E735D738BA793BB2B271FC56);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.client == null || this.client.State == ClientState.PeerCreated)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___client_6;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = __this->___client_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// if (this.LogTrafficStats)
		bool L_3 = __this->___LogTrafficStats_4;
		if (!L_3)
		{
			goto IL_007f;
		}
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger " + this.client.LoadBalancingPeer.VitalStatsToString(false) + " Ping min/max: " + this.pingMin + "/" + this.pingMax);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6;
		L_6 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral8D1239F07A9E8331EAEB0B65C253D33291FDD92B);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral8D1239F07A9E8331EAEB0B65C253D33291FDD92B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_9 = __this->___client_6;
		NullCheck(L_9);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_10;
		L_10 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = PhotonPeer_VitalStatsToString_m86E7FCEC18792D5BFE615BE0F3A094C7FF1E742E(L_10, (bool)0, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_8;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralE51BAB8EEF309071E735D738BA793BB2B271FC56);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralE51BAB8EEF309071E735D738BA793BB2B271FC56);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		int32_t* L_14 = (&__this->___pingMin_9);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_14, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_13;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		int32_t* L_18 = (&__this->___pingMax_8);
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_18, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_19);
		String_t* L_20;
		L_20 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_20, NULL);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::LogBasics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogBasics_mCA2B0EB1C33461698C1F0DC865A3189394B46CFB (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthModeOption_t7CA0F11229CF212E10897F367BEE70D85C01B1EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAuthenticationType_t202E72650121EDA3F5EC694D792F2DEBC48E9D0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncryptionMode_tD26BF6E736ED3A0AE841EE96A761723407E6FF98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28A00C6C2538607194DCD2548EF0DFB07D324A14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BA731B2704F57E0D64A0B832502A59C9A647418);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral408EB95653B87D3CABA50A013197EF62E5DB13D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C2B738C07CAF0CE8EC4DF3FD24573F2DFFE3D56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6808135BCC86E2F4461A09CFB8F51ED8ADE6E02A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral691FADBE26C2608C232E86F1289D3E5FCC330C03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F922B5D2735B37B3F9E1522305AB8CCD8ED274B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94C9907E8EDE0DCF9B99D296D066DF89F5E204E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4175BA66C7FF6F238B86BBCB5E18C2056A2A746);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCADE992351A796143F5F5164E100121E1080BF4C);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint8_t V_4 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B11_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B11_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B11_2 = NULL;
	String_t* G_B11_3 = NULL;
	StringBuilder_t* G_B11_4 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B10_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B10_2 = NULL;
	String_t* G_B10_3 = NULL;
	StringBuilder_t* G_B10_4 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B12_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B12_3 = NULL;
	String_t* G_B12_4 = NULL;
	StringBuilder_t* G_B12_5 = NULL;
	{
		// if (this.client != null)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___client_6;
		if (!L_0)
		{
			goto IL_025a;
		}
	}
	{
		// List<string> buildProperties = new List<string>(10);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_1, ((int32_t)10), List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		V_0 = L_1;
		// buildProperties.Add(Application.unityVersion);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = V_0;
		String_t* L_3;
		L_3 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, L_3, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// buildProperties.Add(Application.platform.ToString());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = V_0;
		int32_t L_5;
		L_5 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		V_3 = L_5;
		Il2CppFakeBox<int32_t> L_6(RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// buildProperties.Add("ENABLE_IL2CPP");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = V_0;
		NullCheck(L_8);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_8, _stringLiteral8F922B5D2735B37B3F9E1522305AB8CCD8ED274B, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// buildProperties.Add("NET_STANDARD_2_0");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = V_0;
		NullCheck(L_9);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_9, _stringLiteral94C9907E8EDE0DCF9B99D296D066DF89F5E204E9, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_10 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_10, NULL);
		V_1 = L_10;
		// string appIdShort = string.IsNullOrEmpty(this.client.AppId) || this.client.AppId.Length < 8 ? this.client.AppId : string.Concat(this.client.AppId.Substring(0, 8), "***");
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_11 = __this->___client_6;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = LoadBalancingClient_get_AppId_mC1D36AE3AFE5FB808FF7CA10785002F65E500D5C_inline(L_11, NULL);
		bool L_13;
		L_13 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_12, NULL);
		if (L_13)
		{
			goto IL_0096;
		}
	}
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_14 = __this->___client_6;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = LoadBalancingClient_get_AppId_mC1D36AE3AFE5FB808FF7CA10785002F65E500D5C_inline(L_14, NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		if ((((int32_t)L_16) < ((int32_t)8)))
		{
			goto IL_0096;
		}
	}
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_17 = __this->___client_6;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = LoadBalancingClient_get_AppId_mC1D36AE3AFE5FB808FF7CA10785002F65E500D5C_inline(L_17, NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_18, 0, 8, NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_19, _stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34, NULL);
		G_B5_0 = L_20;
		goto IL_00a1;
	}

IL_0096:
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_21 = __this->___client_6;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = LoadBalancingClient_get_AppId_mC1D36AE3AFE5FB808FF7CA10785002F65E500D5C_inline(L_21, NULL);
		G_B5_0 = L_22;
	}

IL_00a1:
	{
		V_2 = G_B5_0;
		// sb.AppendFormat("{0} SupportLogger Info: ", this.GetFormattedTimestamp());
		StringBuilder_t* L_23 = V_1;
		String_t* L_24;
		L_24 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		NullCheck(L_23);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_23, _stringLiteralB4175BA66C7FF6F238B86BBCB5E18C2056A2A746, L_24, NULL);
		// sb.AppendFormat("AppID: \"{0}\" AppVersion: \"{1}\" Client: v{2} Build: {3} ", appIdShort, this.client.AppVersion, this.client.LoadBalancingPeer.ClientVersion, string.Join(", ", buildProperties.ToArray()));
		StringBuilder_t* L_26 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_27;
		String_t* L_29 = V_2;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_28;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_31 = __this->___client_6;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = LoadBalancingClient_get_AppVersion_mA2E5DE4671D1C7BD67296921DBD776E61F63E388_inline(L_31, NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_32);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_32);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_30;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_34 = __this->___client_6;
		NullCheck(L_34);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_35;
		L_35 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_34, NULL);
		NullCheck(L_35);
		String_t* L_36;
		L_36 = PhotonPeer_get_ClientVersion_m986DC6E4D33743AE796F80A4A3CC4E5B9C137C24(L_35, NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_36);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_33;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_38 = V_0;
		NullCheck(L_38);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39;
		L_39 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_38, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_40;
		L_40 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_39, NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_40);
		NullCheck(L_26);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151(L_26, _stringLiteral408EB95653B87D3CABA50A013197EF62E5DB13D6, L_37, NULL);
		// if (this.client != null && this.client.LoadBalancingPeer != null && this.client.LoadBalancingPeer.SocketImplementation != null)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_42 = __this->___client_6;
		if (!L_42)
		{
			goto IL_014c;
		}
	}
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_43 = __this->___client_6;
		NullCheck(L_43);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_44;
		L_44 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_43, NULL);
		if (!L_44)
		{
			goto IL_014c;
		}
	}
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_45 = __this->___client_6;
		NullCheck(L_45);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_46;
		L_46 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_45, NULL);
		NullCheck(L_46);
		Type_t* L_47;
		L_47 = PhotonPeer_get_SocketImplementation_mE28201437EE67C611F6330E4D18AF46C9CFFC628_inline(L_46, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_47, (Type_t*)NULL, NULL);
		if (!L_48)
		{
			goto IL_014c;
		}
	}
	{
		// sb.AppendFormat("Socket: {0} ", this.client.LoadBalancingPeer.SocketImplementation.Name);
		StringBuilder_t* L_49 = V_1;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_50 = __this->___client_6;
		NullCheck(L_50);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_51;
		L_51 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_50, NULL);
		NullCheck(L_51);
		Type_t* L_52;
		L_52 = PhotonPeer_get_SocketImplementation_mE28201437EE67C611F6330E4D18AF46C9CFFC628_inline(L_51, NULL);
		NullCheck(L_52);
		String_t* L_53;
		L_53 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_52);
		NullCheck(L_49);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_49, _stringLiteral2BA731B2704F57E0D64A0B832502A59C9A647418, L_53, NULL);
	}

IL_014c:
	{
		// sb.AppendFormat("UserId: \"{0}\" AuthType: {1} AuthMode: {2} {3} ", this.client.UserId, (this.client.AuthValues != null) ? this.client.AuthValues.AuthType.ToString() : "N/A", this.client.AuthMode, this.client.EncryptionMode);
		StringBuilder_t* L_55 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_57 = L_56;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_58 = __this->___client_6;
		NullCheck(L_58);
		String_t* L_59;
		L_59 = LoadBalancingClient_get_UserId_mF095E7FB569A0CD2AEEBEA88FCADE18B9486148D(L_58, NULL);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_59);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_59);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60 = L_57;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_61 = __this->___client_6;
		NullCheck(L_61);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_62;
		L_62 = LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline(L_61, NULL);
		G_B10_0 = 1;
		G_B10_1 = L_60;
		G_B10_2 = L_60;
		G_B10_3 = _stringLiteral6808135BCC86E2F4461A09CFB8F51ED8ADE6E02A;
		G_B10_4 = L_55;
		if (L_62)
		{
			G_B11_0 = 1;
			G_B11_1 = L_60;
			G_B11_2 = L_60;
			G_B11_3 = _stringLiteral6808135BCC86E2F4461A09CFB8F51ED8ADE6E02A;
			G_B11_4 = L_55;
			goto IL_017c;
		}
	}
	{
		G_B12_0 = _stringLiteral28A00C6C2538607194DCD2548EF0DFB07D324A14;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		G_B12_4 = G_B10_3;
		G_B12_5 = G_B10_4;
		goto IL_019b;
	}

IL_017c:
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_63 = __this->___client_6;
		NullCheck(L_63);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_64;
		L_64 = LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline(L_63, NULL);
		NullCheck(L_64);
		uint8_t L_65;
		L_65 = AuthenticationValues_get_AuthType_m0B745D57BFF19DFFD283825D461C0417024AAC79_inline(L_64, NULL);
		V_4 = L_65;
		Il2CppFakeBox<uint8_t> L_66(CustomAuthenticationType_t202E72650121EDA3F5EC694D792F2DEBC48E9D0B_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_67;
		L_67 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_66), NULL);
		G_B12_0 = L_67;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
		G_B12_4 = G_B11_3;
		G_B12_5 = G_B11_4;
	}

IL_019b:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (RuntimeObject*)G_B12_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_68 = G_B12_3;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_69 = __this->___client_6;
		NullCheck(L_69);
		int32_t L_70 = L_69->___AuthMode_4;
		int32_t L_71 = L_70;
		RuntimeObject* L_72 = Box(AuthModeOption_t7CA0F11229CF212E10897F367BEE70D85C01B1EE_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_72);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_72);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_73 = L_68;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_74 = __this->___client_6;
		NullCheck(L_74);
		int32_t L_75 = L_74->___EncryptionMode_5;
		int32_t L_76 = L_75;
		RuntimeObject* L_77 = Box(EncryptionMode_tD26BF6E736ED3A0AE841EE96A761723407E6FF98_il2cpp_TypeInfo_var, &L_76);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_77);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_77);
		NullCheck(G_B12_5);
		StringBuilder_t* L_78;
		L_78 = StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151(G_B12_5, G_B12_4, L_73, NULL);
		// sb.AppendFormat("State: {0} ", this.client.State);
		StringBuilder_t* L_79 = V_1;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_80 = __this->___client_6;
		NullCheck(L_80);
		int32_t L_81;
		L_81 = LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C_inline(L_80, NULL);
		int32_t L_82 = L_81;
		RuntimeObject* L_83 = Box(ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var, &L_82);
		NullCheck(L_79);
		StringBuilder_t* L_84;
		L_84 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_79, _stringLiteral691FADBE26C2608C232E86F1289D3E5FCC330C03, L_83, NULL);
		// sb.AppendFormat("PeerID: {0} ", this.client.LoadBalancingPeer.PeerID);
		StringBuilder_t* L_85 = V_1;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_86 = __this->___client_6;
		NullCheck(L_86);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_87;
		L_87 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_86, NULL);
		NullCheck(L_87);
		String_t* L_88;
		L_88 = PhotonPeer_get_PeerID_m45C5EABD3528CBE69D022332411D035D0456D6B2(L_87, NULL);
		NullCheck(L_85);
		StringBuilder_t* L_89;
		L_89 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_85, _stringLiteral5C2B738C07CAF0CE8EC4DF3FD24573F2DFFE3D56, L_88, NULL);
		// sb.AppendFormat("NameServer: {0} Current Server: {1} IP: {2} Region: {3} ", this.client.NameServerHost, this.client.CurrentServerAddress, this.client.LoadBalancingPeer.ServerIpAddress, this.client.CloudRegion);
		StringBuilder_t* L_90 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_91 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_92 = L_91;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_93 = __this->___client_6;
		NullCheck(L_93);
		String_t* L_94 = L_93->___NameServerHost_9;
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_94);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_94);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_95 = L_92;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_96 = __this->___client_6;
		NullCheck(L_96);
		String_t* L_97;
		L_97 = LoadBalancingClient_get_CurrentServerAddress_mEECF2CACB633771F81D6F9A680CB4611F4E52ECB(L_96, NULL);
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, L_97);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_97);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_98 = L_95;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_99 = __this->___client_6;
		NullCheck(L_99);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_100;
		L_100 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_99, NULL);
		NullCheck(L_100);
		String_t* L_101;
		L_101 = PhotonPeer_get_ServerIpAddress_m39ED914DE2093FDAE8B264A3AD9D3A97A02ED59D(L_100, NULL);
		NullCheck(L_98);
		ArrayElementTypeCheck (L_98, L_101);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_101);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_102 = L_98;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_103 = __this->___client_6;
		NullCheck(L_103);
		String_t* L_104;
		L_104 = LoadBalancingClient_get_CloudRegion_m0093F59A916A2AC5BB01A653D31ED2A45C9421F0_inline(L_103, NULL);
		NullCheck(L_102);
		ArrayElementTypeCheck (L_102, L_104);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_104);
		NullCheck(L_90);
		StringBuilder_t* L_105;
		L_105 = StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151(L_90, _stringLiteralCADE992351A796143F5F5164E100121E1080BF4C, L_102, NULL);
		// Debug.LogWarning(sb.ToString());
		StringBuilder_t* L_106 = V_1;
		NullCheck(L_106);
		String_t* L_107;
		L_107 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_106);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_107, NULL);
	}

IL_025a:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnConnected_mD3B22C9C910F781EE997FC39C70C57E47EE6A264 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B49F56286E679FA58107352F1A55E4C9D0B9352);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnConnected().");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral5B49F56286E679FA58107352F1A55E4C9D0B9352, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// this.pingMax = 0;
		__this->___pingMax_8 = 0;
		// this.pingMin = this.client.LoadBalancingPeer.RoundTripTime;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_2 = __this->___client_6;
		NullCheck(L_2);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_3;
		L_3 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = PhotonPeer_get_RoundTripTime_mD58FA920ABABCC7DCF454164F5CF787E3749D98A(L_3, NULL);
		__this->___pingMin_9 = L_4;
		// this.LogBasics();
		SupportLogger_LogBasics_mCA2B0EB1C33461698C1F0DC865A3189394B46CFB(__this, NULL);
		// if (this.LogTrafficStats)
		bool L_5 = __this->___LogTrafficStats_4;
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		// this.client.LoadBalancingPeer.TrafficStatsEnabled = false;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_6 = __this->___client_6;
		NullCheck(L_6);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_7;
		L_7 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_6, NULL);
		NullCheck(L_7);
		PhotonPeer_set_TrafficStatsEnabled_mACC1670E493D6B1BA54E1F564FF6C52ED36B017A(L_7, (bool)0, NULL);
		// this.client.LoadBalancingPeer.TrafficStatsEnabled = true;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_8 = __this->___client_6;
		NullCheck(L_8);
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_9;
		L_9 = LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline(L_8, NULL);
		NullCheck(L_9);
		PhotonPeer_set_TrafficStatsEnabled_mACC1670E493D6B1BA54E1F564FF6C52ED36B017A(L_9, (bool)1, NULL);
		// this.StartLogStats();
		SupportLogger_StartLogStats_mADEB668E877F7A13C48E457DCDFBBDD6FA45A439(__this, NULL);
	}

IL_0068:
	{
		// this.StartTrackValues();
		SupportLogger_StartTrackValues_mF1E8384DB1F9A9F472D58031DE53E3A3ED718CB0(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnConnectedToMaster_mD427D6E609E4A9D4874F6DD6F9C81C66F604C5F9 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744BF9AE3CE56EE58F000CE7C3F4F94C51ABA032);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnConnectedToMaster().");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral744BF9AE3CE56EE58F000CE7C3F4F94C51ABA032, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnFriendListUpdate_mDE9F8B869A076E670499C05A87C14624B1C2A796 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F* ___friendList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49221D9FFDE2F83640CB6D959D4A66D1492381B7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnFriendListUpdate(friendList).");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral49221D9FFDE2F83640CB6D959D4A66D1492381B7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinedLobby_mD59E20234D3CD2213A5A32B57F57977BCF7D6316 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB18B972DF30D22EF004BFFEF3F5C7E126C9DA580);
		s_Il2CppMethodInitialized = true;
	}
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinedLobby(" + this.client.CurrentLobby + ").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = __this->___client_6;
		NullCheck(L_1);
		TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* L_2;
		L_2 = LoadBalancingClient_get_CurrentLobby_mF4197912E9A2A11BAD29D87BC0FB8BD3F53D44D0_inline(L_1, NULL);
		TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = _stringLiteralB18B972DF30D22EF004BFFEF3F5C7E126C9DA580;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = _stringLiteralB18B972DF30D22EF004BFFEF3F5C7E126C9DA580;
			G_B2_2 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0022;
	}

IL_001d:
	{
		NullCheck(G_B2_0);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0022:
	{
		String_t* L_5;
		L_5 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B3_2, G_B3_1, G_B3_0, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLeftLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLeftLobby_m1C90343E99542FD0BC28ABB43F38B96D94D6CAD2 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE115685933AB6FADBFC7D7A380253AE496EE2014);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLeftLobby().");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteralE115685933AB6FADBFC7D7A380253AE496EE2014, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCreateRoomFailed_m7D690C17A8BDD55B25AB53117D83EC876DF1DFB0 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB509740A88CB90C1FADEE5AF8BBF1DEEA0A7D27);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCreateRoomFailed(" + returnCode+","+message+").");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralFB509740A88CB90C1FADEE5AF8BBF1DEEA0A7D27);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralFB509740A88CB90C1FADEE5AF8BBF1DEEA0A7D27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5;
		L_5 = Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23((&___returnCode0), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = ___message1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinedRoom_m3A23B652C43C78F7A8805F59F1CDB5AAB2B051B9 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01551127791BB14934414B8428B67FD51B390033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		s_Il2CppMethodInitialized = true;
	}
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinedRoom(" + this.client.CurrentRoom + "). " + this.client.CurrentLobby + " GameServer:" + this.client.GameServerAddress);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral01551127791BB14934414B8428B67FD51B390033);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral01551127791BB14934414B8428B67FD51B390033);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_5 = __this->___client_6;
		NullCheck(L_5);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_6;
		L_6 = LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline(L_5, NULL);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = 2;
		G_B1_2 = L_4;
		G_B1_3 = L_4;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = 2;
			G_B2_2 = L_4;
			G_B2_3 = L_4;
			goto IL_002b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0030;
	}

IL_002b:
	{
		NullCheck(G_B2_0);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0030:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = G_B3_3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_11 = __this->___client_6;
		NullCheck(L_11);
		TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* L_12;
		L_12 = LoadBalancingClient_get_CurrentLobby_mF4197912E9A2A11BAD29D87BC0FB8BD3F53D44D0_inline(L_11, NULL);
		TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* L_13 = L_12;
		G_B4_0 = L_13;
		G_B4_1 = 4;
		G_B4_2 = L_10;
		G_B4_3 = L_10;
		if (L_13)
		{
			G_B5_0 = L_13;
			G_B5_1 = 4;
			G_B5_2 = L_10;
			G_B5_3 = L_10;
			goto IL_004d;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_0052;
	}

IL_004d:
	{
		NullCheck(G_B5_0);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0052:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = G_B6_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_17 = __this->___client_6;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = LoadBalancingClient_get_GameServerAddress_mA5C7E86447BEEB303C5AB1C932FC9DA907407F01_inline(L_17, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_19, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinRoomFailed_m32A3F8899D7522A49FA9FB2D89F42D80F461F17F (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4107A0725173791DF5ACF52B43FBF074AD90C194);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinRoomFailed(" + returnCode+","+message+").");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral4107A0725173791DF5ACF52B43FBF074AD90C194);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4107A0725173791DF5ACF52B43FBF074AD90C194);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5;
		L_5 = Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23((&___returnCode0), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = ___message1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinRandomFailed_mECC76BE7463BC2384FBADA3C9706DF4710E2182C (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38011452171D5D98758667404D6F17F5AF329293);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinRandomFailed(" + returnCode+","+message+").");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral38011452171D5D98758667404D6F17F5AF329293);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral38011452171D5D98758667404D6F17F5AF329293);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5;
		L_5 = Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23((&___returnCode0), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = ___message1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCreatedRoom_m043CFC6CFE8CCC0A65CC8DF058C5AE522250A7AA (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCF229FD3FDDCC26316DD55763B57CA36D12D076);
		s_Il2CppMethodInitialized = true;
	}
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCreatedRoom(" + this.client.CurrentRoom + "). " + this.client.CurrentLobby + " GameServer:" + this.client.GameServerAddress);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralFCF229FD3FDDCC26316DD55763B57CA36D12D076);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralFCF229FD3FDDCC26316DD55763B57CA36D12D076);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_5 = __this->___client_6;
		NullCheck(L_5);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_6;
		L_6 = LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline(L_5, NULL);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = 2;
		G_B1_2 = L_4;
		G_B1_3 = L_4;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = 2;
			G_B2_2 = L_4;
			G_B2_3 = L_4;
			goto IL_002b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0030;
	}

IL_002b:
	{
		NullCheck(G_B2_0);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0030:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = G_B3_3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral54A5FA2EE68A6A691986920E9A7C3D6CAE866AFB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_11 = __this->___client_6;
		NullCheck(L_11);
		TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* L_12;
		L_12 = LoadBalancingClient_get_CurrentLobby_mF4197912E9A2A11BAD29D87BC0FB8BD3F53D44D0_inline(L_11, NULL);
		TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* L_13 = L_12;
		G_B4_0 = L_13;
		G_B4_1 = 4;
		G_B4_2 = L_10;
		G_B4_3 = L_10;
		if (L_13)
		{
			G_B5_0 = L_13;
			G_B5_1 = 4;
			G_B5_2 = L_10;
			G_B5_3 = L_10;
			goto IL_004d;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_0052;
	}

IL_004d:
	{
		NullCheck(G_B5_0);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0052:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = G_B6_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral1834ABC14E732219D297691F3F1A2B47630D43B1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_17 = __this->___client_6;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = LoadBalancingClient_get_GameServerAddress_mA5C7E86447BEEB303C5AB1C932FC9DA907407F01_inline(L_17, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_19, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLeftRoom_m510C8001E5416983156439C7EEE8A4412F876C04 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E2510325BB91639BC80976746CCEC9FE9947D99);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLeftRoom().");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral1E2510325BB91639BC80976746CCEC9FE9947D99, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnDisconnected_mB5C49E9A276CDB10F79A55EEADD13E26C872B60D (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, int32_t ___cause0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975531AFC28B31E2C3F222277BE27AB31AE7D4B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.StopLogStats();
		SupportLogger_StopLogStats_mC018079D538BE027CAE1BE06562EF41064741AB3(__this, NULL);
		// this.StopTrackValues();
		SupportLogger_StopTrackValues_m412943F66C1497EC8FEB2FAECDAC09883941FC38(__this, NULL);
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnDisconnected(" + cause + ").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		Il2CppFakeBox<int32_t> L_1(DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var, (&___cause0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_0, _stringLiteral975531AFC28B31E2C3F222277BE27AB31AE7D4B6, L_2, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// this.LogBasics();
		SupportLogger_LogBasics_mCA2B0EB1C33461698C1F0DC865A3189394B46CFB(__this, NULL);
		// this.LogStats();
		SupportLogger_LogStats_m72117C40251F6016E6C2ADD79DD5F23B69A88AD4(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRegionListReceived(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRegionListReceived_m749E7FB1F17547A4554CAC14202987D3D44B6012 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___regionHandler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4790BF76CC94ADC0486FBF64F752246D60263C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRegionListReceived(regionHandler).");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteralD4790BF76CC94ADC0486FBF64F752246D60263C5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRoomListUpdate(System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRoomListUpdate_m450F482954D0552A1A485B3D9EDF04CE6504A0B7 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* ___roomList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD1A2E394D4FC47B9092FE11D1E27BC1AED671721_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAE93AA613D9CE34751185FB80DED40E346E9444);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRoomListUpdate(roomList). roomList.Count: " + roomList.Count);
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* L_1 = ___roomList0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mD1A2E394D4FC47B9092FE11D1E27BC1AED671721_inline(L_1, List_1_get_Count_mD1A2E394D4FC47B9092FE11D1E27BC1AED671721_RuntimeMethod_var);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteralDAE93AA613D9CE34751185FB80DED40E346E9444, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerEnteredRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerEnteredRoom_m3A95539841186E4BE507E8669FED27A80451BB44 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___newPlayer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C67743CDBE53FB079609F78DCB88B3481C5E480);
		s_Il2CppMethodInitialized = true;
	}
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerEnteredRoom(" + newPlayer+").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_1 = ___newPlayer0;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral5C67743CDBE53FB079609F78DCB88B3481C5E480;
		G_B1_2 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral5C67743CDBE53FB079609F78DCB88B3481C5E480;
			G_B2_2 = L_0;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0018;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0018:
	{
		String_t* L_4;
		L_4 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B3_2, G_B3_1, G_B3_0, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerLeftRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerLeftRoom_mB553DDBB74D41C43C9CE7FC442661BEC407C9C01 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___otherPlayer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7055E349A166CE4A3570F4C7C1A34114B0CEBF90);
		s_Il2CppMethodInitialized = true;
	}
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerLeftRoom(" + otherPlayer+").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_1 = ___otherPlayer0;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral7055E349A166CE4A3570F4C7C1A34114B0CEBF90;
		G_B1_2 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral7055E349A166CE4A3570F4C7C1A34114B0CEBF90;
			G_B2_2 = L_0;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0018;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0018:
	{
		String_t* L_4;
		L_4 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B3_2, G_B3_1, G_B3_0, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRoomPropertiesUpdate_mEEF8238140F87680A9160C4FCDF6B829DE871F47 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___propertiesThatChanged0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral293EEA1FC571998DF9F8F43C7C67DEE8ADA92F9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRoomPropertiesUpdate(propertiesThatChanged).");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral293EEA1FC571998DF9F8F43C7C67DEE8ADA92F9C, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerPropertiesUpdate(Photon.Realtime.Player,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerPropertiesUpdate_mB570E44B70302BF3E549AD45FBD3128942D75E0D (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___targetPlayer0, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___changedProps1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral677B5ACFFA9821CA29C5B6329DD4778CE1AC133B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerPropertiesUpdate(targetPlayer,changedProps).");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral677B5ACFFA9821CA29C5B6329DD4778CE1AC133B, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnMasterClientSwitched(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnMasterClientSwitched_m65A6694B44A97EE48571F343E61EAC73447FD5DA (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___newMasterClient0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD892ABAE7A60B21A969B33CD88235B1C22DC99A);
		s_Il2CppMethodInitialized = true;
	}
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnMasterClientSwitched(" + newMasterClient+").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_1 = ___newMasterClient0;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteralAD892ABAE7A60B21A969B33CD88235B1C22DC99A;
		G_B1_2 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteralAD892ABAE7A60B21A969B33CD88235B1C22DC99A;
			G_B2_2 = L_0;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0018;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0018:
	{
		String_t* L_4;
		L_4 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B3_2, G_B3_1, G_B3_0, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCustomAuthenticationResponse_m411540477C7F20D1FDDD57B7D81DC7107142D534 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9692BF3609B3FA99897E14252C1A031B33C30B4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCustomAuthenticationResponse(" + data.ToStringFull()+").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___data0;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Extensions_ToStringFull_m7D8AFCB5DE3085C237E3DE4D43209F74C60198C4(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_0, _stringLiteral9692BF3609B3FA99897E14252C1A031B33C30B4C, L_2, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCustomAuthenticationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCustomAuthenticationFailed_m3B4F972D2BEF59F3207E71CCE40C16FBA13B1C79 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, String_t* ___debugMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2B8CF328F46C5FE3BCBA0EAD12CCBFAF5CE1356);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCustomAuthenticationFailed(" + debugMessage+").");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1 = ___debugMessage0;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_0, _stringLiteralE2B8CF328F46C5FE3BCBA0EAD12CCBFAF5CE1356, L_1, _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLobbyStatisticsUpdate(System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLobbyStatisticsUpdate_mB378AC02004C2294D98752EC70F7154AA57011BE (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___lobbyStatistics0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B24932FF933699B3A82EAC56B23A2606464B1D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLobbyStatisticsUpdate(lobbyStatistics).");
		String_t* L_0;
		L_0 = SupportLogger_GetFormattedTimestamp_m1E89673110FE0C56E645F27798C394EAE3CC393C(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral3B24932FF933699B3A82EAC56B23A2606464B1D8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnErrorInfo(Photon.Realtime.ErrorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnErrorInfo_m7EFA6DF6FFFE77118BC704CCBE06CDD4A3791A23 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, ErrorInfo_tBEC0163224E8E559901B5BA6D2DDDC2B15D013ED* ___errorInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(errorInfo.ToString());
		ErrorInfo_tBEC0163224E8E559901B5BA6D2DDDC2B15D013ED* L_0 = ___errorInfo0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger__ctor_mA19F932C333F278D7038BA82B5A8731E6D3BC5B5 (SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* __this, const RuntimeMethod* method) 
{
	{
		// public bool LogTrafficStats = true;
		__this->___LogTrafficStats_4 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String Photon.Realtime.WebRpcResponse::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_m07F774596848E8D7638725CCDDD315B2306E5DE7 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_m095D12565064B14410FEE63E6C05DC546774A86D (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ResultCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_m54C63D7CA0AB1521398A01C8C720D581F65564CC (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = __this->___U3CResultCodeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_ResultCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_mD491E392728861EB290022B46D419B4E49364191 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CResultCodeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ReturnCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ReturnCode_m2EEE670416B48444A60183E752B166C7F5B8FE9E (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	{
		// get { return ResultCode; }
		int32_t L_0;
		L_0 = WebRpcResponse_get_ResultCode_m54C63D7CA0AB1521398A01C8C720D581F65564CC_inline(__this, NULL);
		return L_0;
	}
}
// System.String Photon.Realtime.WebRpcResponse::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_m1A6458393A9B1F01BAD460ADF1F01AAEBBD429C7 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_mE9A48AB2D1C8F35A86267E697309DDDDB4BD546A (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Photon.Realtime.WebRpcResponse::get_DebugMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_DebugMessage_m5D49E7BEE42617B1CE92CDA2731A234853770EB1 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	{
		// get { return Message; }
		String_t* L_0;
		L_0 = WebRpcResponse_get_Message_m1A6458393A9B1F01BAD460ADF1F01AAEBBD429C7_inline(__this, NULL);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* WebRpcResponse_get_Parameters_m6F3D0C2BE5C482898AF11A1872B4B2F4B628BC56 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CParametersU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mDB355FB4F2969B1F8E482DD930F5F7B9508E2133 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::.ctor(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse__ctor_mE668F820EB3B8CF1E65495CC490285A9585EF011 (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// public WebRpcResponse(OperationResponse response)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (response.Parameters.TryGetValue(ParameterCode.UriPath, out value))
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_0 = ___response0;
		NullCheck(L_0);
		ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* L_1 = L_0->___Parameters_3;
		NullCheck(L_1);
		bool L_2;
		L_2 = ParameterDictionary_TryGetValue_mBA556F2681C5F8AAE5058D98EDECAD8AEE154EA5(L_1, (uint8_t)((int32_t)209), (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// this.Name = value as string;
		RuntimeObject* L_3 = V_0;
		WebRpcResponse_set_Name_m095D12565064B14410FEE63E6C05DC546774A86D_inline(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)), NULL);
	}

IL_0026:
	{
		// this.ResultCode = -1;
		WebRpcResponse_set_ResultCode_mD491E392728861EB290022B46D419B4E49364191_inline(__this, (-1), NULL);
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcReturnCode, out value))
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_4 = ___response0;
		NullCheck(L_4);
		ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* L_5 = L_4->___Parameters_3;
		NullCheck(L_5);
		bool L_6;
		L_6 = ParameterDictionary_TryGetValue_mBA556F2681C5F8AAE5058D98EDECAD8AEE154EA5(L_5, (uint8_t)((int32_t)207), (&V_0), NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		// this.ResultCode = (byte)value;
		RuntimeObject* L_7 = V_0;
		WebRpcResponse_set_ResultCode_mD491E392728861EB290022B46D419B4E49364191_inline(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_7, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))), NULL);
	}

IL_004d:
	{
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcParameters, out value))
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_8 = ___response0;
		NullCheck(L_8);
		ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* L_9 = L_8->___Parameters_3;
		NullCheck(L_9);
		bool L_10;
		L_10 = ParameterDictionary_TryGetValue_mBA556F2681C5F8AAE5058D98EDECAD8AEE154EA5(L_9, (uint8_t)((int32_t)208), (&V_0), NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		// this.Parameters = value as Dictionary<string, object>;
		RuntimeObject* L_11 = V_0;
		WebRpcResponse_set_Parameters_mDB355FB4F2969B1F8E482DD930F5F7B9508E2133_inline(__this, ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)IsInstClass((RuntimeObject*)L_11, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var)), NULL);
	}

IL_006d:
	{
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcReturnMessage, out value))
		OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* L_12 = ___response0;
		NullCheck(L_12);
		ParameterDictionary_t86A1C953B1E7C11059D12BAAE61E0021124E08F3* L_13 = L_12->___Parameters_3;
		NullCheck(L_13);
		bool L_14;
		L_14 = ParameterDictionary_TryGetValue_mBA556F2681C5F8AAE5058D98EDECAD8AEE154EA5(L_13, (uint8_t)((int32_t)206), (&V_0), NULL);
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		// this.Message = value as string;
		RuntimeObject* L_15 = V_0;
		WebRpcResponse_set_Message_mE9A48AB2D1C8F35A86267E697309DDDDB4BD546A_inline(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_15, String_t_il2cpp_TypeInfo_var)), NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.String Photon.Realtime.WebRpcResponse::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_ToStringFull_m1CC511E903013C9938A0B8ACC099CCDEBDF9DD1B (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral111D994A41187DCF854E2098345172E28925CD36);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0}={2}: {1} \"{3}\"", this.Name, SupportClass.DictionaryToString(this.Parameters), this.ResultCode, this.Message);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2;
		L_2 = WebRpcResponse_get_Name_m07F774596848E8D7638725CCDDD315B2306E5DE7_inline(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4;
		L_4 = WebRpcResponse_get_Parameters_m6F3D0C2BE5C482898AF11A1872B4B2F4B628BC56_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = SupportClass_DictionaryToString_m0645B43282EC5801A48D62AB3D4008DC43FB756E(L_4, (bool)1, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_3;
		int32_t L_7;
		L_7 = WebRpcResponse_get_ResultCode_m54C63D7CA0AB1521398A01C8C720D581F65564CC_inline(__this, NULL);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_6;
		String_t* L_11;
		L_11 = WebRpcResponse_get_Message_m1A6458393A9B1F01BAD460ADF1F01AAEBBD429C7_inline(__this, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		String_t* L_12;
		L_12 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral111D994A41187DCF854E2098345172E28925CD36, L_10, NULL);
		return L_12;
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
// System.Boolean Photon.Realtime.WebFlags::get_HttpForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_HttpForward_mE953246AA2C870572F2E41210166F3DB34983801 (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* __this, const RuntimeMethod* method) 
{
	{
		// get { return (WebhookFlags & HttpForwardConst) != 0; }
		uint8_t L_0 = __this->___WebhookFlags_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::set_HttpForward(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_HttpForward_m18B85704D21B7825FAFE6A5316D65018470CAC30 (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WebhookFlags |= HttpForwardConst;
		uint8_t L_1 = __this->___WebhookFlags_1;
		__this->___WebhookFlags_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_1|1)));
		return;
	}

IL_0013:
	{
		// WebhookFlags = (byte) (WebhookFlags & ~(1 << 0));
		uint8_t L_2 = __this->___WebhookFlags_1;
		__this->___WebhookFlags_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_2&((int32_t)-2))));
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendAuthCookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendAuthCookie_m43F91CFDF424BA5EE3B41BBCEDB3D1EDF6E562B0 (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* __this, const RuntimeMethod* method) 
{
	{
		// get { return (WebhookFlags & SendAuthCookieConst) != 0; }
		uint8_t L_0 = __this->___WebhookFlags_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendAuthCookie(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendAuthCookie_m9DBE9E489797E247B6A1B7C1A6E862A4DAA98004 (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WebhookFlags |= SendAuthCookieConst;
		uint8_t L_1 = __this->___WebhookFlags_1;
		__this->___WebhookFlags_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_1|2)));
		return;
	}

IL_0013:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 1));
		uint8_t L_2 = __this->___WebhookFlags_1;
		__this->___WebhookFlags_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_2&((int32_t)-3))));
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendSync_mB1BACDAF30FE2E24A2E9B18487978B1159440999 (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* __this, const RuntimeMethod* method) 
{
	{
		// get { return (WebhookFlags & SendSyncConst) != 0; }
		uint8_t L_0 = __this->___WebhookFlags_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendSync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendSync_m26579A7EFBBA5BCB2A8F8CC52F8B48BB8B5D555E (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WebhookFlags |= SendSyncConst;
		uint8_t L_1 = __this->___WebhookFlags_1;
		__this->___WebhookFlags_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_1|4)));
		return;
	}

IL_0013:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 2));
		uint8_t L_2 = __this->___WebhookFlags_1;
		__this->___WebhookFlags_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_2&((int32_t)-5))));
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendState_m08F847D12B3D509777F39905749DCAE90F3BE5F3 (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* __this, const RuntimeMethod* method) 
{
	{
		// get { return (WebhookFlags & SendStateConst) != 0; }
		uint8_t L_0 = __this->___WebhookFlags_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&8))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendState_mE7C650F6C66533E66D323EA8538720BE83F67E21 (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WebhookFlags |= SendStateConst;
		uint8_t L_1 = __this->___WebhookFlags_1;
		__this->___WebhookFlags_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_1|8)));
		return;
	}

IL_0013:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 3));
		uint8_t L_2 = __this->___WebhookFlags_1;
		__this->___WebhookFlags_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_2&((int32_t)-9))));
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebFlags::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__ctor_mB6C7632B44C70579815DEF054DB5D61D5D1AD06D (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* __this, uint8_t ___webhookFlags0, const RuntimeMethod* method) 
{
	{
		// public WebFlags(byte webhookFlags)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// WebhookFlags = webhookFlags;
		uint8_t L_0 = ___webhookFlags0;
		__this->___WebhookFlags_1 = L_0;
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebFlags::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__cctor_m6D0971E6B8627026E0C8195C2ED0C7C44C16258B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly static WebFlags Default = new WebFlags(0);
		WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* L_0 = (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)il2cpp_codegen_object_new(WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WebFlags__ctor_mB6C7632B44C70579815DEF054DB5D61D5D1AD06D(L_0, (uint8_t)0, NULL);
		((WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_StaticFields*)il2cpp_codegen_static_fields_for(WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_StaticFields*)il2cpp_codegen_static_fields_for(WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_mAB935BEF1DAE8C99C0051D85426956E689A939EF_inline (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	{
		// return this.name;
		String_t* L_0 = __this->___name_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m021CCF31A290BEADD0EECF2F3265D7D0BF2DD029_inline (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = __this->___U3CPlayerCountU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_m60E2655747392B753F507AF760FD5F1CE2C25B02_inline (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CPlayerCountU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* LoadBalancingClient_get_LoadBalancingPeer_mF3097AB6F64148B7BF7B1AEFA7FB37DE30AC30C5_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public LoadBalancingPeer LoadBalancingPeer { get; private set; }
		LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* L_0 = __this->___U3CLoadBalancingPeerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// return this.state;
		int32_t L_0 = __this->___state_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppId_mC1D36AE3AFE5FB808FF7CA10785002F65E500D5C_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public string AppId { get; set; }
		String_t* L_0 = __this->___U3CAppIdU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_mA2E5DE4671D1C7BD67296921DBD776E61F63E388_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public string AppVersion { get; set; }
		String_t* L_0 = __this->___U3CAppVersionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* PhotonPeer_get_SocketImplementation_mE28201437EE67C611F6330E4D18AF46C9CFFC628_inline (PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CSocketImplementationU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_0 = __this->___U3CAuthValuesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_m0B745D57BFF19DFFD283825D461C0417024AAC79_inline (AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* __this, const RuntimeMethod* method) 
{
	{
		// get { return authType; }
		uint8_t L_0 = __this->___authType_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CloudRegion_m0093F59A916A2AC5BB01A653D31ED2A45C9421F0_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public string CloudRegion { get; private set; }
		String_t* L_0 = __this->___U3CCloudRegionU3Ek__BackingField_42;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* LoadBalancingClient_get_CurrentLobby_mF4197912E9A2A11BAD29D87BC0FB8BD3F53D44D0_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public TypedLobby CurrentLobby { get; internal set; }
		TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* L_0 = __this->___U3CCurrentLobbyU3Ek__BackingField_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public Room CurrentRoom { get; set; }
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0 = __this->___U3CCurrentRoomU3Ek__BackingField_33;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_GameServerAddress_mA5C7E86447BEEB303C5AB1C932FC9DA907407F01_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public string GameServerAddress { get; protected internal set; }
		String_t* L_0 = __this->___U3CGameServerAddressU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_m54C63D7CA0AB1521398A01C8C720D581F65564CC_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = __this->___U3CResultCodeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_m1A6458393A9B1F01BAD460ADF1F01AAEBBD429C7_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_m095D12565064B14410FEE63E6C05DC546774A86D_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_mD491E392728861EB290022B46D419B4E49364191_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CResultCodeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mDB355FB4F2969B1F8E482DD930F5F7B9508E2133_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_mE9A48AB2D1C8F35A86267E697309DDDDB4BD546A_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_m07F774596848E8D7638725CCDDD315B2306E5DE7_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* WebRpcResponse_get_Parameters_m6F3D0C2BE5C482898AF11A1872B4B2F4B628BC56_inline (WebRpcResponse_t92374B2534ECA2634864478A535F46FB98AE2FC7* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CParametersU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
