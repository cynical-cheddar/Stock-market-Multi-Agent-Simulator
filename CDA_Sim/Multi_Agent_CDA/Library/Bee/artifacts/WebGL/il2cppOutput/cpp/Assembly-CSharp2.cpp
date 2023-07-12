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

// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2;
// System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct Action_2_tFA12D1ED57DFFBB4A246CECC16F8F9387FE254AA;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<UnityEngine.Camera>
struct Func_1_t2CF654106B924961EA2A880955474BC6DC4577B9;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7;
// System.Func`1<System.String>
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C;
// System.Func`1<UnityEngine.Vector3>
struct Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC;
// System.Collections.Generic.List`1<CodeMonkey.Utils.FunctionUpdater>
struct List_1_t1A3A70887752BAE7FD74CAA12CE68472C33F3C35;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// CodeMonkey.Assets
struct Assets_t094110F45CF338D6C1309600CBB41ADFEE6D9BD8;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// CodeMonkey.Utils.Button_Sprite
struct Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CodeMonkey.MonoBehaviours.CameraFollow
struct CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6;
// CodeMonkey.MonoBehaviours.CameraFollowSetup
struct CameraFollowSetup_tD16A601426BB7376FE01E38DF536BF39FEF83D2C;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// CodeMonkey.MonoBehaviours.ComponentActions
struct ComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// CodeMonkey.Utils.FunctionUpdater
struct FunctionUpdater_t44993A7A7DF63EF8B70891E703E1BDDEE287F569;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// CodeMonkey.MonoBehaviours.PositionRendererSorter
struct PositionRendererSorter_t8E87C9B65BC3D7DB3445ABAF438941A5E5D2814F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// CodeMonkey.Utils.World_Bar
struct World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A;
// CodeMonkey.Utils.World_Mesh
struct World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C;
// CodeMonkey.Utils.World_Sprite
struct World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tFC1AA57A2DB531FD164D68264E1070E3890041EB;
// CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t18A554DDD4B7C5BF9AA26772A2FFAC611BC643ED;
// CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c
struct U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t8A0DC045174B2FB8DF01B6DCD85478CAA2730BEE;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t336C406746EA93FD8AD3CEB21B5BE4B9F19261D7;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_tFC042FBE61ABB029175D55BFB0D495530BE5E968;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_t498A351F3676E92DF04C0560FF75ECC5E06E436C;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0
struct U3CU3Ec__DisplayClass64_0_t661C83156D9DE8F1253BBB5EF28FEA5A70643079;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass66_0
struct U3CU3Ec__DisplayClass66_0_tA4B7431CF7DC810CC93A2BD1874E56A097DA836C;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass67_0
struct U3CU3Ec__DisplayClass67_0_t409BE063341AF721522BA24215EB0A420328878D;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass76_0
struct U3CU3Ec__DisplayClass76_0_tF1CD4E63407214066C3150FC7636B17E5BC35194;
// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass77_0
struct U3CU3Ec__DisplayClass77_0_t08DC281E39C88D193F7CFDF40876CBFCE65482F7;
// CodeMonkey.Utils.UtilsClass/JsonDictionary
struct JsonDictionary_tC4C44E6F286EFC024CDB8E0AD8D3902D5F62965F;
// CodeMonkey.Utils.World_Bar/Outline
struct Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B;
// CodeMonkey.Utils.World_Mesh/UVCoords
struct UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD;
// CodeMonkey.Utils.World_Sprite/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t37A8552E8C464CCB67C8D89370738DE9A2F2159D;
// CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_tFC1AA57A2DB531FD164D68264E1070E3890041EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass29_0_t37A8552E8C464CCB67C8D89370738DE9A2F2159D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t18A554DDD4B7C5BF9AA26772A2FFAC611BC643ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral13B9773C2140C186263B529EB24883DE5B8E082F;
IL2CPP_EXTERN_C String_t* _stringLiteral44CD722B4028D3450F72C53073EF1F6D00D23E81;
IL2CPP_EXTERN_C String_t* _stringLiteral44D700698DE33F580439BBCA0F2168D827EBDCAA;
IL2CPP_EXTERN_C String_t* _stringLiteral5230F5FD1E0998B73530AA850D3A5872D61228EC;
IL2CPP_EXTERN_C String_t* _stringLiteral5906716E1732EB2F39FE489540108B6709839225;
IL2CPP_EXTERN_C String_t* _stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821;
IL2CPP_EXTERN_C String_t* _stringLiteral75DD2D44571F44B6F1140AB52193761B47728B9B;
IL2CPP_EXTERN_C String_t* _stringLiteral776519977A9F05FE57A1440956337C6C719069EF;
IL2CPP_EXTERN_C String_t* _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8;
IL2CPP_EXTERN_C String_t* _stringLiteral9FE2AA3A701649CC43A2E9341CC61243714522AC;
IL2CPP_EXTERN_C String_t* _stringLiteralF6A3463C3F0A237C6D59BD191E963BE8C8E0E6D3;
IL2CPP_EXTERN_C const RuntimeMethod* CameraFollowSetup_U3CStartU3Eb__3_1_mED77FC11FCCAB18D49B3E928E594749D7CA3C222_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraFollowSetup_U3CStartU3Eb__3_2_m540829BF425ED218A730F8CC200E4F7ABCF22564_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraFollowSetup_U3CStartU3Eb__3_3_m890A7ABAABD252271F467D59FDA0B894B313BC05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m269F530A27F1496AA2C27915AA02DBC4BDF0EB69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisButton_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD_m6734F4E98F0078DF42223478E9710D0B0F095697_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC_mC01A638D53B1EBFFBB4B4A46A936B4BC6A4B34AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionTools_CallMethod_m330843A957BECF6FAD702C31C50F319BC88B51DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionTools_GetField_mC27F7FA14B0C1954DE7D3E959ADB4388F34F6E00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionTools_GetNestedType_m7472EA4A4F22B464B5B516F7EA81C5A95F5002CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__3_0_mD29057CA38208214222E1A510D845B751315D96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CSetCameraZoomU3Eb__0_mA396A71F49D6FA46C3104430D38B9F8ABED32FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass29_0_U3CSetPositionU3Eb__0_mD5788978D46B8970D0E8ACFAEFDEB60A45DC6965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CCreateDebugButtonU3Eb__0_m455726DA61D303C270E2610F4469A68B57729E39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CCreateDebugButtonU3Eb__1_mE1B128289EA32AC1D20DFBF95EE86C1323993111_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CSetCameraFollowPositionU3Eb__0_mB1A79B436835B6AE582AEBF7B6003708E0A1B562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* World_Mesh_ApplyUVToUVArray_mD8B0F0CE9C13E8476CCDF4D0D60111756D6138EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
struct Il2CppArrayBounds;

// CodeMonkey.Utils.FunctionUpdater
struct FunctionUpdater_t44993A7A7DF63EF8B70891E703E1BDDEE287F569  : public RuntimeObject
{
	// UnityEngine.GameObject CodeMonkey.Utils.FunctionUpdater::gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_2;
	// System.String CodeMonkey.Utils.FunctionUpdater::functionName
	String_t* ___functionName_3;
	// System.Boolean CodeMonkey.Utils.FunctionUpdater::active
	bool ___active_4;
	// System.Func`1<System.Boolean> CodeMonkey.Utils.FunctionUpdater::updateFunc
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___updateFunc_5;
};

struct FunctionUpdater_t44993A7A7DF63EF8B70891E703E1BDDEE287F569_StaticFields
{
	// System.Collections.Generic.List`1<CodeMonkey.Utils.FunctionUpdater> CodeMonkey.Utils.FunctionUpdater::updaterList
	List_1_t1A3A70887752BAE7FD74CAA12CE68472C33F3C35* ___updaterList_0;
	// UnityEngine.GameObject CodeMonkey.Utils.FunctionUpdater::initGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___initGameObject_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// CodeMonkey.Utils.World_Bar
struct World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A  : public RuntimeObject
{
	// CodeMonkey.Utils.World_Bar/Outline CodeMonkey.Utils.World_Bar::outline
	Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* ___outline_0;
	// UnityEngine.GameObject CodeMonkey.Utils.World_Bar::gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_1;
	// UnityEngine.Transform CodeMonkey.Utils.World_Bar::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_2;
	// UnityEngine.Transform CodeMonkey.Utils.World_Bar::background
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___background_3;
	// UnityEngine.Transform CodeMonkey.Utils.World_Bar::bar
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bar_4;
};

// CodeMonkey.Utils.World_Mesh
struct World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C  : public RuntimeObject
{
	// UnityEngine.GameObject CodeMonkey.Utils.World_Mesh::gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_1;
	// UnityEngine.Transform CodeMonkey.Utils.World_Mesh::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_2;
	// UnityEngine.Material CodeMonkey.Utils.World_Mesh::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// UnityEngine.Vector3[] CodeMonkey.Utils.World_Mesh::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_4;
	// UnityEngine.Vector2[] CodeMonkey.Utils.World_Mesh::uv
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uv_5;
	// System.Int32[] CodeMonkey.Utils.World_Mesh::triangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles_6;
	// UnityEngine.Mesh CodeMonkey.Utils.World_Mesh::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_7;
};

// CodeMonkey.Utils.World_Sprite
struct World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C  : public RuntimeObject
{
	// UnityEngine.GameObject CodeMonkey.Utils.World_Sprite::gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_1;
	// UnityEngine.Transform CodeMonkey.Utils.World_Sprite::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_2;
	// UnityEngine.SpriteRenderer CodeMonkey.Utils.World_Sprite::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_3;
};

// CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tFC1AA57A2DB531FD164D68264E1070E3890041EB  : public RuntimeObject
{
	// System.Single CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass11_0::cameraZoom
	float ___cameraZoom_0;
};

// CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c
struct U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83  : public RuntimeObject
{
};

struct U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_StaticFields
{
	// CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c::<>9
	U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83* ___U3CU3E9_0;
	// System.Func`1<UnityEngine.Vector3> CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c::<>9__3_0
	Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* ___U3CU3E9__3_0_1;
};

// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t8A0DC045174B2FB8DF01B6DCD85478CAA2730BEE  : public RuntimeObject
{
	// UnityEngine.TextMesh CodeMonkey.Utils.UtilsClass/<>c__DisplayClass12_0::textMesh
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___textMesh_0;
	// System.Func`1<System.String> CodeMonkey.Utils.UtilsClass/<>c__DisplayClass12_0::GetTextFunc
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___GetTextFunc_1;
};

// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_tFC042FBE61ABB029175D55BFB0D495530BE5E968  : public RuntimeObject
{
	// UnityEngine.UI.Text CodeMonkey.Utils.UtilsClass/<>c__DisplayClass17_0::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_0;
	// System.Func`1<System.String> CodeMonkey.Utils.UtilsClass/<>c__DisplayClass17_0::GetTextFunc
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___GetTextFunc_1;
};

// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_t498A351F3676E92DF04C0560FF75ECC5E06E436C  : public RuntimeObject
{
	// System.Int32 CodeMonkey.Utils.UtilsClass/<>c__DisplayClass62_0::mouseButton
	int32_t ___mouseButton_0;
	// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass62_0::dragging
	bool ___dragging_1;
	// System.Action`1<UnityEngine.Vector3> CodeMonkey.Utils.UtilsClass/<>c__DisplayClass62_0::onMouseDragging
	Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___onMouseDragging_2;
};

// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass66_0
struct U3CU3Ec__DisplayClass66_0_tA4B7431CF7DC810CC93A2BD1874E56A097DA836C  : public RuntimeObject
{
	// System.Int32 CodeMonkey.Utils.UtilsClass/<>c__DisplayClass66_0::mouseButton
	int32_t ___mouseButton_0;
	// System.Action`1<UnityEngine.Vector3> CodeMonkey.Utils.UtilsClass/<>c__DisplayClass66_0::onMouseClick
	Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___onMouseClick_1;
};

// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass67_0
struct U3CU3Ec__DisplayClass67_0_t409BE063341AF721522BA24215EB0A420328878D  : public RuntimeObject
{
	// UnityEngine.KeyCode CodeMonkey.Utils.UtilsClass/<>c__DisplayClass67_0::keyCode
	int32_t ___keyCode_0;
	// System.Action CodeMonkey.Utils.UtilsClass/<>c__DisplayClass67_0::onKeyDown
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onKeyDown_1;
};

// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass77_0
struct U3CU3Ec__DisplayClass77_0_t08DC281E39C88D193F7CFDF40876CBFCE65482F7  : public RuntimeObject
{
	// System.Action CodeMonkey.Utils.UtilsClass/<>c__DisplayClass77_0::action
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action_0;
};

// CodeMonkey.Utils.UtilsClass/JsonDictionary
struct JsonDictionary_tC4C44E6F286EFC024CDB8E0AD8D3902D5F62965F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> CodeMonkey.Utils.UtilsClass/JsonDictionary::keyList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___keyList_0;
	// System.Collections.Generic.List`1<System.String> CodeMonkey.Utils.UtilsClass/JsonDictionary::valueList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___valueList_1;
};

// CodeMonkey.Utils.UtilsClass/ReflectionTools
struct ReflectionTools_tCCF3C0C0EF94443D2A67B55FB74E2EE9BAE3366F  : public RuntimeObject
{
};

// CodeMonkey.Utils.World_Mesh/UVCoords
struct UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD  : public RuntimeObject
{
	// System.Int32 CodeMonkey.Utils.World_Mesh/UVCoords::x
	int32_t ___x_0;
	// System.Int32 CodeMonkey.Utils.World_Mesh/UVCoords::y
	int32_t ___y_1;
	// System.Int32 CodeMonkey.Utils.World_Mesh/UVCoords::width
	int32_t ___width_2;
	// System.Int32 CodeMonkey.Utils.World_Mesh/UVCoords::height
	int32_t ___height_3;
};

// CodeMonkey.Utils.World_Sprite/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t37A8552E8C464CCB67C8D89370738DE9A2F2159D  : public RuntimeObject
{
	// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite/<>c__DisplayClass29_0::<>4__this
	World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* ___U3CU3E4__this_0;
	// System.Func`1<UnityEngine.Vector3> CodeMonkey.Utils.World_Sprite/<>c__DisplayClass29_0::getLocalPosition
	Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* ___getLocalPosition_1;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=104
struct __StaticArrayInitTypeSizeU3D104_t3C615058D18207BCD05EAD3C074C4E9E55918552 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D104_t3C615058D18207BCD05EAD3C074C4E9E55918552__padding[104];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112
struct __StaticArrayInitTypeSizeU3D112_t338F22B6F3CC67FDBAE2DB73218458D355AA2089 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_t338F22B6F3CC67FDBAE2DB73218458D355AA2089__padding[112];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_tCE5F35B252DE449EDE2BA38EFA855ABFBF94EF89 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tCE5F35B252DE449EDE2BA38EFA855ABFBF94EF89__padding[120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=136
struct __StaticArrayInitTypeSizeU3D136_tAB97FFB09E2A7C2C3EA62D34A254F3DB60076476 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D136_tAB97FFB09E2A7C2C3EA62D34A254F3DB60076476__padding[136];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160
struct __StaticArrayInitTypeSizeU3D160_tD165EF4F2382E9588D653409FA8C529FD59019A5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D160_tD165EF4F2382E9588D653409FA8C529FD59019A5__padding[160];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3__padding[40];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE__padding[48];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
struct __StaticArrayInitTypeSizeU3D56_tF90903548CF34D92C9F741BD6D3F8DC6C822EF4E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_tF90903548CF34D92C9F741BD6D3F8DC6C822EF4E__padding[56];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88__padding[64];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72
struct __StaticArrayInitTypeSizeU3D72_t7580F73F43F9E8A0AEF16576EFBED059DF855A74 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t7580F73F43F9E8A0AEF16576EFBED059DF855A74__padding[72];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80
struct __StaticArrayInitTypeSizeU3D80_t144B9F4F4C74AB89365AB7716EE83DECD70D210D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D80_t144B9F4F4C74AB89365AB7716EE83DECD70D210D__padding[80];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=88
struct __StaticArrayInitTypeSizeU3D88_t65BF68A956A9F2B6A6A963A48EBFFFB69B60BAEE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D88_t65BF68A956A9F2B6A6A963A48EBFFFB69B60BAEE__padding[88];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_tE962D346DA0011435482BCE5513DB1E0D88A8DEB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_tE962D346DA0011435482BCE5513DB1E0D88A8DEB__padding[96];
	};
};

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::072BD7BA969603469A006277BB52F51E3DE78CE94C84FF5AEC357B8E64643282
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___072BD7BA969603469A006277BB52F51E3DE78CE94C84FF5AEC357B8E64643282_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>::0E09E793A176D1434320D3066BC495A64D4A5C8F333EA37C63FB62FE84AE685D
	__StaticArrayInitTypeSizeU3D112_t338F22B6F3CC67FDBAE2DB73218458D355AA2089 ___0E09E793A176D1434320D3066BC495A64D4A5C8F333EA37C63FB62FE84AE685D_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::1D7BECDB28C6E069F183AA89DFED7823BF46B954E7047902CDC622589B203B79
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___1D7BECDB28C6E069F183AA89DFED7823BF46B954E7047902CDC622589B203B79_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::1DB124B34FA86CC5F78AA0D10877350356BDACFE83B466C719273DB4CA48C190
	__StaticArrayInitTypeSizeU3D56_tF90903548CF34D92C9F741BD6D3F8DC6C822EF4E ___1DB124B34FA86CC5F78AA0D10877350356BDACFE83B466C719273DB4CA48C190_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::24125A866B61741C8D06A7CE36865370BE7652105A0A3043891F4533991B61AD
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___24125A866B61741C8D06A7CE36865370BE7652105A0A3043891F4533991B61AD_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160 <PrivateImplementationDetails>::339B3F09C59254D778C7EBC4F778F5374772A5A9B611A55E8370EE11525603DF
	__StaticArrayInitTypeSizeU3D160_tD165EF4F2382E9588D653409FA8C529FD59019A5 ___339B3F09C59254D778C7EBC4F778F5374772A5A9B611A55E8370EE11525603DF_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::33FAAB3C051BCA7A8AA5CDD6063F0B8AA5245255A2930BE95D41F1D55B2ED200
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___33FAAB3C051BCA7A8AA5CDD6063F0B8AA5245255A2930BE95D41F1D55B2ED200_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::344C387E63BA3254E52D57883793F9D82E1882CBCF2588C96418A7469D5D1B13
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___344C387E63BA3254E52D57883793F9D82E1882CBCF2588C96418A7469D5D1B13_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::38225B8BE7553A8FA6DD274FA3717A801A13AC7392681200793144D79F3FA2A9
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___38225B8BE7553A8FA6DD274FA3717A801A13AC7392681200793144D79F3FA2A9_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::3D6F47FC1702A2EAAC31841E18788FB75B106B958EEF86EFFCEDCBB734A7FDF0
	__StaticArrayInitTypeSizeU3D72_t7580F73F43F9E8A0AEF16576EFBED059DF855A74 ___3D6F47FC1702A2EAAC31841E18788FB75B106B958EEF86EFFCEDCBB734A7FDF0_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::3DFAF23CDCCFD2B37ECEAF9849C72C1A6C90B4DD21D9E94EAC056B711DF09A43
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___3DFAF23CDCCFD2B37ECEAF9849C72C1A6C90B4DD21D9E94EAC056B711DF09A43_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::4A10D405E745CF9ACA55F215CC6B2923B99A6722BFA47EA821C0E6BBA138F993
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___4A10D405E745CF9ACA55F215CC6B2923B99A6722BFA47EA821C0E6BBA138F993_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::4DC1C4297006FB26C2B1F143814D684C8E24118FC0A89376C12D24108D7DC8C6
	__StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 ___4DC1C4297006FB26C2B1F143814D684C8E24118FC0A89376C12D24108D7DC8C6_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::4E29A66F5B51328ADF44B64EB6B7EECFC294B49AC7A0F3E87ADC28743B741C65
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___4E29A66F5B51328ADF44B64EB6B7EECFC294B49AC7A0F3E87ADC28743B741C65_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::4E6D97C0018345D3899B4B66F8BA5784DAB5C11DF46E8B82818B1AC5ED090052
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___4E6D97C0018345D3899B4B66F8BA5784DAB5C11DF46E8B82818B1AC5ED090052_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=104 <PrivateImplementationDetails>::53BA7A9CEF12855CC7555FBE0CC78AA41ED0EDC5DB71C135FF77B9293570AD3A
	__StaticArrayInitTypeSizeU3D104_t3C615058D18207BCD05EAD3C074C4E9E55918552 ___53BA7A9CEF12855CC7555FBE0CC78AA41ED0EDC5DB71C135FF77B9293570AD3A_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::5E34BFFD9D9F84DFF9F1F7BBEFF267747007B5606470B3BABB85DC61819A7B20
	__StaticArrayInitTypeSizeU3D80_t144B9F4F4C74AB89365AB7716EE83DECD70D210D ___5E34BFFD9D9F84DFF9F1F7BBEFF267747007B5606470B3BABB85DC61819A7B20_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::6A79D26BDCB69FED38C66E09F35DE0EF01EC028FB73A95788922DF29F9F2E8EF
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___6A79D26BDCB69FED38C66E09F35DE0EF01EC028FB73A95788922DF29F9F2E8EF_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::6A7B165E95C022A1269CC5C78CEC66B326FF57326B4EC17E073F9B5E6BFC2500
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___6A7B165E95C022A1269CC5C78CEC66B326FF57326B4EC17E073F9B5E6BFC2500_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::6CDA132B11F47B27E03554C5533833A8155DCF2D1A544C96340DB506E156EFA1
	__StaticArrayInitTypeSizeU3D96_tE962D346DA0011435482BCE5513DB1E0D88A8DEB ___6CDA132B11F47B27E03554C5533833A8155DCF2D1A544C96340DB506E156EFA1_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::6F4DECCAED43B4EBD3B14231D3A4883693E5D8E07466BCCF0FF1780A171E356B
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___6F4DECCAED43B4EBD3B14231D3A4883693E5D8E07466BCCF0FF1780A171E356B_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::70E1CAB5ABF16624D1640965FAF3A53CCAE4B65CA7A3837B8C8BDCF4B48E230F
	__StaticArrayInitTypeSizeU3D120_tCE5F35B252DE449EDE2BA38EFA855ABFBF94EF89 ___70E1CAB5ABF16624D1640965FAF3A53CCAE4B65CA7A3837B8C8BDCF4B48E230F_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::7BBFCD1170438B619B05642DCD4B9AD3AB64825D1B523CE4BB10251B944B62CB
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___7BBFCD1170438B619B05642DCD4B9AD3AB64825D1B523CE4BB10251B944B62CB_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=136 <PrivateImplementationDetails>::7DB65B66035879B81D847AF27C56F3607A6682D9324315651E82D35F8264C197
	__StaticArrayInitTypeSizeU3D136_tAB97FFB09E2A7C2C3EA62D34A254F3DB60076476 ___7DB65B66035879B81D847AF27C56F3607A6682D9324315651E82D35F8264C197_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::825C6884DEFCA607DE16DCC11C4FCF658FF242DDC74A0AD3246C74B3AD71461C
	__StaticArrayInitTypeSizeU3D72_t7580F73F43F9E8A0AEF16576EFBED059DF855A74 ___825C6884DEFCA607DE16DCC11C4FCF658FF242DDC74A0AD3246C74B3AD71461C_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>::83DB7401334A03D004FE622C219C1022C960F73A14A502DE8DDFF0923BA56937
	__StaticArrayInitTypeSizeU3D112_t338F22B6F3CC67FDBAE2DB73218458D355AA2089 ___83DB7401334A03D004FE622C219C1022C960F73A14A502DE8DDFF0923BA56937_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::8A0EF6D1737E7C91F8E4275D665C01CE492939B1DF523B2517885B53D8F14866
	__StaticArrayInitTypeSizeU3D96_tE962D346DA0011435482BCE5513DB1E0D88A8DEB ___8A0EF6D1737E7C91F8E4275D665C01CE492939B1DF523B2517885B53D8F14866_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::8CFA291EDA5F9ADDDF3C1E0071DC6BB28626D3D8226321D4EA4902067F458213
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___8CFA291EDA5F9ADDDF3C1E0071DC6BB28626D3D8226321D4EA4902067F458213_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=88 <PrivateImplementationDetails>::8FEF575BA3491FFE166A04E3DA75AC05C7AA8B7C74608D20F8BB19C62C1C8FDC
	__StaticArrayInitTypeSizeU3D88_t65BF68A956A9F2B6A6A963A48EBFFFB69B60BAEE ___8FEF575BA3491FFE166A04E3DA75AC05C7AA8B7C74608D20F8BB19C62C1C8FDC_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::9A22C5B4315EA696F0736600083E2E5ACA251BD37C430EF4C61E2444EED0816E
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___9A22C5B4315EA696F0736600083E2E5ACA251BD37C430EF4C61E2444EED0816E_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::9B3E9D7CBB2CCB096FBDCC845D2393AE99B03776471039CFD7CB61B734F22508
	__StaticArrayInitTypeSizeU3D80_t144B9F4F4C74AB89365AB7716EE83DECD70D210D ___9B3E9D7CBB2CCB096FBDCC845D2393AE99B03776471039CFD7CB61B734F22508_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>::A3EA209FCAB4576F1BCE9457A1B18CF394F1808EFDC4CDD7CC680CF1EE1A2100
	__StaticArrayInitTypeSizeU3D112_t338F22B6F3CC67FDBAE2DB73218458D355AA2089 ___A3EA209FCAB4576F1BCE9457A1B18CF394F1808EFDC4CDD7CC680CF1EE1A2100_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::B2C2A0F77013E93B46DE6BD00CFC3761724A46A556DC337BE78C2BE37B5F51FC
	__StaticArrayInitTypeSizeU3D72_t7580F73F43F9E8A0AEF16576EFBED059DF855A74 ___B2C2A0F77013E93B46DE6BD00CFC3761724A46A556DC337BE78C2BE37B5F51FC_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B3CD1EE37A82B8B5EB1C9F1BA4AF3388DF8816EEDF268D5A6B761B5CBFB45C88
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___B3CD1EE37A82B8B5EB1C9F1BA4AF3388DF8816EEDF268D5A6B761B5CBFB45C88_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::B4598DA230551AABB4FAA40623BE8675D11027F8301E10D51347E4F1969C85B3
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___B4598DA230551AABB4FAA40623BE8675D11027F8301E10D51347E4F1969C85B3_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::B5C82C1D3DB365381EEBAAAA5D786A5F9E26DC01D167BFE7503E317EA1540F3A
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___B5C82C1D3DB365381EEBAAAA5D786A5F9E26DC01D167BFE7503E317EA1540F3A_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::B9CC1459B08173F3669C003D36CF9B97498F2D3A435F945669F0EAEEF196EDE4
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___B9CC1459B08173F3669C003D36CF9B97498F2D3A435F945669F0EAEEF196EDE4_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=136 <PrivateImplementationDetails>::BEFDF88D134685D3E78E44DF5796F233697B5CD65353334CE2206729AA679223
	__StaticArrayInitTypeSizeU3D136_tAB97FFB09E2A7C2C3EA62D34A254F3DB60076476 ___BEFDF88D134685D3E78E44DF5796F233697B5CD65353334CE2206729AA679223_37;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::C8706C59734323BC2A4512D2965D0175421F2CE18F943767A971E0C3817FFC7A
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___C8706C59734323BC2A4512D2965D0175421F2CE18F943767A971E0C3817FFC7A_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::D1055ACBFFB1C05C322D075C154972843A705C7159980A9FFE94FCE7C464E005
	__StaticArrayInitTypeSizeU3D80_t144B9F4F4C74AB89365AB7716EE83DECD70D210D ___D1055ACBFFB1C05C322D075C154972843A705C7159980A9FFE94FCE7C464E005_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::D260F4EECEAED3A19BDC4A9308EFB7AC2067BCC587681B0289A2CF4F477F5FE4
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___D260F4EECEAED3A19BDC4A9308EFB7AC2067BCC587681B0289A2CF4F477F5FE4_40;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::D3A8BE732F7347C03661929DADB05043ADCC99C6D300BCDD6D408A685072840C
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___D3A8BE732F7347C03661929DADB05043ADCC99C6D300BCDD6D408A685072840C_41;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::D72C2BD7CDCD9EF87D997935187D4F25B07276D009ABA64AD49492C6483FCFA7
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___D72C2BD7CDCD9EF87D997935187D4F25B07276D009ABA64AD49492C6483FCFA7_42;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::F42DB06BB1340838BE96C1CB1D0A661949FA626186DAE7D2629304D58D5C411B
	__StaticArrayInitTypeSizeU3D96_tE962D346DA0011435482BCE5513DB1E0D88A8DEB ___F42DB06BB1340838BE96C1CB1D0A661949FA626186DAE7D2629304D58D5C411B_43;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
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

// CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t18A554DDD4B7C5BF9AA26772A2FFAC611BC643ED  : public RuntimeObject
{
	// UnityEngine.Vector3 CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass9_0::cameraFollowPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraFollowPosition_0;
};

// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t336C406746EA93FD8AD3CEB21B5BE4B9F19261D7  : public RuntimeObject
{
	// UnityEngine.Transform CodeMonkey.Utils.UtilsClass/<>c__DisplayClass16_0::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_0;
	// UnityEngine.Vector3 CodeMonkey.Utils.UtilsClass/<>c__DisplayClass16_0::moveAmount
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveAmount_1;
	// System.Single CodeMonkey.Utils.UtilsClass/<>c__DisplayClass16_0::popupTime
	float ___popupTime_2;
};

// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0
struct U3CU3Ec__DisplayClass64_0_t661C83156D9DE8F1253BBB5EF28FEA5A70643079  : public RuntimeObject
{
	// System.Int32 CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0::state
	int32_t ___state_0;
	// System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3> CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0::onWaitingForToPosition
	Action_2_tFA12D1ED57DFFBB4A246CECC16F8F9387FE254AA* ___onWaitingForToPosition_1;
	// UnityEngine.Vector3 CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0::from
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from_2;
	// System.Int32 CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0::cancelMouseButton
	int32_t ___cancelMouseButton_3;
	// System.Int32 CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0::mouseButton
	int32_t ___mouseButton_4;
	// System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3> CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0::onMouseClickFromTo
	Action_2_tFA12D1ED57DFFBB4A246CECC16F8F9387FE254AA* ___onMouseClickFromTo_5;
};

// CodeMonkey.Utils.UtilsClass/<>c__DisplayClass76_0
struct U3CU3Ec__DisplayClass76_0_tF1CD4E63407214066C3150FC7636B17E5BC35194  : public RuntimeObject
{
	// System.Single CodeMonkey.Utils.UtilsClass/<>c__DisplayClass76_0::timer
	float ___timer_0;
	// System.Single CodeMonkey.Utils.UtilsClass/<>c__DisplayClass76_0::intensity
	float ___intensity_1;
	// UnityEngine.Vector3 CodeMonkey.Utils.UtilsClass/<>c__DisplayClass76_0::lastCameraMovement
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastCameraMovement_2;
};

// CodeMonkey.Utils.World_Bar/Outline
struct Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B  : public RuntimeObject
{
	// System.Single CodeMonkey.Utils.World_Bar/Outline::size
	float ___size_0;
	// UnityEngine.Color CodeMonkey.Utils.World_Bar/Outline::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
};

// CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E  : public RuntimeObject
{
	// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0::worldSprite
	World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* ___worldSprite_0;
	// UnityEngine.Color CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0::colorOver
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colorOver_1;
	// UnityEngine.Color CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
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

// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct Action_2_tFA12D1ED57DFFBB4A246CECC16F8F9387FE254AA  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7  : public MulticastDelegate_t
{
};

// System.Func`1<System.String>
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C  : public MulticastDelegate_t
{
};

// System.Func`1<UnityEngine.Vector3>
struct Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// CodeMonkey.Assets
struct Assets_t094110F45CF338D6C1309600CBB41ADFEE6D9BD8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite CodeMonkey.Assets::s_White
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___s_White_5;
	// UnityEngine.Sprite CodeMonkey.Assets::s_Circle
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___s_Circle_6;
	// UnityEngine.Material CodeMonkey.Assets::m_White
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_White_7;
};

struct Assets_t094110F45CF338D6C1309600CBB41ADFEE6D9BD8_StaticFields
{
	// CodeMonkey.Assets CodeMonkey.Assets::_i
	Assets_t094110F45CF338D6C1309600CBB41ADFEE6D9BD8* ____i_4;
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// CodeMonkey.Utils.Button_Sprite
struct Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action CodeMonkey.Utils.Button_Sprite::ClickFunc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___ClickFunc_5;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseRightDownOnceFunc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MouseRightDownOnceFunc_6;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseRightDownFunc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MouseRightDownFunc_7;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseRightUpFunc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MouseRightUpFunc_8;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseDownOnceFunc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MouseDownOnceFunc_9;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseUpOnceFunc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MouseUpOnceFunc_10;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseOverOnceFunc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MouseOverOnceFunc_11;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseOutOnceFunc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MouseOutOnceFunc_12;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseOverOnceTooltipFunc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MouseOverOnceTooltipFunc_13;
	// System.Action CodeMonkey.Utils.Button_Sprite::MouseOutOnceTooltipFunc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MouseOutOnceTooltipFunc_14;
	// System.Boolean CodeMonkey.Utils.Button_Sprite::draggingMouseRight
	bool ___draggingMouseRight_15;
	// UnityEngine.Vector3 CodeMonkey.Utils.Button_Sprite::mouseRightDragStart
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mouseRightDragStart_16;
	// System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3> CodeMonkey.Utils.Button_Sprite::MouseRightDragFunc
	Action_2_tFA12D1ED57DFFBB4A246CECC16F8F9387FE254AA* ___MouseRightDragFunc_17;
	// System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3> CodeMonkey.Utils.Button_Sprite::MouseRightDragUpdateFunc
	Action_2_tFA12D1ED57DFFBB4A246CECC16F8F9387FE254AA* ___MouseRightDragUpdateFunc_18;
	// System.Boolean CodeMonkey.Utils.Button_Sprite::triggerMouseRightDragOnEnter
	bool ___triggerMouseRightDragOnEnter_19;
	// CodeMonkey.Utils.Button_Sprite/HoverBehaviour CodeMonkey.Utils.Button_Sprite::hoverBehaviourType
	int32_t ___hoverBehaviourType_20;
	// System.Action CodeMonkey.Utils.Button_Sprite::hoverBehaviourFunc_Enter
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___hoverBehaviourFunc_Enter_21;
	// System.Action CodeMonkey.Utils.Button_Sprite::hoverBehaviourFunc_Exit
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___hoverBehaviourFunc_Exit_22;
	// UnityEngine.Color CodeMonkey.Utils.Button_Sprite::hoverBehaviour_Color_Enter
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___hoverBehaviour_Color_Enter_23;
	// UnityEngine.Color CodeMonkey.Utils.Button_Sprite::hoverBehaviour_Color_Exit
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___hoverBehaviour_Color_Exit_24;
	// UnityEngine.SpriteRenderer CodeMonkey.Utils.Button_Sprite::hoverBehaviour_Image
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___hoverBehaviour_Image_25;
	// UnityEngine.Sprite CodeMonkey.Utils.Button_Sprite::hoverBehaviour_Sprite_Exit
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___hoverBehaviour_Sprite_Exit_26;
	// UnityEngine.Sprite CodeMonkey.Utils.Button_Sprite::hoverBehaviour_Sprite_Enter
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___hoverBehaviour_Sprite_Enter_27;
	// System.Boolean CodeMonkey.Utils.Button_Sprite::hoverBehaviour_Move
	bool ___hoverBehaviour_Move_28;
	// UnityEngine.Vector2 CodeMonkey.Utils.Button_Sprite::hoverBehaviour_Move_Amount
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___hoverBehaviour_Move_Amount_29;
	// UnityEngine.Vector3 CodeMonkey.Utils.Button_Sprite::posExit
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posExit_30;
	// UnityEngine.Vector3 CodeMonkey.Utils.Button_Sprite::posEnter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posEnter_31;
	// System.Boolean CodeMonkey.Utils.Button_Sprite::triggerMouseOutFuncOnClick
	bool ___triggerMouseOutFuncOnClick_32;
	// System.Boolean CodeMonkey.Utils.Button_Sprite::clickThroughUI
	bool ___clickThroughUI_33;
	// System.Action CodeMonkey.Utils.Button_Sprite::internalOnMouseDownFunc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___internalOnMouseDownFunc_34;
	// System.Action CodeMonkey.Utils.Button_Sprite::internalOnMouseEnterFunc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___internalOnMouseEnterFunc_35;
	// System.Action CodeMonkey.Utils.Button_Sprite::internalOnMouseExitFunc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___internalOnMouseExitFunc_36;
};

struct Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD_StaticFields
{
	// System.Func`1<UnityEngine.Camera> CodeMonkey.Utils.Button_Sprite::GetWorldCamera
	Func_1_t2CF654106B924961EA2A880955474BC6DC4577B9* ___GetWorldCamera_4;
};

// CodeMonkey.MonoBehaviours.CameraFollow
struct CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera CodeMonkey.MonoBehaviours.CameraFollow::myCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___myCamera_5;
	// System.Func`1<UnityEngine.Vector3> CodeMonkey.MonoBehaviours.CameraFollow::GetCameraFollowPositionFunc
	Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* ___GetCameraFollowPositionFunc_6;
	// System.Func`1<System.Single> CodeMonkey.MonoBehaviours.CameraFollow::GetCameraZoomFunc
	Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___GetCameraZoomFunc_7;
};

struct CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6_StaticFields
{
	// CodeMonkey.MonoBehaviours.CameraFollow CodeMonkey.MonoBehaviours.CameraFollow::<Instance>k__BackingField
	CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* ___U3CInstanceU3Ek__BackingField_4;
};

// CodeMonkey.MonoBehaviours.CameraFollowSetup
struct CameraFollowSetup_tD16A601426BB7376FE01E38DF536BF39FEF83D2C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CodeMonkey.MonoBehaviours.CameraFollow CodeMonkey.MonoBehaviours.CameraFollowSetup::cameraFollow
	CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* ___cameraFollow_4;
	// UnityEngine.Transform CodeMonkey.MonoBehaviours.CameraFollowSetup::followTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___followTransform_5;
	// System.Single CodeMonkey.MonoBehaviours.CameraFollowSetup::zoom
	float ___zoom_6;
};

// CodeMonkey.MonoBehaviours.ComponentActions
struct ComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action CodeMonkey.MonoBehaviours.ComponentActions::OnDestroyFunc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDestroyFunc_4;
	// System.Action CodeMonkey.MonoBehaviours.ComponentActions::OnEnableFunc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnEnableFunc_5;
	// System.Action CodeMonkey.MonoBehaviours.ComponentActions::OnDisableFunc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDisableFunc_6;
	// System.Action CodeMonkey.MonoBehaviours.ComponentActions::OnUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnUpdate_7;
};

// CodeMonkey.MonoBehaviours.PositionRendererSorter
struct PositionRendererSorter_t8E87C9B65BC3D7DB3445ABAF438941A5E5D2814F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 CodeMonkey.MonoBehaviours.PositionRendererSorter::sortingOrderBase
	int32_t ___sortingOrderBase_4;
	// System.Int32 CodeMonkey.MonoBehaviours.PositionRendererSorter::offset
	int32_t ___offset_5;
	// System.Boolean CodeMonkey.MonoBehaviours.PositionRendererSorter::runOnlyOnce
	bool ___runOnlyOnce_6;
	// System.Single CodeMonkey.MonoBehaviours.PositionRendererSorter::timer
	float ___timer_7;
	// System.Single CodeMonkey.MonoBehaviours.PositionRendererSorter::timerMax
	float ___timerMax_8;
	// UnityEngine.Renderer CodeMonkey.MonoBehaviours.PositionRendererSorter::myRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___myRenderer_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector3>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_gshared_inline (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m4FAE173EDA36B822FB752D0C622A60C6ADC7AB58_gshared_inline (Action_2_tFA12D1ED57DFFBB4A246CECC16F8F9387FE254AA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___arg10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___arg21, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Color>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_gshared (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_gshared (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// TResult System.Func`1<UnityEngine.Vector3>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_1_Invoke_m1CDD0198843EF8947E2C7F333F38C1E36FF3C568_gshared_inline (Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Single>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mD02D4E16AD6700382E279DCC40D3E157B3F3C99E_gshared (Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71_gshared (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Type System.Type::GetNestedType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetNestedType_m48C2FFDBF7A093B093CEB6004FC9D0D8532A193B (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// TResult System.Func`1<System.String>::Invoke()
inline String_t* Func_1_Invoke_m731CAFD8102845345E28040B091301A1B469C9DE_inline (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CodeMonkey.Utils.UtilsClass::GetMouseWorldPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UtilsClass_GetMouseWorldPosition_m8FA3905650B786EEC51E25E6B00C0F4FF53B9259 (const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector3>::Invoke(T)
inline void Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_inline (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`2<UnityEngine.Vector3,UnityEngine.Vector3>::Invoke(T1,T2)
inline void Action_2_Invoke_m4FAE173EDA36B822FB752D0C622A60C6ADC7AB58_inline (Action_2_tFA12D1ED57DFFBB4A246CECC16F8F9387FE254AA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___arg10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tFA12D1ED57DFFBB4A246CECC16F8F9387FE254AA*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Action_2_Invoke_m4FAE173EDA36B822FB752D0C622A60C6ADC7AB58_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Boolean CodeMonkey.Utils.UtilsClass::IsPointerOverUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UtilsClass_IsPointerOverUI_m700839903E881432AB2CA42634117EAB3C3CFE3D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 CodeMonkey.Utils.UtilsClass::GetWorldPositionFromUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UtilsClass_GetWorldPositionFromUI_m255A0745FF31EF7732871AF5DC8F9E63B21A638A (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// CodeMonkey.Utils.World_Bar CodeMonkey.Utils.World_Bar::Create(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Nullable`1<UnityEngine.Color>,UnityEngine.Color,System.Single,System.Int32,CodeMonkey.Utils.World_Bar/Outline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* World_Bar_Create_mFC9B82B2F69E91BA012196ACD1B7DF95462D62BC (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale2, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___backgroundColor3, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___barColor4, float ___sizeRatio5, int32_t ___sortingOrder6, Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* ___outline7, const RuntimeMethod* method) ;
// System.Void CodeMonkey.Utils.World_Bar::.ctor(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Nullable`1<UnityEngine.Color>,UnityEngine.Color,System.Single,System.Int32,CodeMonkey.Utils.World_Bar/Outline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar__ctor_m1DA0047546932A7BF9F116D4C5286AC10C37B835 (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale2, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___backgroundColor3, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___barColor4, float ___sizeRatio5, int32_t ___sortingOrder6, Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* ___outline7, const RuntimeMethod* method) ;
// System.Void CodeMonkey.Utils.World_Bar::SetupParent(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_SetupParent_m7C7142676AA3C0438AD1376461D9492C23088677 (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition1, const RuntimeMethod* method) ;
// System.Void CodeMonkey.Utils.World_Bar::SetupOutline(CodeMonkey.Utils.World_Bar/Outline,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_SetupOutline_m3EC69C95F85607A68CA5669655C5098E2B631F23 (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* ___outline0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale1, int32_t ___sortingOrder2, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
inline bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, const RuntimeMethod*))Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.Color>::get_Value()
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637 (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, const RuntimeMethod*))Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_gshared)(__this, method);
}
// System.Void CodeMonkey.Utils.World_Bar::SetupBackground(UnityEngine.Color,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_SetupBackground_mB6652E6DD8E05BD09D4E804F8B5271D3FF677A54 (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale1, int32_t ___sortingOrder2, const RuntimeMethod* method) ;
// System.Void CodeMonkey.Utils.World_Bar::SetupBar(UnityEngine.Color,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_SetupBar_m913B210104B6108F570074D9222048284678D95D (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___barColor0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale1, int32_t ___sortingOrder2, const RuntimeMethod* method) ;
// System.Void CodeMonkey.Utils.World_Bar::SetSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_SetSize_m585C9BB2562F0550CAF4D4D2C5521C8B8E281A0D (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, float ___sizeRatio0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// CodeMonkey.Assets CodeMonkey.Assets::get_i()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assets_t094110F45CF338D6C1309600CBB41ADFEE6D9BD8* Assets_get_i_m4A42E1AB09943A5C048F92386E5EF50D7375A79F (const RuntimeMethod* method) ;
// UnityEngine.GameObject CodeMonkey.Utils.UtilsClass::CreateWorldSprite(UnityEngine.Transform,System.String,UnityEngine.Sprite,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* UtilsClass_CreateWorldSprite_mF7841E87D90EEA93D9400723FE9572608122F7FE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, String_t* ___name1, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale4, int32_t ___sortingOrder5, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color6, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<CodeMonkey.Utils.Button_Sprite>()
inline Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* GameObject_AddComponent_TisButton_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD_m6734F4E98F0078DF42223478E9710D0B0F095697 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void CodeMonkey.Utils.World_Mesh::.ctor(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Material,UnityEngine.Vector3[],UnityEngine.Vector2[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh__ctor_m32E2A30AADDCF8AD4BA3A96D13338D71DD2AB5A5 (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale2, float ___eulerZ3, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material4, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices5, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uv6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles7, int32_t ___sortingOrderOffset8, const RuntimeMethod* method) ;
// System.Void CodeMonkey.Utils.World_Mesh::.ctor(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Single,UnityEngine.Material,CodeMonkey.Utils.World_Mesh/UVCoords,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh__ctor_mF0F061017EC81C1EAB87DA8000529E1F5F646EA9 (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale2, float ___eulerZ3, float ___meshWidth4, float ___meshHeight5, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material6, UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* ___uvCoords7, int32_t ___sortingOrderOffset8, const RuntimeMethod* method) ;
// CodeMonkey.Utils.World_Mesh CodeMonkey.Utils.World_Mesh::Create(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Material,CodeMonkey.Utils.World_Mesh/UVCoords,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* World_Mesh_Create_mCD2E09B0C6DE6AD89C649D04DA0F3981452AEFA8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lowerLeftCorner0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upperRightCorner1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* ___uvCoords3, int32_t ___sortingOrderOffset4, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void CodeMonkey.Utils.World_Mesh/UVCoords::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UVCoords__ctor_m592D368FFD9BD6BB2025850D1C21BF0EBF2B45AD (UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) ;
// UnityEngine.Vector2[] CodeMonkey.Utils.World_Mesh::GetUVRectangleFromPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* World_Mesh_GetUVRectangleFromPixels_m146F35E9225611C31A1CDBDC55CE46E5C3D178F1 (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___textureWidth4, int32_t ___textureHeight5, const RuntimeMethod* method) ;
// System.Void CodeMonkey.Utils.World_Mesh::ApplyUVToUVArray(UnityEngine.Vector2[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_ApplyUVToUVArray_mD8B0F0CE9C13E8476CCDF4D0D60111756D6138EC (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uv0, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** ___mainUV1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___components1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void CodeMonkey.Utils.World_Mesh::SetSortingOrderOffset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_SetSortingOrderOffset_m27C1E68C6775B055EB3214093B8F76C6B6614A4F (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, int32_t ___sortingOrderOffset0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 CodeMonkey.Utils.World_Mesh::ConvertPixelsToUVCoordinates(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 World_Mesh_ConvertPixelsToUVCoordinates_m21D91264C8B7C74BC44135FFA441E72E459637F4 (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, int32_t ___x0, int32_t ___y1, int32_t ___textureWidth2, int32_t ___textureHeight3, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Int32 CodeMonkey.Utils.World_Mesh::GetSortingOrder(UnityEngine.Vector3,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t World_Mesh_GetSortingOrder_mF853E984ABD8A16C73056F92ADBB583480A39FA0 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, int32_t ___offset1, int32_t ___baseSortingOrder2, const RuntimeMethod* method) ;
// System.Void CodeMonkey.Utils.World_Mesh::SetSortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_SetSortingOrder_m5D22AEBB1E4E4CF9DF27D7014CD3367CA5535F99 (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, int32_t ___sortingOrder0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void CodeMonkey.Utils.World_Sprite::.ctor(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Sprite,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite__ctor_mA306B58B23920F53E4A71402F5C0F56DA299D5D3 (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale2, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite3, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color4, int32_t ___sortingOrderOffset5, const RuntimeMethod* method) ;
// CodeMonkey.Utils.Button_Sprite CodeMonkey.Utils.World_Sprite::AddButton(System.Action,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* World_Sprite_AddButton_mF66C0B68E412740A468803C3B194161C008D429C (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___ClickFunc0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MouseOverOnceFunc1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MouseOutOnceFunc2, const RuntimeMethod* method) ;
// System.Void CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m9FCFEDD40673D9CC4757CBB96F17F2F9D421D99D (U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(T)
inline void Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3 (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_gshared)(__this, ___value0, method);
}
// UnityEngine.TextMesh CodeMonkey.Utils.UtilsClass::CreateWorldText(System.String,UnityEngine.Transform,UnityEngine.Vector3,System.Int32,System.Nullable`1<UnityEngine.Color>,UnityEngine.TextAnchor,UnityEngine.TextAlignment,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* UtilsClass_CreateWorldText_mBE21C4CA4BD5C18E4762E602C87F58B143E89714 (String_t* ___text0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition2, int32_t ___fontSize3, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___color4, int32_t ___textAnchor5, int32_t ___textAlignment6, int32_t ___sortingOrder7, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color CodeMonkey.Utils.UtilsClass::GetColorFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UtilsClass_GetColorFromString_m815C463677F1522B3F99128679B18E87AC9ACBD9 (String_t* ___color0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Int32 CodeMonkey.Utils.World_Sprite::GetSortingOrder(UnityEngine.Vector3,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t World_Sprite_GetSortingOrder_mBEA705042B2675096178B82606ED3AD6E31FDE25 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, int32_t ___offset1, int32_t ___baseSortingOrder2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void CodeMonkey.Utils.World_Sprite::SetSortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetSortingOrder_mCC09AB98AC0B066540BC34E5C215D5DFD551338B (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, int32_t ___sortingOrder0, const RuntimeMethod* method) ;
// System.Void CodeMonkey.Utils.World_Sprite::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetParent_m0DAA30532DF3EAEB1EA9868837FC78CAF9C3C33B (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, const RuntimeMethod* method) ;
// System.Void CodeMonkey.Utils.World_Sprite/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_mBB55C6C555FE9CA7C791C0166613D0E8D96006A6 (U3CU3Ec__DisplayClass29_0_t37A8552E8C464CCB67C8D89370738DE9A2F2159D* __this, const RuntimeMethod* method) ;
// CodeMonkey.Utils.FunctionUpdater CodeMonkey.Utils.FunctionUpdater::Create(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FunctionUpdater_t44993A7A7DF63EF8B70891E703E1BDDEE287F569* FunctionUpdater_Create_m469AB9ACA154A3725CC060FA59F6C9A6E8D15053 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___updateFunc0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* GameObject_AddComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m269F530A27F1496AA2C27915AA02DBC4BDF0EB69 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void CodeMonkey.Utils.World_Sprite::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetColor_m83FE6CA29FC8814A281BB32698B63796E07D1016 (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// TResult System.Func`1<UnityEngine.Vector3>::Invoke()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_1_Invoke_m1CDD0198843EF8947E2C7F333F38C1E36FF3C568_inline (Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC*, const RuntimeMethod*))Func_1_Invoke_m1CDD0198843EF8947E2C7F333F38C1E36FF3C568_gshared_inline)(__this, method);
}
// TResult System.Func`1<System.Single>::Invoke()
inline float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, const RuntimeMethod*))Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::set_Instance(CodeMonkey.MonoBehaviours.CameraFollow)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFollow_set_Instance_mE344454072944ECD3EEF4F31566BA909E13D2AD7_inline (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m63979DCE0477688B73F39CAA3F4582212AA155D3 (U3CU3Ec__DisplayClass9_0_t18A554DDD4B7C5BF9AA26772A2FFAC611BC643ED* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mD02D4E16AD6700382E279DCC40D3E157B3F3C99E (Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mD02D4E16AD6700382E279DCC40D3E157B3F3C99E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::SetGetCameraFollowPositionFunc(System.Func`1<UnityEngine.Vector3>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFollow_SetGetCameraFollowPositionFunc_mB21622A3C5C5FDB165746D0A1A19BA47237A04B9_inline (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* ___GetCameraFollowPositionFunc0, const RuntimeMethod* method) ;
// System.Void CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m4EEC54B778970728E1024DE7D7AA16622C62631D (U3CU3Ec__DisplayClass11_0_tFC1AA57A2DB531FD164D68264E1070E3890041EB* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71 (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71_gshared)(__this, ___object0, ___method1, method);
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::SetGetCameraZoomFunc(System.Func`1<System.Single>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFollow_SetGetCameraZoomFunc_m7F1DBD295E1F4B12609B80A9679A006C7569EF46_inline (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___GetCameraZoomFunc0, const RuntimeMethod* method) ;
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::HandleMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_HandleMovement_m8B6663BC7CA014632EA60EB0A6D2E86C1BD0B69C (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, const RuntimeMethod* method) ;
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::HandleZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_HandleZoom_m68C0C90BA5202385060E684EE133915187CB3D18 (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::Setup(System.Func`1<UnityEngine.Vector3>,System.Func`1<System.Single>,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Setup_m6258B34D47A91EBAD27EF7C42153E3D344DA186C (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* ___GetCameraFollowPositionFunc0, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___GetCameraZoomFunc1, bool ___teleportToFollowPosition2, bool ___instantZoom3, const RuntimeMethod* method) ;
// System.Void CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD23B997D48B3A022B39C96AE631184BC8418D918 (U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83* __this, const RuntimeMethod* method) ;
// System.Void CodeMonkey.MonoBehaviours.ComponentActions::AddComponent(UnityEngine.GameObject,System.Action,System.Action,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentActions_AddComponent_mFFB7B3DE6B57CE6A697CA9FDBBAAE1FC58EE2A6E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDestroyFunc1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnEnableFunc2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDisableFunc3, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnUpdate4, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<CodeMonkey.MonoBehaviours.ComponentActions>()
inline ComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC* GameObject_AddComponent_TisComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC_mC01A638D53B1EBFFBB4B4A46A936B4BC6A4B34AE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CodeMonkey.Utils.UtilsClass/JsonDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonDictionary__ctor_m12516DA7B6C010ACCC4D4ED5686F945E6E5A1ABF (JsonDictionary_tC4C44E6F286EFC024CDB8E0AD8D3902D5F62965F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> keyList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___keyList_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyList_0), (void*)L_0);
		// public List<string> valueList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___valueList_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___valueList_1), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Object CodeMonkey.Utils.UtilsClass/ReflectionTools::CallMethod(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionTools_CallMethod_m330843A957BECF6FAD702C31C50F319BC88B51DE (String_t* ___typeName0, String_t* ___methodName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_CallMethod_m330843A957BECF6FAD702C31C50F319BC88B51DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return System.Type.GetType(typeName).GetMethod(methodName).Invoke(null, null);
		String_t* L_0 = ___typeName0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = il2cpp_codegen_get_type(L_0, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, ReflectionTools_CallMethod_m330843A957BECF6FAD702C31C50F319BC88B51DE_RuntimeMethod_var);
		String_t* L_2 = ___methodName1;
		MethodInfo_t* L_3;
		L_3 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_1, L_2, NULL);
		RuntimeObject* L_4;
		L_4 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_3, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		return L_4;
	}
}
// System.Object CodeMonkey.Utils.UtilsClass/ReflectionTools::GetField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionTools_GetField_mC27F7FA14B0C1954DE7D3E959ADB4388F34F6E00 (String_t* ___typeName0, String_t* ___fieldName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_GetField_mC27F7FA14B0C1954DE7D3E959ADB4388F34F6E00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// System.Reflection.FieldInfo fieldInfo = System.Type.GetType(typeName).GetField(fieldName);
		String_t* L_0 = ___typeName0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = il2cpp_codegen_get_type(L_0, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, ReflectionTools_GetField_mC27F7FA14B0C1954DE7D3E959ADB4388F34F6E00_RuntimeMethod_var);
		String_t* L_2 = ___fieldName1;
		FieldInfo_t* L_3;
		L_3 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_1, L_2, NULL);
		// return fieldInfo.GetValue(null);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_3, NULL);
		return L_4;
	}
}
// System.Type CodeMonkey.Utils.UtilsClass/ReflectionTools::GetNestedType(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReflectionTools_GetNestedType_m7472EA4A4F22B464B5B516F7EA81C5A95F5002CB (String_t* ___typeName0, String_t* ___nestedTypeName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionTools_GetNestedType_m7472EA4A4F22B464B5B516F7EA81C5A95F5002CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return System.Type.GetType(typeName).GetNestedType(nestedTypeName);
		String_t* L_0 = ___typeName0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = il2cpp_codegen_get_type(L_0, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, ReflectionTools_GetNestedType_m7472EA4A4F22B464B5B516F7EA81C5A95F5002CB_RuntimeMethod_var);
		String_t* L_2 = ___nestedTypeName1;
		Type_t* L_3;
		L_3 = Type_GetNestedType_m48C2FFDBF7A093B093CEB6004FC9D0D8532A193B(L_1, L_2, NULL);
		return L_3;
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m9D404F25870204EFC6428843C1B600AF02B53F42 (U3CU3Ec__DisplayClass12_0_t8A0DC045174B2FB8DF01B6DCD85478CAA2730BEE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass12_0::<CreateWorldTextUpdater>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CCreateWorldTextUpdaterU3Eb__0_mB39759DE77C09275AA7C321624D5C9AEE0D244C1 (U3CU3Ec__DisplayClass12_0_t8A0DC045174B2FB8DF01B6DCD85478CAA2730BEE* __this, const RuntimeMethod* method) 
{
	{
		// textMesh.text = GetTextFunc();
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = __this->___textMesh_0;
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_1 = __this->___GetTextFunc_1;
		String_t* L_2;
		L_2 = Func_1_Invoke_m731CAFD8102845345E28040B091301A1B469C9DE_inline(L_1, NULL);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_0, L_2, NULL);
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m3505F0A79FBE8E0433F543FBE8A2BE60CEE6AF63 (U3CU3Ec__DisplayClass16_0_t336C406746EA93FD8AD3CEB21B5BE4B9F19261D7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass16_0::<CreateWorldTextPopup>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass16_0_U3CCreateWorldTextPopupU3Eb__0_mABCB074481DF073CC24D31B02C5FF2487790728F (U3CU3Ec__DisplayClass16_0_t336C406746EA93FD8AD3CEB21B5BE4B9F19261D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position += moveAmount * Time.unscaledDeltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___moveAmount_1;
		float L_4;
		L_4 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_5, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_6, NULL);
		// popupTime -= Time.unscaledDeltaTime;
		float L_7 = __this->___popupTime_2;
		float L_8;
		L_8 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		__this->___popupTime_2 = ((float)il2cpp_codegen_subtract(L_7, L_8));
		// if (popupTime <= 0f) {
		float L_9 = __this->___popupTime_2;
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		// UnityEngine.Object.Destroy(transform.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___transform_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_11, NULL);
		// return true;
		return (bool)1;
	}

IL_0057:
	{
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m8B4A3B28576DE915851EAB474AE3C06E51F8649E (U3CU3Ec__DisplayClass17_0_tFC042FBE61ABB029175D55BFB0D495530BE5E968* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass17_0::<CreateUITextUpdater>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass17_0_U3CCreateUITextUpdaterU3Eb__0_mDBB3F2EE9D3F9D0F6E44D35C2BEF405C9AD5C15E (U3CU3Ec__DisplayClass17_0_tFC042FBE61ABB029175D55BFB0D495530BE5E968* __this, const RuntimeMethod* method) 
{
	{
		// text.text = GetTextFunc();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_0;
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_1 = __this->___GetTextFunc_1;
		String_t* L_2;
		L_2 = Func_1_Invoke_m731CAFD8102845345E28040B091301A1B469C9DE_inline(L_1, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass62_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0__ctor_m352C5A1C1BF8A13C4188CF82A5E7BDC7E24AFA01 (U3CU3Ec__DisplayClass62_0_t498A351F3676E92DF04C0560FF75ECC5E06E436C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass62_0::<CreateMouseDraggingAction>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass62_0_U3CCreateMouseDraggingActionU3Eb__0_m34711CA6A8C6EBD6BE7D0A8824775C0F2F1484FC (U3CU3Ec__DisplayClass62_0_t498A351F3676E92DF04C0560FF75ECC5E06E436C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetMouseButtonDown(mouseButton)) {
		int32_t L_0 = __this->___mouseButton_0;
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// dragging = true;
		__this->___dragging_1 = (bool)1;
	}

IL_0014:
	{
		// if (Input.GetMouseButtonUp(mouseButton)) {
		int32_t L_2 = __this->___mouseButton_0;
		bool L_3;
		L_3 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(L_2, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// dragging = false;
		__this->___dragging_1 = (bool)0;
	}

IL_0028:
	{
		// if (dragging) {
		bool L_4 = __this->___dragging_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		// onMouseDragging(UtilsClass.GetMouseWorldPosition());
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_5 = __this->___onMouseDragging_2;
		il2cpp_codegen_runtime_class_init_inline(UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = UtilsClass_GetMouseWorldPosition_m8FA3905650B786EEC51E25E6B00C0F4FF53B9259(NULL);
		Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_inline(L_5, L_6, NULL);
	}

IL_0040:
	{
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass64_0__ctor_mE8A461ADDF0A3A5A72BDDA9E6A438DEB494F9BC8 (U3CU3Ec__DisplayClass64_0_t661C83156D9DE8F1253BBB5EF28FEA5A70643079* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass64_0::<CreateMouseClickFromToAction>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass64_0_U3CCreateMouseClickFromToActionU3Eb__0_m90B46499B6B56B43137861865071ECBBB18D0D91 (U3CU3Ec__DisplayClass64_0_t661C83156D9DE8F1253BBB5EF28FEA5A70643079* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (state == 1) {
		int32_t L_0 = __this->___state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		// if (onWaitingForToPosition != null) onWaitingForToPosition(from, UtilsClass.GetMouseWorldPosition());
		Action_2_tFA12D1ED57DFFBB4A246CECC16F8F9387FE254AA* L_1 = __this->___onWaitingForToPosition_1;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// if (onWaitingForToPosition != null) onWaitingForToPosition(from, UtilsClass.GetMouseWorldPosition());
		Action_2_tFA12D1ED57DFFBB4A246CECC16F8F9387FE254AA* L_2 = __this->___onWaitingForToPosition_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___from_2;
		il2cpp_codegen_runtime_class_init_inline(UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = UtilsClass_GetMouseWorldPosition_m8FA3905650B786EEC51E25E6B00C0F4FF53B9259(NULL);
		Action_2_Invoke_m4FAE173EDA36B822FB752D0C622A60C6ADC7AB58_inline(L_2, L_3, L_4, NULL);
	}

IL_0027:
	{
		// if (state == 1 && Input.GetMouseButtonDown(cancelMouseButton)) {
		int32_t L_5 = __this->___state_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_6 = __this->___cancelMouseButton_3;
		bool L_7;
		L_7 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(L_6, NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		// state = 0;
		__this->___state_0 = 0;
	}

IL_0044:
	{
		// if (Input.GetMouseButtonDown(mouseButton) && !UtilsClass.IsPointerOverUI()) {
		int32_t L_8 = __this->___mouseButton_4;
		bool L_9;
		L_9 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(L_8, NULL);
		if (!L_9)
		{
			goto IL_0091;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = UtilsClass_IsPointerOverUI_m700839903E881432AB2CA42634117EAB3C3CFE3D(NULL);
		if (L_10)
		{
			goto IL_0091;
		}
	}
	{
		// if (state == 0) {
		int32_t L_11 = __this->___state_0;
		if (L_11)
		{
			goto IL_0074;
		}
	}
	{
		// state = 1;
		__this->___state_0 = 1;
		// from = UtilsClass.GetMouseWorldPosition();
		il2cpp_codegen_runtime_class_init_inline(UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = UtilsClass_GetMouseWorldPosition_m8FA3905650B786EEC51E25E6B00C0F4FF53B9259(NULL);
		__this->___from_2 = L_12;
		goto IL_0091;
	}

IL_0074:
	{
		// state = 0;
		__this->___state_0 = 0;
		// onMouseClickFromTo(from, UtilsClass.GetMouseWorldPosition());
		Action_2_tFA12D1ED57DFFBB4A246CECC16F8F9387FE254AA* L_13 = __this->___onMouseClickFromTo_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___from_2;
		il2cpp_codegen_runtime_class_init_inline(UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = UtilsClass_GetMouseWorldPosition_m8FA3905650B786EEC51E25E6B00C0F4FF53B9259(NULL);
		Action_2_Invoke_m4FAE173EDA36B822FB752D0C622A60C6ADC7AB58_inline(L_13, L_14, L_15, NULL);
	}

IL_0091:
	{
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass66_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_0__ctor_m41DCB47778A7924936B17B787288F67B4FBFAC0A (U3CU3Ec__DisplayClass66_0_tA4B7431CF7DC810CC93A2BD1874E56A097DA836C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass66_0::<CreateMouseClickAction>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass66_0_U3CCreateMouseClickActionU3Eb__0_mD5AC5CAC6EDE8458128865DE704AC00AE3A346DD (U3CU3Ec__DisplayClass66_0_tA4B7431CF7DC810CC93A2BD1874E56A097DA836C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetMouseButtonDown(mouseButton)) {
		int32_t L_0 = __this->___mouseButton_0;
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// onMouseClick(GetWorldPositionFromUI());
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_2 = __this->___onMouseClick_1;
		il2cpp_codegen_runtime_class_init_inline(UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = UtilsClass_GetWorldPositionFromUI_m255A0745FF31EF7732871AF5DC8F9E63B21A638A(NULL);
		Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_inline(L_2, L_3, NULL);
	}

IL_001d:
	{
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass67_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_0__ctor_m2D17B32F73523859DBE4FFE6ED7AFBEE78BA7E93 (U3CU3Ec__DisplayClass67_0_t409BE063341AF721522BA24215EB0A420328878D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass67_0::<CreateKeyCodeAction>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass67_0_U3CCreateKeyCodeActionU3Eb__0_m6D289D0A40F07D40A64CFA7696584FD656A35C2C (U3CU3Ec__DisplayClass67_0_t409BE063341AF721522BA24215EB0A420328878D* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(keyCode)) {
		int32_t L_0 = __this->___keyCode_0;
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// onKeyDown();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___onKeyDown_1;
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
	}

IL_0018:
	{
		// return false;
		return (bool)0;
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass76_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass76_0__ctor_mA2D048EE023570E1B4FEE679CBEDECB401FB8968 (U3CU3Ec__DisplayClass76_0_tF1CD4E63407214066C3150FC7636B17E5BC35194* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass76_0::<ShakeCamera>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass76_0_U3CShakeCameraU3Eb__0_mD5A778848B1D3B0B30F3B265383D35DC8C37DC1E (U3CU3Ec__DisplayClass76_0_tF1CD4E63407214066C3150FC7636B17E5BC35194* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// timer -= Time.unscaledDeltaTime;
		float L_0 = __this->___timer_0;
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		__this->___timer_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// Vector3 randomMovement = new Vector3(UnityEngine.Random.Range(-1f, 1f), UnityEngine.Random.Range(-1f, 1f)).normalized * intensity;
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.0f), (1.0f), NULL);
		float L_3;
		L_3 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.0f), (1.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		float L_6 = __this->___intensity_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		V_0 = L_7;
		// Camera.main.transform.position = Camera.main.transform.position - lastCameraMovement + randomMovement;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___lastCameraMovement_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_15, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_16, NULL);
		// lastCameraMovement = randomMovement;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		__this->___lastCameraMovement_2 = L_17;
		// return timer <= 0f;
		float L_18 = __this->___timer_0;
		return (bool)((((int32_t)((!(((float)L_18) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void CodeMonkey.Utils.UtilsClass/<>c__DisplayClass77_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass77_0__ctor_mC516A44544C244D25D2803369A8B64A00137C1E3 (U3CU3Ec__DisplayClass77_0_t08DC281E39C88D193F7CFDF40876CBFCE65482F7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CodeMonkey.Utils.UtilsClass/<>c__DisplayClass77_0::<ActionNextFrame>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass77_0_U3CActionNextFrameU3Eb__0_m1A3180EB0296EB49BE1CAF9A35E501A0C7554404 (U3CU3Ec__DisplayClass77_0_t08DC281E39C88D193F7CFDF40876CBFCE65482F7* __this, const RuntimeMethod* method) 
{
	{
		// action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___action_0;
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		// return true;
		return (bool)1;
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
// System.Int32 CodeMonkey.Utils.World_Bar::GetSortingOrder(UnityEngine.Vector3,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t World_Bar_GetSortingOrder_m1DDADBB9284D4C7B7EB176EF742B358533034342 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, int32_t ___offset1, int32_t ___baseSortingOrder2, const RuntimeMethod* method) 
{
	{
		// return (int)(baseSortingOrder - position.y) + offset;
		int32_t L_0 = ___baseSortingOrder2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position0;
		float L_2 = L_1.___y_3;
		int32_t L_3 = ___offset1;
		return ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)L_0), L_2))), L_3));
	}
}
// CodeMonkey.Utils.World_Bar CodeMonkey.Utils.World_Bar::Create(UnityEngine.Vector3,UnityEngine.Vector3,System.Nullable`1<UnityEngine.Color>,UnityEngine.Color,System.Single,CodeMonkey.Utils.World_Bar/Outline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* World_Bar_Create_m91588FE7DBA7FA78BD4269C25CA070127392CD44 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale1, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___backgroundColor2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___barColor3, float ___sizeRatio4, Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* ___outline5, const RuntimeMethod* method) 
{
	{
		// return Create(null, localPosition, localScale, backgroundColor, barColor, sizeRatio, 0, outline);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___localPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___localScale1;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_2 = ___backgroundColor2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___barColor3;
		float L_4 = ___sizeRatio4;
		Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* L_5 = ___outline5;
		World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* L_6;
		L_6 = World_Bar_Create_mFC9B82B2F69E91BA012196ACD1B7DF95462D62BC((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_0, L_1, L_2, L_3, L_4, 0, L_5, NULL);
		return L_6;
	}
}
// CodeMonkey.Utils.World_Bar CodeMonkey.Utils.World_Bar::Create(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Nullable`1<UnityEngine.Color>,UnityEngine.Color,System.Single,System.Int32,CodeMonkey.Utils.World_Bar/Outline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* World_Bar_Create_mFC9B82B2F69E91BA012196ACD1B7DF95462D62BC (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale2, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___backgroundColor3, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___barColor4, float ___sizeRatio5, int32_t ___sortingOrder6, Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* ___outline7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Bar(parent, localPosition, localScale, backgroundColor, barColor, sizeRatio, sortingOrder, outline);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___parent0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___localPosition1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___localScale2;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_3 = ___backgroundColor3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___barColor4;
		float L_5 = ___sizeRatio5;
		int32_t L_6 = ___sortingOrder6;
		Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* L_7 = ___outline7;
		World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* L_8 = (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A*)il2cpp_codegen_object_new(World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A_il2cpp_TypeInfo_var);
		World_Bar__ctor_m1DA0047546932A7BF9F116D4C5286AC10C37B835(L_8, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Void CodeMonkey.Utils.World_Bar::.ctor(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Nullable`1<UnityEngine.Color>,UnityEngine.Color,System.Single,System.Int32,CodeMonkey.Utils.World_Bar/Outline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar__ctor_m1DA0047546932A7BF9F116D4C5286AC10C37B835 (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale2, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___backgroundColor3, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___barColor4, float ___sizeRatio5, int32_t ___sortingOrder6, Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* ___outline7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public World_Bar(Transform parent, Vector3 localPosition, Vector3 localScale, Color? backgroundColor, Color barColor, float sizeRatio, int sortingOrder, Outline outline = null) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.outline = outline;
		Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* L_0 = ___outline7;
		__this->___outline_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outline_0), (void*)L_0);
		// SetupParent(parent, localPosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___parent0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___localPosition1;
		World_Bar_SetupParent_m7C7142676AA3C0438AD1376461D9492C23088677(__this, L_1, L_2, NULL);
		// if (outline != null) SetupOutline(outline, localScale, sortingOrder - 1);
		Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* L_3 = ___outline7;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// if (outline != null) SetupOutline(outline, localScale, sortingOrder - 1);
		Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* L_4 = ___outline7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___localScale2;
		int32_t L_6 = ___sortingOrder6;
		World_Bar_SetupOutline_m3EC69C95F85607A68CA5669655C5098E2B631F23(__this, L_4, L_5, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
	}

IL_0027:
	{
		// if (backgroundColor != null) SetupBackground((Color)backgroundColor, localScale, sortingOrder);
		bool L_7;
		L_7 = Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_inline((&___backgroundColor3), Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		// if (backgroundColor != null) SetupBackground((Color)backgroundColor, localScale, sortingOrder);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637((&___backgroundColor3), Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___localScale2;
		int32_t L_10 = ___sortingOrder6;
		World_Bar_SetupBackground_mB6652E6DD8E05BD09D4E804F8B5271D3FF677A54(__this, L_8, L_9, L_10, NULL);
	}

IL_0040:
	{
		// SetupBar(barColor, localScale, sortingOrder + 1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___barColor4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___localScale2;
		int32_t L_13 = ___sortingOrder6;
		World_Bar_SetupBar_m913B210104B6108F570074D9222048284678D95D(__this, L_11, L_12, ((int32_t)il2cpp_codegen_add(L_13, 1)), NULL);
		// SetSize(sizeRatio);
		float L_14 = ___sizeRatio5;
		World_Bar_SetSize_m585C9BB2562F0550CAF4D4D2C5521C8B8E281A0D(__this, L_14, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Bar::SetupParent(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_SetupParent_m7C7142676AA3C0438AD1376461D9492C23088677 (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44CD722B4028D3450F72C53073EF1F6D00D23E81);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject = new GameObject("World_Bar");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral44CD722B4028D3450F72C53073EF1F6D00D23E81, NULL);
		__this->___gameObject_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObject_1), (void*)L_0);
		// transform = gameObject.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___gameObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		__this->___transform_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transform_2), (void*)L_2);
		// transform.SetParent(parent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___transform_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___parent0;
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_4, NULL);
		// transform.localPosition = localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___transform_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___localPosition1;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Bar::SetupOutline(CodeMonkey.Utils.World_Bar/Outline,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_SetupOutline_m3EC69C95F85607A68CA5669655C5098E2B631F23 (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* ___outline0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale1, int32_t ___sortingOrder2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UtilsClass.CreateWorldSprite(transform, "Outline", Assets.i.s_White, new Vector3(0,0), localScale + new Vector3(outline.size, outline.size), sortingOrder, outline.color);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_2;
		Assets_t094110F45CF338D6C1309600CBB41ADFEE6D9BD8* L_1;
		L_1 = Assets_get_i_m4A42E1AB09943A5C048F92386E5EF50D7375A79F(NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = L_1->___s_White_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_3), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___localScale1;
		Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* L_5 = ___outline0;
		float L_6 = L_5->___size_0;
		Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* L_7 = ___outline0;
		float L_8 = L_7->___size_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_9), L_6, L_8, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_9, NULL);
		int32_t L_11 = ___sortingOrder2;
		Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* L_12 = ___outline0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12->___color_1;
		il2cpp_codegen_runtime_class_init_inline(UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = UtilsClass_CreateWorldSprite_mF7841E87D90EEA93D9400723FE9572608122F7FE(L_0, _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8, L_2, L_3, L_10, L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Bar::SetupBackground(UnityEngine.Color,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_SetupBackground_mB6652E6DD8E05BD09D4E804F8B5271D3FF677A54 (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale1, int32_t ___sortingOrder2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5230F5FD1E0998B73530AA850D3A5872D61228EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// background = UtilsClass.CreateWorldSprite(transform, "Background", Assets.i.s_White, new Vector3(0,0), localScale, sortingOrder, backgroundColor).transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_2;
		Assets_t094110F45CF338D6C1309600CBB41ADFEE6D9BD8* L_1;
		L_1 = Assets_get_i_m4A42E1AB09943A5C048F92386E5EF50D7375A79F(NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = L_1->___s_White_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_3), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___localScale1;
		int32_t L_5 = ___sortingOrder2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___backgroundColor0;
		il2cpp_codegen_runtime_class_init_inline(UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = UtilsClass_CreateWorldSprite_mF7841E87D90EEA93D9400723FE9572608122F7FE(L_0, _stringLiteral5230F5FD1E0998B73530AA850D3A5872D61228EC, L_2, L_3, L_4, L_5, L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		__this->___background_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___background_3), (void*)L_8);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Bar::SetupBar(UnityEngine.Color,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_SetupBar_m913B210104B6108F570074D9222048284678D95D (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___barColor0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale1, int32_t ___sortingOrder2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13B9773C2140C186263B529EB24883DE5B8E082F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44D700698DE33F580439BBCA0F2168D827EBDCAA);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject barGO = new GameObject("Bar");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral44D700698DE33F580439BBCA0F2168D827EBDCAA, NULL);
		V_0 = L_0;
		// bar = barGO.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		__this->___bar_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bar_4), (void*)L_2);
		// bar.SetParent(transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___bar_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___transform_2;
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_4, NULL);
		// bar.localPosition = new Vector3(-localScale.x / 2f, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___bar_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___localScale1;
		float L_7 = L_6.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), ((float)(((-L_7))/(2.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_8, NULL);
		// bar.localScale = new Vector3(1,1,1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___bar_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
		// Transform barIn = UtilsClass.CreateWorldSprite(bar, "BarIn", Assets.i.s_White, new Vector3(localScale.x / 2f, 0), localScale, sortingOrder, barColor).transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___bar_4;
		Assets_t094110F45CF338D6C1309600CBB41ADFEE6D9BD8* L_12;
		L_12 = Assets_get_i_m4A42E1AB09943A5C048F92386E5EF50D7375A79F(NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13 = L_12->___s_White_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___localScale1;
		float L_15 = L_14.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_16), ((float)(L_15/(2.0f))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___localScale1;
		int32_t L_18 = ___sortingOrder2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = ___barColor0;
		il2cpp_codegen_runtime_class_init_inline(UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = UtilsClass_CreateWorldSprite_mF7841E87D90EEA93D9400723FE9572608122F7FE(L_11, _stringLiteral13B9773C2140C186263B529EB24883DE5B8E082F, L_13, L_16, L_17, L_18, L_19, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Bar::SetLocalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_SetLocalScale_mA06752FC9A7ECC2BD1F2D0055EE8E12BB9DFB0A2 (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13B9773C2140C186263B529EB24883DE5B8E082F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.Find("Outline") != null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		// transform.Find("Outline").localScale = localScale + new Vector3(outline.size, outline.size);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___transform_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___localScale0;
		Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* L_6 = __this->___outline_0;
		float L_7 = L_6->___size_0;
		Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* L_8 = __this->___outline_0;
		float L_9 = L_8->___size_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_10), L_7, L_9, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_10, NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_11, NULL);
	}

IL_004e:
	{
		// background.localScale = localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___background_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___localScale0;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_12, L_13, NULL);
		// bar.localPosition = new Vector3(-localScale.x / 2f, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___bar_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___localScale0;
		float L_16 = L_15.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)(((-L_16))/(2.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_14, L_17, NULL);
		// Transform barIn = bar.Find("BarIn");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___bar_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_18, _stringLiteral13B9773C2140C186263B529EB24883DE5B8E082F, NULL);
		// barIn.localScale = localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___localScale0;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_20, L_21, NULL);
		// barIn.localPosition = new Vector3(localScale.x / 2f, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___localScale0;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_24), ((float)(L_23/(2.0f))), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_20, L_24, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Bar::SetSortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_SetSortingOrder_m3E8DDEA82174E4913B5A976876106845752642A7 (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, int32_t ___sortingOrder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13B9773C2140C186263B529EB24883DE5B8E082F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bar.Find("BarIn").GetComponent<SpriteRenderer>().sortingOrder = sortingOrder;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___bar_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteral13B9773C2140C186263B529EB24883DE5B8E082F, NULL);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_1, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		int32_t L_3 = ___sortingOrder0;
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_2, L_3, NULL);
		// if (background != null) background.GetComponent<SpriteRenderer>().sortingOrder = sortingOrder - 1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___background_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// if (background != null) background.GetComponent<SpriteRenderer>().sortingOrder = sortingOrder - 1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___background_3;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7;
		L_7 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_6, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		int32_t L_8 = ___sortingOrder0;
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_7, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), NULL);
	}

IL_003c:
	{
		// if (transform.Find("Outline") != null) transform.Find("Outline").GetComponent<SpriteRenderer>().sortingOrder = sortingOrder - 2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___transform_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_9, _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		// if (transform.Find("Outline") != null) transform.Find("Outline").GetComponent<SpriteRenderer>().sortingOrder = sortingOrder - 2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___transform_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_12, _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8, NULL);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_14;
		L_14 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_13, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		int32_t L_15 = ___sortingOrder0;
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_14, ((int32_t)il2cpp_codegen_subtract(L_15, 2)), NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Bar::SetSortingLayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_SetSortingLayerName_m93AAED9CF6EED61E10842CE78BCB91A64CDBF1D5 (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, String_t* ___sortingLayerName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13B9773C2140C186263B529EB24883DE5B8E082F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bar.Find("BarIn").GetComponent<SpriteRenderer>().sortingLayerName = sortingLayerName;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___bar_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteral13B9773C2140C186263B529EB24883DE5B8E082F, NULL);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_1, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		String_t* L_3 = ___sortingLayerName0;
		Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A(L_2, L_3, NULL);
		// if (background != null) background.GetComponent<SpriteRenderer>().sortingLayerName = sortingLayerName;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___background_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// if (background != null) background.GetComponent<SpriteRenderer>().sortingLayerName = sortingLayerName;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___background_3;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7;
		L_7 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_6, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		String_t* L_8 = ___sortingLayerName0;
		Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A(L_7, L_8, NULL);
	}

IL_003a:
	{
		// if (transform.Find("Outline") != null) transform.Find("Outline").GetComponent<SpriteRenderer>().sortingLayerName = sortingLayerName;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___transform_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_9, _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		// if (transform.Find("Outline") != null) transform.Find("Outline").GetComponent<SpriteRenderer>().sortingLayerName = sortingLayerName;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___transform_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_12, _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8, NULL);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_14;
		L_14 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_13, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		String_t* L_15 = ___sortingLayerName0;
		Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A(L_14, L_15, NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Bar::SetRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_SetRotation_m88F076717749BBE1A547F075C96E3C00FC2DD6C9 (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, float ___rotation0, const RuntimeMethod* method) 
{
	{
		// transform.localEulerAngles = new Vector3(0, 0, rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_2;
		float L_1 = ___rotation0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Bar::SetSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_SetSize_m585C9BB2562F0550CAF4D4D2C5521C8B8E281A0D (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, float ___sizeRatio0, const RuntimeMethod* method) 
{
	{
		// bar.localScale = new Vector3(sizeRatio, 1, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___bar_4;
		float L_1 = ___sizeRatio0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), L_1, (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Bar::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_SetColor_mF930B5A013DD84C055AE08B017EBE66C23818705 (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13B9773C2140C186263B529EB24883DE5B8E082F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bar.Find("BarIn").GetComponent<SpriteRenderer>().color = color;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___bar_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteral13B9773C2140C186263B529EB24883DE5B8E082F, NULL);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_1, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___color0;
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Bar::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_SetActive_m298E93DAC546E27A8A10A9A4BB78522A468F5C4F (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, bool ___isActive0, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(isActive);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		bool L_1 = ___isActive0;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Bar::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_Show_m70868A4D8129FB7CE0B67A42AE063204396FA40E (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Bar::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_Hide_m271D53AE6AD6A8B4366290D48800BAEB9F4F679C (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// CodeMonkey.Utils.Button_Sprite CodeMonkey.Utils.World_Bar::AddButton(System.Action,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* World_Bar_AddButton_m9E5D6C405CC00055EF9AF3FD8DC69E2570B976DB (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___ClickFunc0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MouseOverOnceFunc1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MouseOutOnceFunc2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisButton_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD_m6734F4E98F0078DF42223478E9710D0B0F095697_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* V_0 = NULL;
	{
		// Button_Sprite buttonSprite = gameObject.AddComponent<Button_Sprite>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* L_1;
		L_1 = GameObject_AddComponent_TisButton_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD_m6734F4E98F0078DF42223478E9710D0B0F095697(L_0, GameObject_AddComponent_TisButton_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD_m6734F4E98F0078DF42223478E9710D0B0F095697_RuntimeMethod_var);
		V_0 = L_1;
		// if (ClickFunc != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___ClickFunc0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// buttonSprite.ClickFunc = ClickFunc;
		Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* L_3 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___ClickFunc0;
		L_3->___ClickFunc_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___ClickFunc_5), (void*)L_4);
	}

IL_0016:
	{
		// if (MouseOverOnceFunc != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___MouseOverOnceFunc1;
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// buttonSprite.MouseOverOnceFunc = MouseOverOnceFunc;
		Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___MouseOverOnceFunc1;
		L_6->___MouseOverOnceFunc_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___MouseOverOnceFunc_11), (void*)L_7);
	}

IL_0020:
	{
		// if (MouseOutOnceFunc != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___MouseOutOnceFunc2;
		if (!L_8)
		{
			goto IL_002a;
		}
	}
	{
		// buttonSprite.MouseOutOnceFunc = MouseOutOnceFunc;
		Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = ___MouseOutOnceFunc2;
		L_9->___MouseOutOnceFunc_12 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___MouseOutOnceFunc_12), (void*)L_10);
	}

IL_002a:
	{
		// return buttonSprite;
		Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* L_11 = V_0;
		return L_11;
	}
}
// System.Void CodeMonkey.Utils.World_Bar::DestroySelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Bar_DestroySelf_m42E5604F43A3349ECA069CFA8029ECAD5593004D (World_Bar_t5FE311270A1363EA8259B6C7CB68803BE40F3E0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject != null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Object.Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___gameObject_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0019:
	{
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
// System.Void CodeMonkey.Utils.World_Bar/Outline::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline__ctor_m863CD427B8682A5063A3A1063FD754CD6AE4A11A (Outline_t9D4C51F50B3E7A77ED20F8B62A8F1B0F877B6F0B* __this, const RuntimeMethod* method) 
{
	{
		// public float size = 1f;
		__this->___size_0 = (1.0f);
		// public Color color = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___color_1 = L_0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// CodeMonkey.Utils.World_Mesh CodeMonkey.Utils.World_Mesh::CreateEmpty(UnityEngine.Vector3,System.Single,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* World_Mesh_CreateEmpty_mCD6B06D505DF00CC156DA2668687ED68E7616AEA (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___eulerZ1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, int32_t ___sortingOrderOffset3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Mesh(null, position, Vector3.one, eulerZ, material, new Vector3[0], new Vector2[0], new int[0], sortingOrderOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_2 = ___eulerZ1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___material2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)0);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		int32_t L_7 = ___sortingOrderOffset3;
		World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* L_8 = (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C*)il2cpp_codegen_object_new(World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C_il2cpp_TypeInfo_var);
		World_Mesh__ctor_m32E2A30AADDCF8AD4BA3A96D13338D71DD2AB5A5(L_8, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// CodeMonkey.Utils.World_Mesh CodeMonkey.Utils.World_Mesh::Create(UnityEngine.Vector3,System.Single,UnityEngine.Material,UnityEngine.Vector3[],UnityEngine.Vector2[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* World_Mesh_Create_m1B28C1C3011137B5B2C444E489FE71B701A73EC5 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___eulerZ1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices3, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uv4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles5, int32_t ___sortingOrderOffset6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Mesh(null, position, Vector3.one, eulerZ, material, vertices, uv, triangles, sortingOrderOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_2 = ___eulerZ1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___material2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ___vertices3;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = ___uv4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___triangles5;
		int32_t L_7 = ___sortingOrderOffset6;
		World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* L_8 = (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C*)il2cpp_codegen_object_new(World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C_il2cpp_TypeInfo_var);
		World_Mesh__ctor_m32E2A30AADDCF8AD4BA3A96D13338D71DD2AB5A5(L_8, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// CodeMonkey.Utils.World_Mesh CodeMonkey.Utils.World_Mesh::Create(UnityEngine.Vector3,System.Single,System.Single,System.Single,UnityEngine.Material,CodeMonkey.Utils.World_Mesh/UVCoords,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* World_Mesh_Create_m50B2272C8381911F8D8D38F6764F8B603D2F09E1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___eulerZ1, float ___meshWidth2, float ___meshHeight3, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material4, UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* ___uvCoords5, int32_t ___sortingOrderOffset6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Mesh(null, position, Vector3.one, eulerZ, meshWidth, meshHeight, material, uvCoords, sortingOrderOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_2 = ___eulerZ1;
		float L_3 = ___meshWidth2;
		float L_4 = ___meshHeight3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___material4;
		UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* L_6 = ___uvCoords5;
		int32_t L_7 = ___sortingOrderOffset6;
		World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* L_8 = (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C*)il2cpp_codegen_object_new(World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C_il2cpp_TypeInfo_var);
		World_Mesh__ctor_mF0F061017EC81C1EAB87DA8000529E1F5F646EA9(L_8, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// CodeMonkey.Utils.World_Mesh CodeMonkey.Utils.World_Mesh::Create(UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Material,CodeMonkey.Utils.World_Mesh/UVCoords,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* World_Mesh_Create_m1D58D520595751032B3B88B8F6476CFA70C52391 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lowerLeftCorner0, float ___width1, float ___height2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material3, UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* ___uvCoords4, int32_t ___sortingOrderOffset5, const RuntimeMethod* method) 
{
	{
		// return Create(lowerLeftCorner, lowerLeftCorner + new Vector3(width, height), material, uvCoords, sortingOrderOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lowerLeftCorner0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___lowerLeftCorner0;
		float L_2 = ___width1;
		float L_3 = ___height2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_4, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___material3;
		UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* L_7 = ___uvCoords4;
		int32_t L_8 = ___sortingOrderOffset5;
		World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* L_9;
		L_9 = World_Mesh_Create_mCD2E09B0C6DE6AD89C649D04DA0F3981452AEFA8(L_0, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// CodeMonkey.Utils.World_Mesh CodeMonkey.Utils.World_Mesh::Create(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Material,CodeMonkey.Utils.World_Mesh/UVCoords,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* World_Mesh_Create_mCD2E09B0C6DE6AD89C649D04DA0F3981452AEFA8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lowerLeftCorner0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upperRightCorner1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* ___uvCoords3, int32_t ___sortingOrderOffset4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float width = upperRightCorner.x - lowerLeftCorner.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___upperRightCorner1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___lowerLeftCorner0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		// float height = upperRightCorner.y - lowerLeftCorner.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___upperRightCorner1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___lowerLeftCorner0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		// Vector3 localScale = upperRightCorner - lowerLeftCorner;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___upperRightCorner1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___lowerLeftCorner0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_9, NULL);
		V_2 = L_10;
		// Vector3 position = lowerLeftCorner + localScale * .5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___lowerLeftCorner0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_13, NULL);
		V_3 = L_14;
		// return new World_Mesh(null, position, Vector3.one, 0f, width, height, material, uvCoords, sortingOrderOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_17 = V_0;
		float L_18 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = ___material2;
		UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* L_20 = ___uvCoords3;
		int32_t L_21 = ___sortingOrderOffset4;
		World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* L_22 = (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C*)il2cpp_codegen_object_new(World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C_il2cpp_TypeInfo_var);
		World_Mesh__ctor_mF0F061017EC81C1EAB87DA8000529E1F5F646EA9(L_22, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_15, L_16, (0.0f), L_17, L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Int32 CodeMonkey.Utils.World_Mesh::GetSortingOrder(UnityEngine.Vector3,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t World_Mesh_GetSortingOrder_mF853E984ABD8A16C73056F92ADBB583480A39FA0 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, int32_t ___offset1, int32_t ___baseSortingOrder2, const RuntimeMethod* method) 
{
	{
		// return (int)(baseSortingOrder - position.y) + offset;
		int32_t L_0 = ___baseSortingOrder2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position0;
		float L_2 = L_1.___y_3;
		int32_t L_3 = ___offset1;
		return ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)L_0), L_2))), L_3));
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::.ctor(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Single,UnityEngine.Material,CodeMonkey.Utils.World_Mesh/UVCoords,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh__ctor_mF0F061017EC81C1EAB87DA8000529E1F5F646EA9 (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale2, float ___eulerZ3, float ___meshWidth4, float ___meshHeight5, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material6, UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* ___uvCoords7, int32_t ___sortingOrderOffset8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_2 = NULL;
	{
		// public World_Mesh(Transform parent, Vector3 localPosition, Vector3 localScale, float eulerZ, float meshWidth, float meshHeight, Material material, UVCoords uvCoords, int sortingOrderOffset) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.material = material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material6;
		__this->___material_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_3), (void*)L_0);
		// vertices = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___vertices_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices_4), (void*)L_1);
		// uv = new Vector2[4];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___uv_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uv_5), (void*)L_2);
		// triangles = new int[6];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___triangles_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___triangles_6), (void*)L_3);
		// float meshWidthHalf  = meshWidth  / 2f;
		float L_4 = ___meshWidth4;
		V_0 = ((float)(L_4/(2.0f)));
		// float meshHeightHalf = meshHeight / 2f;
		float L_5 = ___meshHeight5;
		V_1 = ((float)(L_5/(2.0f)));
		// vertices[0] = new Vector3(-meshWidthHalf,  meshHeightHalf);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = __this->___vertices_4;
		float L_7 = V_0;
		float L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_9), ((-L_7)), L_8, /*hidden argument*/NULL);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_9);
		// vertices[1] = new Vector3( meshWidthHalf,  meshHeightHalf);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = __this->___vertices_4;
		float L_11 = V_0;
		float L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_13), L_11, L_12, /*hidden argument*/NULL);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_13);
		// vertices[2] = new Vector3(-meshWidthHalf, -meshHeightHalf);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = __this->___vertices_4;
		float L_15 = V_0;
		float L_16 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_17), ((-L_15)), ((-L_16)), /*hidden argument*/NULL);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_17);
		// vertices[3] = new Vector3( meshWidthHalf, -meshHeightHalf);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = __this->___vertices_4;
		float L_19 = V_0;
		float L_20 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_21), L_19, ((-L_20)), /*hidden argument*/NULL);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_21);
		// if (uvCoords == null) {
		UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* L_22 = ___uvCoords7;
		if (L_22)
		{
			goto IL_00b9;
		}
	}
	{
		// uvCoords = new UVCoords(0, 0, material.mainTexture.width, material.mainTexture.height);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = ___material6;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_24;
		L_24 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_23, NULL);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_24);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = ___material6;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_27;
		L_27 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_26, NULL);
		int32_t L_28;
		L_28 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_27);
		UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* L_29 = (UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD*)il2cpp_codegen_object_new(UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD_il2cpp_TypeInfo_var);
		UVCoords__ctor_m592D368FFD9BD6BB2025850D1C21BF0EBF2B45AD(L_29, 0, 0, L_25, L_28, NULL);
		___uvCoords7 = L_29;
	}

IL_00b9:
	{
		// Vector2[] uvArray = GetUVRectangleFromPixels(uvCoords.x, uvCoords.y, uvCoords.width, uvCoords.height, material.mainTexture.width, material.mainTexture.height);
		UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* L_30 = ___uvCoords7;
		int32_t L_31 = L_30->___x_0;
		UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* L_32 = ___uvCoords7;
		int32_t L_33 = L_32->___y_1;
		UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* L_34 = ___uvCoords7;
		int32_t L_35 = L_34->___width_2;
		UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* L_36 = ___uvCoords7;
		int32_t L_37 = L_36->___height_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38 = ___material6;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_39;
		L_39 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_38, NULL);
		int32_t L_40;
		L_40 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_39);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = ___material6;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_42;
		L_42 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_41, NULL);
		int32_t L_43;
		L_43 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_42);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_44;
		L_44 = World_Mesh_GetUVRectangleFromPixels_m146F35E9225611C31A1CDBDC55CE46E5C3D178F1(__this, L_31, L_33, L_35, L_37, L_40, L_43, NULL);
		V_2 = L_44;
		// ApplyUVToUVArray(uvArray, ref uv);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_45 = V_2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** L_46 = (&__this->___uv_5);
		World_Mesh_ApplyUVToUVArray_mD8B0F0CE9C13E8476CCDF4D0D60111756D6138EC(__this, L_45, L_46, NULL);
		// triangles[0] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = __this->___triangles_6;
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		// triangles[1] = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = __this->___triangles_6;
		(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		// triangles[2] = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->___triangles_6;
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)2);
		// triangles[3] = 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = __this->___triangles_6;
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int32_t)2);
		// triangles[4] = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = __this->___triangles_6;
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (int32_t)1);
		// triangles[5] = 3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = __this->___triangles_6;
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (int32_t)3);
		// mesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_53 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_53, NULL);
		__this->___mesh_7 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_7), (void*)L_53);
		// mesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_54 = __this->___mesh_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_55 = __this->___vertices_4;
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_54, L_55, NULL);
		// mesh.uv = uv;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_56 = __this->___mesh_7;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_57 = __this->___uv_5;
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_56, L_57, NULL);
		// mesh.triangles = triangles;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_58 = __this->___mesh_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = __this->___triangles_6;
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_58, L_59, NULL);
		// gameObject = new GameObject("Mesh", typeof(MeshFilter), typeof(MeshRenderer));
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_60 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_61 = L_60;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		ArrayElementTypeCheck (L_61, L_63);
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_63);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_64 = L_61;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_0_0_0_var) };
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		ArrayElementTypeCheck (L_64, L_66);
		(L_64)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_66);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0(L_67, _stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821, L_64, NULL);
		__this->___gameObject_1 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObject_1), (void*)L_67);
		// gameObject.transform.parent = parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = __this->___gameObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69;
		L_69 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_68, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70 = ___parent0;
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_69, L_70, NULL);
		// gameObject.transform.localPosition = localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = __this->___gameObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = ___localPosition1;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_72, L_73, NULL);
		// gameObject.transform.localScale = localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74 = __this->___gameObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_74, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = ___localScale2;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_75, L_76, NULL);
		// gameObject.transform.localEulerAngles = new Vector3(0, 0, eulerZ);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = __this->___gameObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_77, NULL);
		float L_79 = ___eulerZ3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		memset((&L_80), 0, sizeof(L_80));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_80), (0.0f), (0.0f), L_79, /*hidden argument*/NULL);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_78, L_80, NULL);
		// gameObject.GetComponent<MeshFilter>().mesh = mesh;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = __this->___gameObject_1;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_82;
		L_82 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_81, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_83 = __this->___mesh_7;
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_82, L_83, NULL);
		// gameObject.GetComponent<MeshRenderer>().material = material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = __this->___gameObject_1;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_85;
		L_85 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_84, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_86 = ___material6;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_85, L_86, NULL);
		// transform = gameObject.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87 = __this->___gameObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_87, NULL);
		__this->___transform_2 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transform_2), (void*)L_88);
		// SetSortingOrderOffset(sortingOrderOffset);
		int32_t L_89 = ___sortingOrderOffset8;
		World_Mesh_SetSortingOrderOffset_m27C1E68C6775B055EB3214093B8F76C6B6614A4F(__this, L_89, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::.ctor(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Material,UnityEngine.Vector3[],UnityEngine.Vector2[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh__ctor_m32E2A30AADDCF8AD4BA3A96D13338D71DD2AB5A5 (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale2, float ___eulerZ3, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material4, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices5, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uv6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles7, int32_t ___sortingOrderOffset8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public World_Mesh(Transform parent, Vector3 localPosition, Vector3 localScale, float eulerZ, Material material, Vector3[] vertices, Vector2[] uv, int[] triangles, int sortingOrderOffset) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.material = material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material4;
		__this->___material_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_3), (void*)L_0);
		// this.vertices = vertices;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___vertices5;
		__this->___vertices_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices_4), (void*)L_1);
		// this.uv = uv;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = ___uv6;
		__this->___uv_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uv_5), (void*)L_2);
		// this.triangles = triangles;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___triangles7;
		__this->___triangles_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___triangles_6), (void*)L_3);
		// mesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_4, NULL);
		__this->___mesh_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_7), (void*)L_4);
		// mesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = __this->___mesh_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = ___vertices5;
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_5, L_6, NULL);
		// mesh.uv = uv;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = __this->___mesh_7;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_8 = ___uv6;
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_7, L_8, NULL);
		// mesh.triangles = triangles;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = __this->___mesh_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___triangles7;
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_9, L_10, NULL);
		// gameObject = new GameObject("Mesh", typeof(MeshFilter), typeof(MeshRenderer));
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = L_11;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_14);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_15 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0(L_18, _stringLiteral6483891A6A7C10989F9CCB88DB7077ED5EADC821, L_15, NULL);
		__this->___gameObject_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObject_1), (void*)L_18);
		// gameObject.transform.parent = parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___gameObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = ___parent0;
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_20, L_21, NULL);
		// gameObject.transform.localPosition = localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___gameObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___localPosition1;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_23, L_24, NULL);
		// gameObject.transform.localScale = localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___gameObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___localScale2;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_26, L_27, NULL);
		// gameObject.transform.localEulerAngles = new Vector3(0, 0, eulerZ);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___gameObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		float L_30 = ___eulerZ3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (0.0f), (0.0f), L_30, /*hidden argument*/NULL);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_29, L_31, NULL);
		// gameObject.GetComponent<MeshFilter>().mesh = mesh;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___gameObject_1;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_33;
		L_33 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_32, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_34 = __this->___mesh_7;
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_33, L_34, NULL);
		// gameObject.GetComponent<MeshRenderer>().material = material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___gameObject_1;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_36;
		L_36 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_35, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = ___material4;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_36, L_37, NULL);
		// transform = gameObject.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___gameObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		__this->___transform_2 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transform_2), (void*)L_39);
		// SetSortingOrderOffset(sortingOrderOffset);
		int32_t L_40 = ___sortingOrderOffset8;
		World_Mesh_SetSortingOrderOffset_m27C1E68C6775B055EB3214093B8F76C6B6614A4F(__this, L_40, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 CodeMonkey.Utils.World_Mesh::ConvertPixelsToUVCoordinates(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 World_Mesh_ConvertPixelsToUVCoordinates_m21D91264C8B7C74BC44135FFA441E72E459637F4 (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, int32_t ___x0, int32_t ___y1, int32_t ___textureWidth2, int32_t ___textureHeight3, const RuntimeMethod* method) 
{
	{
		// return new Vector2((float)x / textureWidth, (float)y / textureHeight);
		int32_t L_0 = ___x0;
		int32_t L_1 = ___textureWidth2;
		int32_t L_2 = ___y1;
		int32_t L_3 = ___textureHeight3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((float)(((float)L_0)/((float)L_1))), ((float)(((float)L_2)/((float)L_3))), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2[] CodeMonkey.Utils.World_Mesh::GetUVRectangleFromPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* World_Mesh_GetUVRectangleFromPixels_m146F35E9225611C31A1CDBDC55CE46E5C3D178F1 (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___textureWidth4, int32_t ___textureHeight5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vector2[] {
		//     ConvertPixelsToUVCoordinates(x, y + height, textureWidth, textureHeight),
		//     ConvertPixelsToUVCoordinates(x + width, y + height, textureWidth, textureHeight),
		//     ConvertPixelsToUVCoordinates(x, y, textureWidth, textureHeight),
		//     ConvertPixelsToUVCoordinates(x + width, y, textureWidth, textureHeight)
		// };
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = L_0;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		int32_t L_4 = ___height3;
		int32_t L_5 = ___textureWidth4;
		int32_t L_6 = ___textureHeight5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = World_Mesh_ConvertPixelsToUVCoordinates_m21D91264C8B7C74BC44135FFA441E72E459637F4(__this, L_2, ((int32_t)il2cpp_codegen_add(L_3, L_4)), L_5, L_6, NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_7);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_8 = L_1;
		int32_t L_9 = ___x0;
		int32_t L_10 = ___width2;
		int32_t L_11 = ___y1;
		int32_t L_12 = ___height3;
		int32_t L_13 = ___textureWidth4;
		int32_t L_14 = ___textureHeight5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = World_Mesh_ConvertPixelsToUVCoordinates_m21D91264C8B7C74BC44135FFA441E72E459637F4(__this, ((int32_t)il2cpp_codegen_add(L_9, L_10)), ((int32_t)il2cpp_codegen_add(L_11, L_12)), L_13, L_14, NULL);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_15);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_16 = L_8;
		int32_t L_17 = ___x0;
		int32_t L_18 = ___y1;
		int32_t L_19 = ___textureWidth4;
		int32_t L_20 = ___textureHeight5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = World_Mesh_ConvertPixelsToUVCoordinates_m21D91264C8B7C74BC44135FFA441E72E459637F4(__this, L_17, L_18, L_19, L_20, NULL);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_21);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_22 = L_16;
		int32_t L_23 = ___x0;
		int32_t L_24 = ___width2;
		int32_t L_25 = ___y1;
		int32_t L_26 = ___textureWidth4;
		int32_t L_27 = ___textureHeight5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = World_Mesh_ConvertPixelsToUVCoordinates_m21D91264C8B7C74BC44135FFA441E72E459637F4(__this, ((int32_t)il2cpp_codegen_add(L_23, L_24)), L_25, L_26, L_27, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_28);
		return L_22;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::ApplyUVToUVArray(UnityEngine.Vector2[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_ApplyUVToUVArray_mD8B0F0CE9C13E8476CCDF4D0D60111756D6138EC (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uv0, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** ___mainUV1, const RuntimeMethod* method) 
{
	{
		// if (uv == null || uv.Length < 4 || mainUV == null || mainUV.Length < 4) throw new System.Exception();
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___uv0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = ___uv0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) < ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** L_2 = ___mainUV1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = *((Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA**)L_2);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** L_4 = ___mainUV1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = *((Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA**)L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_0014:
	{
		// if (uv == null || uv.Length < 4 || mainUV == null || mainUV.Length < 4) throw new System.Exception();
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&World_Mesh_ApplyUVToUVArray_mD8B0F0CE9C13E8476CCDF4D0D60111756D6138EC_RuntimeMethod_var)));
	}

IL_001a:
	{
		// mainUV[0] = uv[0];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** L_7 = ___mainUV1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_8 = *((Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA**)L_7);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9 = ___uv0;
		int32_t L_10 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_11);
		// mainUV[1] = uv[1];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** L_12 = ___mainUV1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13 = *((Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA**)L_12);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_14 = ___uv0;
		int32_t L_15 = 1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_16);
		// mainUV[2] = uv[2];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** L_17 = ___mainUV1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_18 = *((Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA**)L_17);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_19 = ___uv0;
		int32_t L_20 = 2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_21);
		// mainUV[3] = uv[3];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** L_22 = ___mainUV1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_23 = *((Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA**)L_22);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_24 = ___uv0;
		int32_t L_25 = 3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_26);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::SetUVCoords(CodeMonkey.Utils.World_Mesh/UVCoords)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_SetUVCoords_m38667B11F6AE89956B3219386CD1C7C3F41F09FE (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* ___uvCoords0, const RuntimeMethod* method) 
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	{
		// Vector2[] uvArray = GetUVRectangleFromPixels(uvCoords.x, uvCoords.y, uvCoords.width, uvCoords.height, material.mainTexture.width, material.mainTexture.height);
		UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* L_0 = ___uvCoords0;
		int32_t L_1 = L_0->___x_0;
		UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* L_2 = ___uvCoords0;
		int32_t L_3 = L_2->___y_1;
		UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* L_4 = ___uvCoords0;
		int32_t L_5 = L_4->___width_2;
		UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* L_6 = ___uvCoords0;
		int32_t L_7 = L_6->___height_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___material_3;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_9;
		L_9 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_8, NULL);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___material_3;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12;
		L_12 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_11, NULL);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_12);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_14;
		L_14 = World_Mesh_GetUVRectangleFromPixels_m146F35E9225611C31A1CDBDC55CE46E5C3D178F1(__this, L_1, L_3, L_5, L_7, L_10, L_13, NULL);
		V_0 = L_14;
		// ApplyUVToUVArray(uvArray, ref uv);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_15 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** L_16 = (&__this->___uv_5);
		World_Mesh_ApplyUVToUVArray_mD8B0F0CE9C13E8476CCDF4D0D60111756D6138EC(__this, L_15, L_16, NULL);
		// mesh.uv = uv;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_17 = __this->___mesh_7;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_18 = __this->___uv_5;
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_17, L_18, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::SetSortingOrderOffset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_SetSortingOrderOffset_m27C1E68C6775B055EB3214093B8F76C6B6614A4F (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, int32_t ___sortingOrderOffset0, const RuntimeMethod* method) 
{
	{
		// SetSortingOrder(GetSortingOrder(gameObject.transform.position, sortingOrderOffset));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		int32_t L_3 = ___sortingOrderOffset0;
		int32_t L_4;
		L_4 = World_Mesh_GetSortingOrder_mF853E984ABD8A16C73056F92ADBB583480A39FA0(L_2, L_3, ((int32_t)5000), NULL);
		World_Mesh_SetSortingOrder_m5D22AEBB1E4E4CF9DF27D7014CD3367CA5535F99(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::SetSortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_SetSortingOrder_m5D22AEBB1E4E4CF9DF27D7014CD3367CA5535F99 (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, int32_t ___sortingOrder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<Renderer>().sortingOrder = sortingOrder;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_0, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		int32_t L_2 = ___sortingOrder0;
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::SetLocalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_SetLocalScale_mC4FBBDA18A670774F3FBEEB01ACE10A310D859FD (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale0, const RuntimeMethod* method) 
{
	{
		// transform.localScale = localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___localScale0;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::SetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_SetPosition_m800BD5496057DCF33978D4921B1C0EDE98217DAE (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition0, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___localPosition0;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::AddPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_AddPosition_mEF5C6EFE20D684D0272AFFCB9484D50D5B4D0862 (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___addPosition0, const RuntimeMethod* method) 
{
	{
		// transform.localPosition += addPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___addPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_3, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_4, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 CodeMonkey.Utils.World_Mesh::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 World_Mesh_GetPosition_mEDD24EAC5D869AC504A79E4622B271E0E8ED3A4D (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, const RuntimeMethod* method) 
{
	{
		// return transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		return L_1;
	}
}
// System.Int32 CodeMonkey.Utils.World_Mesh::GetSortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t World_Mesh_GetSortingOrder_m73DB39D35B85D92EB82E241B1C80F3D8B1CE8CB8 (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gameObject.GetComponent<Renderer>().sortingOrder;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_0, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA(L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Mesh CodeMonkey.Utils.World_Mesh::GetMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* World_Mesh_GetMesh_mF68F5CAEAEA8675C2692EA24DFF4204A51F56986 (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, const RuntimeMethod* method) 
{
	{
		// return mesh;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___mesh_7;
		return L_0;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_Show_m83E4F59FCD37B9F9872DF5CC507856155297A613 (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_Hide_m816C069D87CF87B38344F108734D0F26AA73618B (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::DestroySelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_DestroySelf_mDC3197AB2FE496975F37BEF6E6AE5883B99BA9D5 (World_Mesh_tD10D5B29A7CE4671FFE4AC20A4E6C0A1EB42010C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Object.Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Mesh::CreateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Mesh_CreateMesh_mFBFF0E10F966C7259F85F1C6A9247226FFDF52A2 (const RuntimeMethod* method) 
{
	{
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
// System.Void CodeMonkey.Utils.World_Mesh/UVCoords::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UVCoords__ctor_m592D368FFD9BD6BB2025850D1C21BF0EBF2B45AD (UVCoords_t056C8426141EC2E056A04F2E0E441BF4D8C581AD* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) 
{
	{
		// public UVCoords(int x, int y, int width, int height) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.x = x;
		int32_t L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		int32_t L_1 = ___y1;
		__this->___y_1 = L_1;
		// this.width = width;
		int32_t L_2 = ___width2;
		__this->___width_2 = L_2;
		// this.height = height;
		int32_t L_3 = ___height3;
		__this->___height_3 = L_3;
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
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::CreateDebugButton(UnityEngine.Vector3,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* World_Sprite_CreateDebugButton_m9DB47DF4C869BED9F3ACBF466FB27A01930EC16C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___ClickFunc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// World_Sprite worldSprite = new World_Sprite(null, position, new Vector3(10, 10), Assets.i.s_White, Color.green, sortingOrderDefault);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_1), (10.0f), (10.0f), /*hidden argument*/NULL);
		Assets_t094110F45CF338D6C1309600CBB41ADFEE6D9BD8* L_2;
		L_2 = Assets_get_i_m4A42E1AB09943A5C048F92386E5EF50D7375A79F(NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = L_2->___s_White_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_5 = (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C*)il2cpp_codegen_object_new(World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		World_Sprite__ctor_mA306B58B23920F53E4A71402F5C0F56DA299D5D3(L_5, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_0, L_1, L_3, L_4, ((int32_t)5000), NULL);
		// worldSprite.AddButton(ClickFunc, null, null);
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_6 = L_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___ClickFunc1;
		Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* L_8;
		L_8 = World_Sprite_AddButton_mF66C0B68E412740A468803C3B194161C008D429C(L_6, L_7, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// return worldSprite;
		return L_6;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::CreateDebugButton(UnityEngine.Transform,UnityEngine.Vector3,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* World_Sprite_CreateDebugButton_m43B00FA20C178DB1BD0D4C6A091F359EA71648A0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___ClickFunc2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// World_Sprite worldSprite = new World_Sprite(parent, localPosition, new Vector3(10, 10), Assets.i.s_White, Color.green, sortingOrderDefault);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___parent0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___localPosition1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_2), (10.0f), (10.0f), /*hidden argument*/NULL);
		Assets_t094110F45CF338D6C1309600CBB41ADFEE6D9BD8* L_3;
		L_3 = Assets_get_i_m4A42E1AB09943A5C048F92386E5EF50D7375A79F(NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = L_3->___s_White_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_6 = (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C*)il2cpp_codegen_object_new(World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		World_Sprite__ctor_mA306B58B23920F53E4A71402F5C0F56DA299D5D3(L_6, L_0, L_1, L_2, L_4, L_5, ((int32_t)5000), NULL);
		// worldSprite.AddButton(ClickFunc, null, null);
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_7 = L_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___ClickFunc2;
		Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* L_9;
		L_9 = World_Sprite_AddButton_mF66C0B68E412740A468803C3B194161C008D429C(L_7, L_8, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// return worldSprite;
		return L_7;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::CreateDebugButton(UnityEngine.Transform,UnityEngine.Vector3,System.String,System.Action,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* World_Sprite_CreateDebugButton_m60074645C783C289161AF31F96BC9232F72383F0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition1, String_t* ___text2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___ClickFunc3, int32_t ___fontSize4, float ___paddingX5, float ___paddingY6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CCreateDebugButtonU3Eb__0_m455726DA61D303C270E2610F4469A68B57729E39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CCreateDebugButtonU3Eb__1_mE1B128289EA32AC1D20DFBF95EE86C1323993111_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE2AA3A701649CC43A2E9341CC61243714522AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6A3463C3F0A237C6D59BD191E963BE8C8E0E6D3);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* L_0 = (U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_m9FCFEDD40673D9CC4757CBB96F17F2F9D421D99D(L_0, NULL);
		V_0 = L_0;
		// GameObject gameObject = new GameObject("DebugButton");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, _stringLiteralF6A3463C3F0A237C6D59BD191E963BE8C8E0E6D3, NULL);
		V_1 = L_1;
		// gameObject.transform.parent = parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___parent0;
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_3, L_4, NULL);
		// gameObject.transform.localPosition = localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___localPosition1;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
		// TextMesh textMesh = UtilsClass.CreateWorldText(text, gameObject.transform, Vector3.zero, fontSize, Color.white, TextAnchor.MiddleCenter, TextAlignment.Center, 20000);
		String_t* L_8 = ___text2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		int32_t L_12 = ___fontSize4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3((&L_14), L_13, /*hidden argument*/Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_15;
		L_15 = UtilsClass_CreateWorldText_mBE21C4CA4BD5C18E4762E602C87F58B143E89714(L_8, L_10, L_11, L_12, L_14, 4, 1, ((int32_t)20000), NULL);
		// Bounds rendererBounds = textMesh.GetComponent<MeshRenderer>().bounds;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_16;
		L_16 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_15, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_17;
		L_17 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_16, NULL);
		V_2 = L_17;
		// Color color = UtilsClass.GetColorFromString("00BA00FF");
		U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* L_18 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = UtilsClass_GetColorFromString_m815C463677F1522B3F99128679B18E87AC9ACBD9(_stringLiteral9FE2AA3A701649CC43A2E9341CC61243714522AC, NULL);
		L_18->___color_2 = L_19;
		// if (color.r >= 1f) color.r = .9f;
		U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* L_20 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_21 = (&L_20->___color_2);
		float L_22 = L_21->___r_0;
		if ((!(((float)L_22) >= ((float)(1.0f)))))
		{
			goto IL_008a;
		}
	}
	{
		// if (color.r >= 1f) color.r = .9f;
		U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* L_23 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_24 = (&L_23->___color_2);
		L_24->___r_0 = (0.899999976f);
	}

IL_008a:
	{
		// if (color.g >= 1f) color.g = .9f;
		U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* L_25 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_26 = (&L_25->___color_2);
		float L_27 = L_26->___g_1;
		if ((!(((float)L_27) >= ((float)(1.0f)))))
		{
			goto IL_00ac;
		}
	}
	{
		// if (color.g >= 1f) color.g = .9f;
		U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* L_28 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_29 = (&L_28->___color_2);
		L_29->___g_1 = (0.899999976f);
	}

IL_00ac:
	{
		// if (color.b >= 1f) color.b = .9f;
		U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* L_30 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_31 = (&L_30->___color_2);
		float L_32 = L_31->___b_2;
		if ((!(((float)L_32) >= ((float)(1.0f)))))
		{
			goto IL_00ce;
		}
	}
	{
		// if (color.b >= 1f) color.b = .9f;
		U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* L_33 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_34 = (&L_33->___color_2);
		L_34->___b_2 = (0.899999976f);
	}

IL_00ce:
	{
		// Color colorOver = color * 1.1f; // button over color lighter
		U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* L_35 = V_0;
		U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* L_36 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = L_36->___color_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_37, (1.10000002f), NULL);
		L_35->___colorOver_1 = L_38;
		// World_Sprite worldSprite = new World_Sprite(gameObject.transform, Vector3.zero, rendererBounds.size + new Vector3(paddingX, paddingY), Assets.i.s_White, color, sortingOrderDefault);
		U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* L_39 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_2), NULL);
		float L_44 = ___paddingX5;
		float L_45 = ___paddingY6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_46), L_44, L_45, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_43, L_46, NULL);
		Assets_t094110F45CF338D6C1309600CBB41ADFEE6D9BD8* L_48;
		L_48 = Assets_get_i_m4A42E1AB09943A5C048F92386E5EF50D7375A79F(NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_49 = L_48->___s_White_5;
		U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* L_50 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_51 = L_50->___color_2;
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_52 = (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C*)il2cpp_codegen_object_new(World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		World_Sprite__ctor_mA306B58B23920F53E4A71402F5C0F56DA299D5D3(L_52, L_41, L_42, L_47, L_49, L_51, ((int32_t)5000), NULL);
		L_39->___worldSprite_0 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&L_39->___worldSprite_0), (void*)L_52);
		// worldSprite.AddButton(ClickFunc, () => worldSprite.SetColor(colorOver), () => worldSprite.SetColor(color));
		U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* L_53 = V_0;
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_54 = L_53->___worldSprite_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_55 = ___ClickFunc3;
		U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* L_56 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_57 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_57, L_56, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CCreateDebugButtonU3Eb__0_m455726DA61D303C270E2610F4469A68B57729E39_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* L_58 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_59 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_59, L_58, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CCreateDebugButtonU3Eb__1_mE1B128289EA32AC1D20DFBF95EE86C1323993111_RuntimeMethod_var), NULL);
		Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* L_60;
		L_60 = World_Sprite_AddButton_mF66C0B68E412740A468803C3B194161C008D429C(L_54, L_55, L_57, L_59, NULL);
		// return worldSprite;
		U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* L_61 = V_0;
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_62 = L_61->___worldSprite_0;
		return L_62;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Sprite,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* World_Sprite_Create_mEA555F7B9E655856811FFE120F719D2144B9DF5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale2, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite3, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color4, int32_t ___sortingOrderOffset5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Sprite(parent, localPosition, localScale, sprite, color, sortingOrderOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___parent0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___localPosition1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___localScale2;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = ___sprite3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___color4;
		int32_t L_5 = ___sortingOrderOffset5;
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_6 = (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C*)il2cpp_codegen_object_new(World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		World_Sprite__ctor_mA306B58B23920F53E4A71402F5C0F56DA299D5D3(L_6, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Sprite,System.Nullable`1<UnityEngine.Color>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* World_Sprite_Create_m116B86F16492DDB0EF7B76B31808504FDA3129B4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale2, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite3, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___color4, int32_t ___sortingOrderOffset5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sprite == null) {
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___sprite3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// sprite = Assets.i.s_White;
		Assets_t094110F45CF338D6C1309600CBB41ADFEE6D9BD8* L_2;
		L_2 = Assets_get_i_m4A42E1AB09943A5C048F92386E5EF50D7375A79F(NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = L_2->___s_White_5;
		___sprite3 = L_3;
	}

IL_0015:
	{
		// if (color == null) {
		bool L_4;
		L_4 = Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_inline((&___color4), Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		// color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3((&___color4), L_5, Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
	}

IL_002a:
	{
		// return new World_Sprite(parent, localPosition, localScale, sprite, (Color)color, sortingOrderOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___parent0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___localPosition1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___localScale2;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = ___sprite3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637((&___color4), Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		int32_t L_11 = ___sortingOrderOffset5;
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_12 = (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C*)il2cpp_codegen_object_new(World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		World_Sprite__ctor_mA306B58B23920F53E4A71402F5C0F56DA299D5D3(L_12, L_6, L_7, L_8, L_9, L_10, L_11, NULL);
		return L_12;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Vector3,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* World_Sprite_Create_mA38922792210B4D309AD3FA639F5294E0CF3E101 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Sprite(null, worldPosition, new Vector3(1, 1, 1), sprite, Color.white, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___worldPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___sprite1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_4 = (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C*)il2cpp_codegen_object_new(World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		World_Sprite__ctor_mA306B58B23920F53E4A71402F5C0F56DA299D5D3(L_4, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_0, L_1, L_2, L_3, 0, NULL);
		return L_4;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Sprite,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* World_Sprite_Create_m2CFB689D84E1A153F47CA5564BB2718B17C87D26 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale1, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color3, int32_t ___sortingOrderOffset4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Sprite(null, worldPosition, localScale, sprite, color, sortingOrderOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___worldPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___localScale1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___sprite2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___color3;
		int32_t L_4 = ___sortingOrderOffset4;
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_5 = (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C*)il2cpp_codegen_object_new(World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		World_Sprite__ctor_mA306B58B23920F53E4A71402F5C0F56DA299D5D3(L_5, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Sprite,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* World_Sprite_Create_m9A823AD2F690CFA37F13560779D378C5F2D215F5 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale1, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Sprite(null, worldPosition, localScale, sprite, color, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___worldPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___localScale1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___sprite2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___color3;
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_4 = (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C*)il2cpp_codegen_object_new(World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		World_Sprite__ctor_mA306B58B23920F53E4A71402F5C0F56DA299D5D3(L_4, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_0, L_1, L_2, L_3, 0, NULL);
		return L_4;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* World_Sprite_Create_m0CC0747CD94882E1630FD24AA75119E8CC06C61F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Sprite(null, worldPosition, localScale, Assets.i.s_White, color, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___worldPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___localScale1;
		Assets_t094110F45CF338D6C1309600CBB41ADFEE6D9BD8* L_2;
		L_2 = Assets_get_i_m4A42E1AB09943A5C048F92386E5EF50D7375A79F(NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = L_2->___s_White_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___color2;
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_5 = (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C*)il2cpp_codegen_object_new(World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		World_Sprite__ctor_mA306B58B23920F53E4A71402F5C0F56DA299D5D3(L_5, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_0, L_1, L_3, L_4, 0, NULL);
		return L_5;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* World_Sprite_Create_m0B8AF63E6A8C8CC62F1ED61F06E3EC703BE8D60A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, int32_t ___sortingOrderOffset3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Sprite(null, worldPosition, localScale, Assets.i.s_White, color, sortingOrderOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___worldPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___localScale1;
		Assets_t094110F45CF338D6C1309600CBB41ADFEE6D9BD8* L_2;
		L_2 = Assets_get_i_m4A42E1AB09943A5C048F92386E5EF50D7375A79F(NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = L_2->___s_White_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___color2;
		int32_t L_5 = ___sortingOrderOffset3;
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_6 = (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C*)il2cpp_codegen_object_new(World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		World_Sprite__ctor_mA306B58B23920F53E4A71402F5C0F56DA299D5D3(L_6, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_0, L_1, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* World_Sprite_Create_m9BC9969911D1721A9FAE9C8947359854BB7A789F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Sprite(null, worldPosition, localScale, Assets.i.s_White, Color.white, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___worldPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___localScale1;
		Assets_t094110F45CF338D6C1309600CBB41ADFEE6D9BD8* L_2;
		L_2 = Assets_get_i_m4A42E1AB09943A5C048F92386E5EF50D7375A79F(NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = L_2->___s_White_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_5 = (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C*)il2cpp_codegen_object_new(World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		World_Sprite__ctor_mA306B58B23920F53E4A71402F5C0F56DA299D5D3(L_5, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_0, L_1, L_3, L_4, 0, NULL);
		return L_5;
	}
}
// CodeMonkey.Utils.World_Sprite CodeMonkey.Utils.World_Sprite::Create(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* World_Sprite_Create_m6E0530BED16F134656DFEB98CF1F07D9741D8C8D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale1, int32_t ___sortingOrderOffset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new World_Sprite(null, worldPosition, localScale, Assets.i.s_White, Color.white, sortingOrderOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___worldPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___localScale1;
		Assets_t094110F45CF338D6C1309600CBB41ADFEE6D9BD8* L_2;
		L_2 = Assets_get_i_m4A42E1AB09943A5C048F92386E5EF50D7375A79F(NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = L_2->___s_White_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		int32_t L_5 = ___sortingOrderOffset2;
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_6 = (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C*)il2cpp_codegen_object_new(World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C_il2cpp_TypeInfo_var);
		World_Sprite__ctor_mA306B58B23920F53E4A71402F5C0F56DA299D5D3(L_6, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, L_0, L_1, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Int32 CodeMonkey.Utils.World_Sprite::GetSortingOrder(UnityEngine.Vector3,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t World_Sprite_GetSortingOrder_mBEA705042B2675096178B82606ED3AD6E31FDE25 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, int32_t ___offset1, int32_t ___baseSortingOrder2, const RuntimeMethod* method) 
{
	{
		// return (int)(baseSortingOrder - position.y) + offset;
		int32_t L_0 = ___baseSortingOrder2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position0;
		float L_2 = L_1.___y_3;
		int32_t L_3 = ___offset1;
		return ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)L_0), L_2))), L_3));
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::.ctor(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Sprite,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite__ctor_mA306B58B23920F53E4A71402F5C0F56DA299D5D3 (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale2, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite3, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color4, int32_t ___sortingOrderOffset5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DD2D44571F44B6F1140AB52193761B47728B9B);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// public World_Sprite(Transform parent, Vector3 localPosition, Vector3 localScale, Sprite sprite, Color color, int sortingOrderOffset) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Vector3 position = localPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___localPosition1;
		V_0 = L_0;
		// if (parent != null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___parent0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// position = parent.TransformPoint(position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___parent0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_3, L_4, NULL);
		V_0 = L_5;
	}

IL_0019:
	{
		// int sortingOrder = GetSortingOrder(position, sortingOrderOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		int32_t L_7 = ___sortingOrderOffset5;
		int32_t L_8;
		L_8 = World_Sprite_GetSortingOrder_mBEA705042B2675096178B82606ED3AD6E31FDE25(L_6, L_7, ((int32_t)5000), NULL);
		V_1 = L_8;
		// gameObject = UtilsClass.CreateWorldSprite(parent, "Sprite", sprite, localPosition, localScale, sortingOrder, color);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___parent0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = ___sprite3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___localPosition1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___localScale2;
		int32_t L_13 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___color4;
		il2cpp_codegen_runtime_class_init_inline(UtilsClass_tC53C875973C67D740ECE5CA18BB761138E3FB045_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = UtilsClass_CreateWorldSprite_mF7841E87D90EEA93D9400723FE9572608122F7FE(L_9, _stringLiteral75DD2D44571F44B6F1140AB52193761B47728B9B, L_10, L_11, L_12, L_13, L_14, NULL);
		__this->___gameObject_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObject_1), (void*)L_15);
		// transform = gameObject.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___gameObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		__this->___transform_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transform_2), (void*)L_17);
		// spriteRenderer = gameObject.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___gameObject_1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_19;
		L_19 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_18, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___spriteRenderer_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_3), (void*)L_19);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetActive_m02F6CD24792CDFA5B2CFA7A9BE1BC3BC8C9CCD86 (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, bool ___isActive0, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(isActive);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		bool L_1 = ___isActive0;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.SpriteRenderer CodeMonkey.Utils.World_Sprite::GetSpriteRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* World_Sprite_GetSpriteRenderer_mBEB3A2E347F407E162D762A2C2380E945259D1EF (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, const RuntimeMethod* method) 
{
	{
		// return spriteRenderer;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___spriteRenderer_3;
		return L_0;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetName_mD6A151BE9EE70E1940D20A51915F4A6484C67FB7 (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// gameObject.name = name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		String_t* L_1 = ___name0;
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetSortingOrderOffset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetSortingOrderOffset_m83031187AC8FE4CE4FF01436C0771E92E159714A (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, int32_t ___sortingOrderOffset0, const RuntimeMethod* method) 
{
	{
		// SetSortingOrder(GetSortingOrder(gameObject.transform.position, sortingOrderOffset));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		int32_t L_3 = ___sortingOrderOffset0;
		int32_t L_4;
		L_4 = World_Sprite_GetSortingOrder_mBEA705042B2675096178B82606ED3AD6E31FDE25(L_2, L_3, ((int32_t)5000), NULL);
		World_Sprite_SetSortingOrder_mCC09AB98AC0B066540BC34E5C215D5DFD551338B(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetSortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetSortingOrder_mCC09AB98AC0B066540BC34E5C215D5DFD551338B (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, int32_t ___sortingOrder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<SpriteRenderer>().sortingOrder = sortingOrder;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_0, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		int32_t L_2 = ___sortingOrder0;
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetSortingLayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetSortingLayerName_mC797FF8D728F7CE5C90C9B58D06092AD45724E5A (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, String_t* ___layerName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<SpriteRenderer>().sortingLayerName = layerName;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_0, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		String_t* L_2 = ___layerName0;
		Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Int32 CodeMonkey.Utils.World_Sprite::GetSortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t World_Sprite_GetSortingOrder_m67342FC9FBFAA9FC79F2FB439BF9A4ADC667A1DE (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gameObject.GetComponent<SpriteRenderer>().sortingOrder;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_0, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA(L_1, NULL);
		return L_2;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetParent(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetParent_m1E98DF5C22E311CE2B47D8B9683C086873E7781A (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parentGameObject0, const RuntimeMethod* method) 
{
	{
		// SetParent(parentGameObject.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___parentGameObject0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		World_Sprite_SetParent_m0DAA30532DF3EAEB1EA9868837FC78CAF9C3C33B(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetParent_m0DAA30532DF3EAEB1EA9868837FC78CAF9C3C33B (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, const RuntimeMethod* method) 
{
	{
		// transform.parent = parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___parent0;
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetLocalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetLocalScale_mEC2589E7AB9FFA42558CE83B2D13D7156757F02C (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale0, const RuntimeMethod* method) 
{
	{
		// transform.localScale = localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___localScale0;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetPosition_m0F8D7935A8FBEB7571F6EAB42BFAE827C4BEF301 (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition0, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___localPosition0;
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetPosition(System.Func`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetPosition_mA8016851AE15765A9F642E63AF02F8E28DBE7D01 (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* ___getLocalPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_U3CSetPositionU3Eb__0_mD5788978D46B8970D0E8ACFAEFDEB60A45DC6965_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_t37A8552E8C464CCB67C8D89370738DE9A2F2159D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass29_0_t37A8552E8C464CCB67C8D89370738DE9A2F2159D* L_0 = (U3CU3Ec__DisplayClass29_0_t37A8552E8C464CCB67C8D89370738DE9A2F2159D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass29_0_t37A8552E8C464CCB67C8D89370738DE9A2F2159D_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass29_0__ctor_mBB55C6C555FE9CA7C791C0166613D0E8D96006A6(L_0, NULL);
		U3CU3Ec__DisplayClass29_0_t37A8552E8C464CCB67C8D89370738DE9A2F2159D* L_1 = L_0;
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass29_0_t37A8552E8C464CCB67C8D89370738DE9A2F2159D* L_2 = L_1;
		Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* L_3 = ___getLocalPosition0;
		L_2->___getLocalPosition_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___getLocalPosition_1), (void*)L_3);
		// FunctionUpdater.Create(() => {
		//     transform.localPosition = getLocalPosition();
		// });
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, L_2, (intptr_t)((void*)U3CU3Ec__DisplayClass29_0_U3CSetPositionU3Eb__0_mD5788978D46B8970D0E8ACFAEFDEB60A45DC6965_RuntimeMethod_var), NULL);
		FunctionUpdater_t44993A7A7DF63EF8B70891E703E1BDDEE287F569* L_5;
		L_5 = FunctionUpdater_Create_m469AB9ACA154A3725CC060FA59F6C9A6E8D15053(L_4, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 CodeMonkey.Utils.World_Sprite::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 World_Sprite_GetPosition_m1F9779EF61EE6EB43C2BC02D8CA6A40CCCA85BF7 (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, const RuntimeMethod* method) 
{
	{
		// return transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 CodeMonkey.Utils.World_Sprite::GetLocalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 World_Sprite_GetLocalScale_m41E023FCCCF676EAD465B69370485AC4A3E0A321 (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, const RuntimeMethod* method) 
{
	{
		// return transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		return L_1;
	}
}
// System.Single CodeMonkey.Utils.World_Sprite::GetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float World_Sprite_GetRotation_mD30065DFABB7222FB2567EB072280553BF2F3C93 (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, const RuntimeMethod* method) 
{
	{
		// return transform.localEulerAngles.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_0, NULL);
		float L_2 = L_1.___z_4;
		return L_2;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetRotation_mAF2A2EA064B136AE3DB328F172DFF77AA69239F8 (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, float ___rotation0, const RuntimeMethod* method) 
{
	{
		// transform.localEulerAngles = new Vector3(0, 0, rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_2;
		float L_1 = ___rotation0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetColor_m83FE6CA29FC8814A281BB32698B63796E07D1016 (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	{
		// spriteRenderer.color = color;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___spriteRenderer_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___color0;
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetSprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetSprite_m568C2AF040B9D1CD7C8EEAE1EBAD37039090AD06 (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite0, const RuntimeMethod* method) 
{
	{
		// spriteRenderer.sprite = sprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___spriteRenderer_3;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___sprite0;
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::SetFlip(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_SetFlip_m2AB6C07C791CB0236D57DC1DF10B8B9BC6FDC544 (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, bool ___flipX0, bool ___flipY1, const RuntimeMethod* method) 
{
	{
		// spriteRenderer.flipX = flipX;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___spriteRenderer_3;
		bool L_1 = ___flipX0;
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_0, L_1, NULL);
		// spriteRenderer.flipY = flipY;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___spriteRenderer_3;
		bool L_3 = ___flipY1;
		SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_Show_m085F8968CCDE257B6809D3230BA0933D22640929 (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_Hide_m939E9992327F2E9A4E9C75B54B6B30D25C5FB307 (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// CodeMonkey.Utils.Button_Sprite CodeMonkey.Utils.World_Sprite::AddButton(System.Action,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* World_Sprite_AddButton_mF66C0B68E412740A468803C3B194161C008D429C (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___ClickFunc0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MouseOverOnceFunc1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___MouseOutOnceFunc2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m269F530A27F1496AA2C27915AA02DBC4BDF0EB69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisButton_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD_m6734F4E98F0078DF42223478E9710D0B0F095697_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* V_0 = NULL;
	{
		// gameObject.AddComponent<BoxCollider2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1;
		L_1 = GameObject_AddComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m269F530A27F1496AA2C27915AA02DBC4BDF0EB69(L_0, GameObject_AddComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m269F530A27F1496AA2C27915AA02DBC4BDF0EB69_RuntimeMethod_var);
		// Button_Sprite buttonSprite = gameObject.AddComponent<Button_Sprite>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___gameObject_1;
		Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* L_3;
		L_3 = GameObject_AddComponent_TisButton_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD_m6734F4E98F0078DF42223478E9710D0B0F095697(L_2, GameObject_AddComponent_TisButton_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD_m6734F4E98F0078DF42223478E9710D0B0F095697_RuntimeMethod_var);
		V_0 = L_3;
		// if (ClickFunc != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___ClickFunc0;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// buttonSprite.ClickFunc = ClickFunc;
		Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___ClickFunc0;
		L_5->___ClickFunc_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___ClickFunc_5), (void*)L_6);
	}

IL_0022:
	{
		// if (MouseOverOnceFunc != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___MouseOverOnceFunc1;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		// buttonSprite.MouseOverOnceFunc = MouseOverOnceFunc;
		Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = ___MouseOverOnceFunc1;
		L_8->___MouseOverOnceFunc_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___MouseOverOnceFunc_11), (void*)L_9);
	}

IL_002c:
	{
		// if (MouseOutOnceFunc != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = ___MouseOutOnceFunc2;
		if (!L_10)
		{
			goto IL_0036;
		}
	}
	{
		// buttonSprite.MouseOutOnceFunc = MouseOutOnceFunc;
		Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* L_11 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = ___MouseOutOnceFunc2;
		L_11->___MouseOutOnceFunc_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___MouseOutOnceFunc_12), (void*)L_12);
	}

IL_0036:
	{
		// return buttonSprite;
		Button_Sprite_t7CFF840F0BA3B40E61521369949877E8DAF293BD* L_13 = V_0;
		return L_13;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite::DestroySelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_Sprite_DestroySelf_m87F203453E0F45194BB4857C128415118F64C7CA (World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameObject_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
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
// System.Void CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m9FCFEDD40673D9CC4757CBB96F17F2F9D421D99D (U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0::<CreateDebugButton>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CCreateDebugButtonU3Eb__0_m455726DA61D303C270E2610F4469A68B57729E39 (U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* __this, const RuntimeMethod* method) 
{
	{
		// worldSprite.AddButton(ClickFunc, () => worldSprite.SetColor(colorOver), () => worldSprite.SetColor(color));
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_0 = __this->___worldSprite_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___colorOver_1;
		World_Sprite_SetColor_m83FE6CA29FC8814A281BB32698B63796E07D1016(L_0, L_1, NULL);
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite/<>c__DisplayClass6_0::<CreateDebugButton>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CCreateDebugButtonU3Eb__1_mE1B128289EA32AC1D20DFBF95EE86C1323993111 (U3CU3Ec__DisplayClass6_0_tB76FD1D500F2A01BB7E0EE4E8574BB3B6FD5520E* __this, const RuntimeMethod* method) 
{
	{
		// worldSprite.AddButton(ClickFunc, () => worldSprite.SetColor(colorOver), () => worldSprite.SetColor(color));
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_0 = __this->___worldSprite_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___color_2;
		World_Sprite_SetColor_m83FE6CA29FC8814A281BB32698B63796E07D1016(L_0, L_1, NULL);
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
// System.Void CodeMonkey.Utils.World_Sprite/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_mBB55C6C555FE9CA7C791C0166613D0E8D96006A6 (U3CU3Ec__DisplayClass29_0_t37A8552E8C464CCB67C8D89370738DE9A2F2159D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void CodeMonkey.Utils.World_Sprite/<>c__DisplayClass29_0::<SetPosition>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CSetPositionU3Eb__0_mD5788978D46B8970D0E8ACFAEFDEB60A45DC6965 (U3CU3Ec__DisplayClass29_0_t37A8552E8C464CCB67C8D89370738DE9A2F2159D* __this, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = getLocalPosition();
		World_Sprite_t5990A672D4CCD6374A021ABEFEC76B985FBF2D9C* L_0 = __this->___U3CU3E4__this_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0->___transform_2;
		Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* L_2 = __this->___getLocalPosition_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Func_1_Invoke_m1CDD0198843EF8947E2C7F333F38C1E36FF3C568_inline(L_2, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_3, NULL);
		// });
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
// CodeMonkey.MonoBehaviours.CameraFollow CodeMonkey.MonoBehaviours.CameraFollow::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* CameraFollow_get_Instance_m378B8D44E8277586FDFF56A42904B451A0865954 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CameraFollow Instance { get; private set; }
		CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* L_0 = ((CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::set_Instance(CodeMonkey.MonoBehaviours.CameraFollow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_set_Instance_mE344454072944ECD3EEF4F31566BA909E13D2AD7 (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CameraFollow Instance { get; private set; }
		CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* L_0 = ___value0;
		((CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::Setup(System.Func`1<UnityEngine.Vector3>,System.Func`1<System.Single>,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Setup_m6258B34D47A91EBAD27EF7C42153E3D344DA186C (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* ___GetCameraFollowPositionFunc0, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___GetCameraZoomFunc1, bool ___teleportToFollowPosition2, bool ___instantZoom3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// this.GetCameraFollowPositionFunc = GetCameraFollowPositionFunc;
		Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* L_0 = ___GetCameraFollowPositionFunc0;
		__this->___GetCameraFollowPositionFunc_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GetCameraFollowPositionFunc_6), (void*)L_0);
		// this.GetCameraZoomFunc = GetCameraZoomFunc;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_1 = ___GetCameraZoomFunc1;
		__this->___GetCameraZoomFunc_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GetCameraZoomFunc_7), (void*)L_1);
		// if (teleportToFollowPosition) {
		bool L_2 = ___teleportToFollowPosition2;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// Vector3 cameraFollowPosition = GetCameraFollowPositionFunc();
		Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* L_3 = ___GetCameraFollowPositionFunc0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Func_1_Invoke_m1CDD0198843EF8947E2C7F333F38C1E36FF3C568_inline(L_3, NULL);
		V_0 = L_4;
		// cameraFollowPosition.z = transform.position.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___z_4;
		(&V_0)->___z_4 = L_7;
		// transform.position = cameraFollowPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_9, NULL);
	}

IL_003b:
	{
		// if (instantZoom) {
		bool L_10 = ___instantZoom3;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		// myCamera.orthographicSize = GetCameraZoomFunc();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = __this->___myCamera_5;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_12 = ___GetCameraZoomFunc1;
		float L_13;
		L_13 = Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline(L_12, NULL);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_11, L_13, NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Awake_m277FB1ED9B763FF0A0EB580325E59FAA90D46842 (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		CameraFollow_set_Instance_mE344454072944ECD3EEF4F31566BA909E13D2AD7_inline(__this, NULL);
		// myCamera = transform.GetComponent<Camera>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_0, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___myCamera_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myCamera_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::SetCameraFollowPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_SetCameraFollowPosition_m57327C396C421B012FDE7C07FF613D160A374B6B (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraFollowPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CSetCameraFollowPositionU3Eb__0_mB1A79B436835B6AE582AEBF7B6003708E0A1B562_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t18A554DDD4B7C5BF9AA26772A2FFAC611BC643ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t18A554DDD4B7C5BF9AA26772A2FFAC611BC643ED* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t18A554DDD4B7C5BF9AA26772A2FFAC611BC643ED* L_0 = (U3CU3Ec__DisplayClass9_0_t18A554DDD4B7C5BF9AA26772A2FFAC611BC643ED*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t18A554DDD4B7C5BF9AA26772A2FFAC611BC643ED_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass9_0__ctor_m63979DCE0477688B73F39CAA3F4582212AA155D3(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t18A554DDD4B7C5BF9AA26772A2FFAC611BC643ED* L_1 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___cameraFollowPosition0;
		L_1->___cameraFollowPosition_0 = L_2;
		// SetGetCameraFollowPositionFunc(() => cameraFollowPosition);
		U3CU3Ec__DisplayClass9_0_t18A554DDD4B7C5BF9AA26772A2FFAC611BC643ED* L_3 = V_0;
		Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* L_4 = (Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC*)il2cpp_codegen_object_new(Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC_il2cpp_TypeInfo_var);
		Func_1__ctor_mD02D4E16AD6700382E279DCC40D3E157B3F3C99E(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CSetCameraFollowPositionU3Eb__0_mB1A79B436835B6AE582AEBF7B6003708E0A1B562_RuntimeMethod_var), NULL);
		CameraFollow_SetGetCameraFollowPositionFunc_mB21622A3C5C5FDB165746D0A1A19BA47237A04B9_inline(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::SetGetCameraFollowPositionFunc(System.Func`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_SetGetCameraFollowPositionFunc_mB21622A3C5C5FDB165746D0A1A19BA47237A04B9 (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* ___GetCameraFollowPositionFunc0, const RuntimeMethod* method) 
{
	{
		// this.GetCameraFollowPositionFunc = GetCameraFollowPositionFunc;
		Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* L_0 = ___GetCameraFollowPositionFunc0;
		__this->___GetCameraFollowPositionFunc_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GetCameraFollowPositionFunc_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::SetCameraZoom(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_SetCameraZoom_mA6EA9ABF41872C1B1649192E05E2AF37082EB6F2 (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, float ___cameraZoom0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CSetCameraZoomU3Eb__0_mA396A71F49D6FA46C3104430D38B9F8ABED32FA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_tFC1AA57A2DB531FD164D68264E1070E3890041EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_tFC1AA57A2DB531FD164D68264E1070E3890041EB* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass11_0_tFC1AA57A2DB531FD164D68264E1070E3890041EB* L_0 = (U3CU3Ec__DisplayClass11_0_tFC1AA57A2DB531FD164D68264E1070E3890041EB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_tFC1AA57A2DB531FD164D68264E1070E3890041EB_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass11_0__ctor_m4EEC54B778970728E1024DE7D7AA16622C62631D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass11_0_tFC1AA57A2DB531FD164D68264E1070E3890041EB* L_1 = V_0;
		float L_2 = ___cameraZoom0;
		L_1->___cameraZoom_0 = L_2;
		// SetGetCameraZoomFunc(() => cameraZoom);
		U3CU3Ec__DisplayClass11_0_tFC1AA57A2DB531FD164D68264E1070E3890041EB* L_3 = V_0;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_4 = (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*)il2cpp_codegen_object_new(Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass11_0_U3CSetCameraZoomU3Eb__0_mA396A71F49D6FA46C3104430D38B9F8ABED32FA2_RuntimeMethod_var), NULL);
		CameraFollow_SetGetCameraZoomFunc_m7F1DBD295E1F4B12609B80A9679A006C7569EF46_inline(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::SetGetCameraZoomFunc(System.Func`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_SetGetCameraZoomFunc_m7F1DBD295E1F4B12609B80A9679A006C7569EF46 (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___GetCameraZoomFunc0, const RuntimeMethod* method) 
{
	{
		// this.GetCameraZoomFunc = GetCameraZoomFunc;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_0 = ___GetCameraZoomFunc0;
		__this->___GetCameraZoomFunc_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GetCameraZoomFunc_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Update_m8884FC1694649B68059D3490CFDB43290091F972 (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, const RuntimeMethod* method) 
{
	{
		// HandleMovement();
		CameraFollow_HandleMovement_m8B6663BC7CA014632EA60EB0A6D2E86C1BD0B69C(__this, NULL);
		// HandleZoom();
		CameraFollow_HandleZoom_m68C0C90BA5202385060E684EE133915187CB3D18(__this, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::HandleMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_HandleMovement_m8B6663BC7CA014632EA60EB0A6D2E86C1BD0B69C (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (GetCameraFollowPositionFunc == null) return;
		Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* L_0 = __this->___GetCameraFollowPositionFunc_6;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (GetCameraFollowPositionFunc == null) return;
		return;
	}

IL_0009:
	{
		// Vector3 cameraFollowPosition = GetCameraFollowPositionFunc();
		Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* L_1 = __this->___GetCameraFollowPositionFunc_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Func_1_Invoke_m1CDD0198843EF8947E2C7F333F38C1E36FF3C568_inline(L_1, NULL);
		V_0 = L_2;
		// cameraFollowPosition.z = transform.position.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___z_4;
		(&V_0)->___z_4 = L_5;
		// Vector3 cameraMoveDir = (cameraFollowPosition - transform.position).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
		V_4 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		V_1 = L_10;
		// float distance = Vector3.Distance(cameraFollowPosition, transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14;
		L_14 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_11, L_13, NULL);
		V_2 = L_14;
		// float cameraMoveSpeed = 3f;
		V_3 = (3.0f);
		// if (distance > 0) {
		float L_15 = V_2;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_00ab;
		}
	}
	{
		// Vector3 newCameraPosition = transform.position + cameraMoveDir * distance * cameraMoveSpeed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		float L_19 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		float L_21 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_21, NULL);
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_24, NULL);
		V_5 = L_25;
		// float distanceAfterMoving = Vector3.Distance(newCameraPosition, cameraFollowPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_0;
		float L_28;
		L_28 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_26, L_27, NULL);
		// if (distanceAfterMoving > distance) {
		float L_29 = V_2;
		if ((!(((float)L_28) > ((float)L_29))))
		{
			goto IL_009e;
		}
	}
	{
		// newCameraPosition = cameraFollowPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		V_5 = L_30;
	}

IL_009e:
	{
		// transform.position = newCameraPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_5;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_31, L_32, NULL);
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::HandleZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_HandleZoom_m68C0C90BA5202385060E684EE133915187CB3D18 (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if (GetCameraZoomFunc == null) return;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_0 = __this->___GetCameraZoomFunc_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (GetCameraZoomFunc == null) return;
		return;
	}

IL_0009:
	{
		// float cameraZoom = GetCameraZoomFunc();
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_1 = __this->___GetCameraZoomFunc_7;
		float L_2;
		L_2 = Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline(L_1, NULL);
		V_0 = L_2;
		// float cameraZoomDifference = cameraZoom - myCamera.orthographicSize;
		float L_3 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___myCamera_5;
		float L_5;
		L_5 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_4, NULL);
		V_1 = ((float)il2cpp_codegen_subtract(L_3, L_5));
		// float cameraZoomSpeed = 1f;
		V_2 = (1.0f);
		// myCamera.orthographicSize += cameraZoomDifference * cameraZoomSpeed * Time.deltaTime;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___myCamera_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = L_6;
		float L_8;
		L_8 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_7, NULL);
		float L_9 = V_1;
		float L_10 = V_2;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_7, ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_9, L_10)), L_11)))), NULL);
		// if (cameraZoomDifference > 0) {
		float L_12 = V_1;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0067;
		}
	}
	{
		// if (myCamera.orthographicSize > cameraZoom) {
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = __this->___myCamera_5;
		float L_14;
		L_14 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_13, NULL);
		float L_15 = V_0;
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_0081;
		}
	}
	{
		// myCamera.orthographicSize = cameraZoom;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___myCamera_5;
		float L_17 = V_0;
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_16, L_17, NULL);
		return;
	}

IL_0067:
	{
		// if (myCamera.orthographicSize < cameraZoom) {
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = __this->___myCamera_5;
		float L_19;
		L_19 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_18, NULL);
		float L_20 = V_0;
		if ((!(((float)L_19) < ((float)L_20))))
		{
			goto IL_0081;
		}
	}
	{
		// myCamera.orthographicSize = cameraZoom;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = __this->___myCamera_5;
		float L_22 = V_0;
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_21, L_22, NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m23C258C611D62778AF3BB54557AB08ED07A47E2A (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m63979DCE0477688B73F39CAA3F4582212AA155D3 (U3CU3Ec__DisplayClass9_0_t18A554DDD4B7C5BF9AA26772A2FFAC611BC643ED* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass9_0::<SetCameraFollowPosition>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec__DisplayClass9_0_U3CSetCameraFollowPositionU3Eb__0_mB1A79B436835B6AE582AEBF7B6003708E0A1B562 (U3CU3Ec__DisplayClass9_0_t18A554DDD4B7C5BF9AA26772A2FFAC611BC643ED* __this, const RuntimeMethod* method) 
{
	{
		// SetGetCameraFollowPositionFunc(() => cameraFollowPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___cameraFollowPosition_0;
		return L_0;
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
// System.Void CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m4EEC54B778970728E1024DE7D7AA16622C62631D (U3CU3Ec__DisplayClass11_0_tFC1AA57A2DB531FD164D68264E1070E3890041EB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single CodeMonkey.MonoBehaviours.CameraFollow/<>c__DisplayClass11_0::<SetCameraZoom>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass11_0_U3CSetCameraZoomU3Eb__0_mA396A71F49D6FA46C3104430D38B9F8ABED32FA2 (U3CU3Ec__DisplayClass11_0_tFC1AA57A2DB531FD164D68264E1070E3890041EB* __this, const RuntimeMethod* method) 
{
	{
		// SetGetCameraZoomFunc(() => cameraZoom);
		float L_0 = __this->___cameraZoom_0;
		return L_0;
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
// System.Void CodeMonkey.MonoBehaviours.CameraFollowSetup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollowSetup_Start_m41F7AFFE72FFC75C790588C84E8F47BF53525611 (CameraFollowSetup_tD16A601426BB7376FE01E38DF536BF39FEF83D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollowSetup_U3CStartU3Eb__3_1_mED77FC11FCCAB18D49B3E928E594749D7CA3C222_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollowSetup_U3CStartU3Eb__3_2_m540829BF425ED218A730F8CC200E4F7ABCF22564_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollowSetup_U3CStartU3Eb__3_3_m890A7ABAABD252271F467D59FDA0B894B313BC05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__3_0_mD29057CA38208214222E1A510D845B751315D96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5906716E1732EB2F39FE489540108B6709839225);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* G_B3_0 = NULL;
	CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* G_B3_1 = NULL;
	Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* G_B2_0 = NULL;
	CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* G_B2_1 = NULL;
	{
		// if (followTransform == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___followTransform_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0051;
		}
	}
	{
		// Debug.LogError("followTransform is null! Intended?");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral5906716E1732EB2F39FE489540108B6709839225, NULL);
		// cameraFollow.Setup(() => Vector3.zero, () => zoom, true, true);
		CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* L_2 = __this->___cameraFollow_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_il2cpp_TypeInfo_var);
		Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* L_3 = ((U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
		Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* L_4 = L_3;
		G_B2_0 = L_4;
		G_B2_1 = L_2;
		if (L_4)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_2;
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_il2cpp_TypeInfo_var);
		U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83* L_5 = ((U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* L_6 = (Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC*)il2cpp_codegen_object_new(Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC_il2cpp_TypeInfo_var);
		Func_1__ctor_mD02D4E16AD6700382E279DCC40D3E157B3F3C99E(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__3_0_mD29057CA38208214222E1A510D845B751315D96E_RuntimeMethod_var), NULL);
		Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* L_7 = L_6;
		((U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_003d:
	{
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_8 = (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*)il2cpp_codegen_object_new(Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71(L_8, __this, (intptr_t)((void*)CameraFollowSetup_U3CStartU3Eb__3_1_mED77FC11FCCAB18D49B3E928E594749D7CA3C222_RuntimeMethod_var), NULL);
		CameraFollow_Setup_m6258B34D47A91EBAD27EF7C42153E3D344DA186C(G_B3_1, G_B3_0, L_8, (bool)1, (bool)1, NULL);
		return;
	}

IL_0051:
	{
		// cameraFollow.Setup(() => followTransform.position, () => zoom, true, true);
		CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* L_9 = __this->___cameraFollow_4;
		Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* L_10 = (Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC*)il2cpp_codegen_object_new(Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC_il2cpp_TypeInfo_var);
		Func_1__ctor_mD02D4E16AD6700382E279DCC40D3E157B3F3C99E(L_10, __this, (intptr_t)((void*)CameraFollowSetup_U3CStartU3Eb__3_2_m540829BF425ED218A730F8CC200E4F7ABCF22564_RuntimeMethod_var), NULL);
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_11 = (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*)il2cpp_codegen_object_new(Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71(L_11, __this, (intptr_t)((void*)CameraFollowSetup_U3CStartU3Eb__3_3_m890A7ABAABD252271F467D59FDA0B894B313BC05_RuntimeMethod_var), NULL);
		CameraFollow_Setup_m6258B34D47A91EBAD27EF7C42153E3D344DA186C(L_9, L_10, L_11, (bool)1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollowSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollowSetup__ctor_m5E9E9F338313EB81E22F12DA7F30D88BCC5DFBAD (CameraFollowSetup_tD16A601426BB7376FE01E38DF536BF39FEF83D2C* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float zoom = 50f;
		__this->___zoom_6 = (50.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Single CodeMonkey.MonoBehaviours.CameraFollowSetup::<Start>b__3_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraFollowSetup_U3CStartU3Eb__3_1_mED77FC11FCCAB18D49B3E928E594749D7CA3C222 (CameraFollowSetup_tD16A601426BB7376FE01E38DF536BF39FEF83D2C* __this, const RuntimeMethod* method) 
{
	{
		// cameraFollow.Setup(() => Vector3.zero, () => zoom, true, true);
		float L_0 = __this->___zoom_6;
		return L_0;
	}
}
// UnityEngine.Vector3 CodeMonkey.MonoBehaviours.CameraFollowSetup::<Start>b__3_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraFollowSetup_U3CStartU3Eb__3_2_m540829BF425ED218A730F8CC200E4F7ABCF22564 (CameraFollowSetup_tD16A601426BB7376FE01E38DF536BF39FEF83D2C* __this, const RuntimeMethod* method) 
{
	{
		// cameraFollow.Setup(() => followTransform.position, () => zoom, true, true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___followTransform_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		return L_1;
	}
}
// System.Single CodeMonkey.MonoBehaviours.CameraFollowSetup::<Start>b__3_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraFollowSetup_U3CStartU3Eb__3_3_m890A7ABAABD252271F467D59FDA0B894B313BC05 (CameraFollowSetup_tD16A601426BB7376FE01E38DF536BF39FEF83D2C* __this, const RuntimeMethod* method) 
{
	{
		// cameraFollow.Setup(() => followTransform.position, () => zoom, true, true);
		float L_0 = __this->___zoom_6;
		return L_0;
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
// System.Void CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5AA3F84DF819CD758813C2817AB9BFC41861A278 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83* L_0 = (U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83*)il2cpp_codegen_object_new(U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD23B997D48B3A022B39C96AE631184BC8418D918(L_0, NULL);
		((U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD23B997D48B3A022B39C96AE631184BC8418D918 (U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 CodeMonkey.MonoBehaviours.CameraFollowSetup/<>c::<Start>b__3_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec_U3CStartU3Eb__3_0_mD29057CA38208214222E1A510D845B751315D96E (U3CU3Ec_t8614D07D1D838840B1002F65C42EB483D075AE83* __this, const RuntimeMethod* method) 
{
	{
		// cameraFollow.Setup(() => Vector3.zero, () => zoom, true, true);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_0;
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
// System.Void CodeMonkey.MonoBehaviours.ComponentActions::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentActions_OnDestroy_m9CC33FB994C2196E72CB7A6539AD1BFC86CDCD74 (ComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC* __this, const RuntimeMethod* method) 
{
	{
		// if (OnDestroyFunc != null) OnDestroyFunc();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnDestroyFunc_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (OnDestroyFunc != null) OnDestroyFunc();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnDestroyFunc_4;
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.ComponentActions::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentActions_OnEnable_m1AC706F33D67C957E1BCAFACD126EEDC716FAF13 (ComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC* __this, const RuntimeMethod* method) 
{
	{
		// if (OnEnableFunc != null) OnEnableFunc();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnEnableFunc_5;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (OnEnableFunc != null) OnEnableFunc();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnEnableFunc_5;
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.ComponentActions::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentActions_OnDisable_mF2671BC29AFA49E71FD9E109BCF235A6C1EB8E0F (ComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC* __this, const RuntimeMethod* method) 
{
	{
		// if (OnDisableFunc != null) OnDisableFunc();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnDisableFunc_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (OnDisableFunc != null) OnDisableFunc();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnDisableFunc_6;
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.ComponentActions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentActions_Update_m8E16976709E1D370851A8BACF716FE5730C709A4 (ComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC* __this, const RuntimeMethod* method) 
{
	{
		// if (OnUpdate != null) OnUpdate();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnUpdate_7;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (OnUpdate != null) OnUpdate();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___OnUpdate_7;
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.ComponentActions::CreateComponent(System.Action,System.Action,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentActions_CreateComponent_mC5873963DA2135DBF34E4D455A80F5E9961FEDB5 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDestroyFunc0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnEnableFunc1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDisableFunc2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnUpdate3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral776519977A9F05FE57A1440956337C6C719069EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject gameObject = new GameObject("ComponentActions");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral776519977A9F05FE57A1440956337C6C719069EF, NULL);
		// AddComponent(gameObject, OnDestroyFunc, OnEnableFunc, OnDisableFunc, OnUpdate);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___OnDestroyFunc0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___OnEnableFunc1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___OnDisableFunc2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___OnUpdate3;
		ComponentActions_AddComponent_mFFB7B3DE6B57CE6A697CA9FDBBAAE1FC58EE2A6E(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.ComponentActions::AddComponent(UnityEngine.GameObject,System.Action,System.Action,System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentActions_AddComponent_mFFB7B3DE6B57CE6A697CA9FDBBAAE1FC58EE2A6E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDestroyFunc1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnEnableFunc2, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDisableFunc3, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnUpdate4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC_mC01A638D53B1EBFFBB4B4A46A936B4BC6A4B34AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ComponentActions componentFuncs = gameObject.AddComponent<ComponentActions>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		ComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC* L_1;
		L_1 = GameObject_AddComponent_TisComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC_mC01A638D53B1EBFFBB4B4A46A936B4BC6A4B34AE(L_0, GameObject_AddComponent_TisComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC_mC01A638D53B1EBFFBB4B4A46A936B4BC6A4B34AE_RuntimeMethod_var);
		// componentFuncs.OnDestroyFunc = OnDestroyFunc;
		ComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC* L_2 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___OnDestroyFunc1;
		L_2->___OnDestroyFunc_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___OnDestroyFunc_4), (void*)L_3);
		// componentFuncs.OnEnableFunc = OnEnableFunc;
		ComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC* L_4 = L_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___OnEnableFunc2;
		L_4->___OnEnableFunc_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___OnEnableFunc_5), (void*)L_5);
		// componentFuncs.OnDisableFunc = OnDisableFunc;
		ComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC* L_6 = L_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___OnDisableFunc3;
		L_6->___OnDisableFunc_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___OnDisableFunc_6), (void*)L_7);
		// componentFuncs.OnUpdate = OnUpdate;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___OnUpdate4;
		L_6->___OnUpdate_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___OnUpdate_7), (void*)L_8);
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.ComponentActions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentActions__ctor_m970E0A5A09556E1E5E52C55D3BCC69DD75BD5A8A (ComponentActions_t4BBCB961AD8CFE8D36A259EFC2633F07B1B5B5DC* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void CodeMonkey.MonoBehaviours.PositionRendererSorter::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionRendererSorter_Awake_mD08235AFE43719C08C7DBA4484811BB6BB31FB57 (PositionRendererSorter_t8E87C9B65BC3D7DB3445ABAF438941A5E5D2814F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myRenderer = gameObject.GetComponent<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_0, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		__this->___myRenderer_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myRenderer_9), (void*)L_1);
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.PositionRendererSorter::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionRendererSorter_LateUpdate_m012A647099DCB1F6C18C9E7E78DEAD748A50F49B (PositionRendererSorter_t8E87C9B65BC3D7DB3445ABAF438941A5E5D2814F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer -= Time.deltaTime;
		float L_0 = __this->___timer_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_7 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (timer <= 0f) {
		float L_2 = __this->___timer_7;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0065;
		}
	}
	{
		// timer = timerMax;
		float L_3 = __this->___timerMax_8;
		__this->___timer_7 = L_3;
		// myRenderer.sortingOrder = (int)(sortingOrderBase - transform.position.y - offset);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->___myRenderer_9;
		int32_t L_5 = __this->___sortingOrderBase_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		int32_t L_9 = __this->___offset_5;
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_4, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)L_5), L_8)), ((float)L_9)))), NULL);
		// if (runOnlyOnce) {
		bool L_10 = __this->___runOnlyOnce_6;
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.PositionRendererSorter::SetOffset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionRendererSorter_SetOffset_mE0D5724CE0EDF213F3E8E8BC22A31EE8BEB38F00 (PositionRendererSorter_t8E87C9B65BC3D7DB3445ABAF438941A5E5D2814F* __this, int32_t ___offset0, const RuntimeMethod* method) 
{
	{
		// this.offset = offset;
		int32_t L_0 = ___offset0;
		__this->___offset_5 = L_0;
		// }
		return;
	}
}
// System.Void CodeMonkey.MonoBehaviours.PositionRendererSorter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionRendererSorter__ctor_mCC6248438529A8A9EF729BD1EA9BEAB6CC99B2B4 (PositionRendererSorter_t8E87C9B65BC3D7DB3445ABAF438941A5E5D2814F* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private int sortingOrderBase = 5000; // This number should be higher than what any of your sprites will be on the position.y
		__this->___sortingOrderBase_4 = ((int32_t)5000);
		// private float timerMax = .1f;
		__this->___timerMax_8 = (0.100000001f);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		float L_2 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___a0;
		float L_4 = L_3.___g_1;
		float L_5 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___b_2;
		float L_8 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___a_3;
		float L_11 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFollow_set_Instance_mE344454072944ECD3EEF4F31566BA909E13D2AD7_inline (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CameraFollow Instance { get; private set; }
		CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* L_0 = ___value0;
		((CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFollow_SetGetCameraFollowPositionFunc_mB21622A3C5C5FDB165746D0A1A19BA47237A04B9_inline (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* ___GetCameraFollowPositionFunc0, const RuntimeMethod* method) 
{
	{
		// this.GetCameraFollowPositionFunc = GetCameraFollowPositionFunc;
		Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* L_0 = ___GetCameraFollowPositionFunc0;
		__this->___GetCameraFollowPositionFunc_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GetCameraFollowPositionFunc_6), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFollow_SetGetCameraZoomFunc_m7F1DBD295E1F4B12609B80A9679A006C7569EF46_inline (CameraFollow_t03720727D5FC5A1A04814B55A53E1B5097E7BBD6* __this, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___GetCameraZoomFunc0, const RuntimeMethod* method) 
{
	{
		// this.GetCameraZoomFunc = GetCameraZoomFunc;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_0 = ___GetCameraZoomFunc0;
		__this->___GetCameraZoomFunc_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GetCameraZoomFunc_7), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_gshared_inline (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m4FAE173EDA36B822FB752D0C622A60C6ADC7AB58_gshared_inline (Action_2_tFA12D1ED57DFFBB4A246CECC16F8F9387FE254AA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___arg10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_1_Invoke_m1CDD0198843EF8947E2C7F333F38C1E36FF3C568_gshared_inline (Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* __this, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
