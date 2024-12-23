#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtualActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtualActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};

struct List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC;
struct List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4;
struct List_1_tC7A631B4A35E461A5E78F0D0C4D482812E731DEB;
struct List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529;
struct AnimationCurveU5BU5D_t2C4A38D7EFA8095F32316A4D9CE4CBB6840FB7EC;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CinemachineComponentBaseU5BU5D_t479D9A9F2F2C4AB6F50F6C64FAC4BC8EC602C077;
struct CinemachineOrbitalTransposerU5BU5D_tFB9047628E48134B27783E21772FA8EAD7CA791F;
struct CinemachineVirtualCameraU5BU5D_tC79623529FA0FC8916013356D0E0CB81EC16CFE7;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981;
struct OrbitU5BU5D_t1525789A40884DD43BBE283E26E989EC19733A28;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269;
struct CinemachineBlend_t727AC6579F9C674EB8E01FC3ACB846B20786FF5E;
struct CinemachineBlenderSettings_t55EA371578F7C0ADACF81ACF631C0838A459ED18;
struct CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9;
struct CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A;
struct CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705;
struct CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F;
struct CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83;
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50;
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct ICinemachineCamera_tE6F5FB0E83AB8D13CB7B8B47B2AE09A161C513F5;
struct ICinemachineTargetGroup_t3741E5378B5C1636777589A1BE1811E9E96ADF1B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E;
struct MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888;
struct MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5;
struct MMCinemachineClippingPlanesShaker_t7851747D89A493856A718862B75850B59C99DB3D;
struct MMCinemachineFieldOfViewShaker_t1BCC979BAE60EE46A3082B43C9024218559403C5;
struct MMCinemachineFreeLookZoom_t6535271BE733083A975D4068708827E4A05DEC1E;
struct MMCinemachineOrthographicSizeShaker_t094C6772F057FE073685EB9E6AB0B65C7EAE909C;
struct MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A;
struct MMCinemachinePriorityListener_tEE3ED7BDA2BD945CC38862163B4A793F89E6158A;
struct MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A;
struct MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131;
struct MMF_CinemachineImpulseClear_t27C051FD2457C2ED6BF2929DD9603D9F4E3120A9;
struct MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49;
struct MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8;
struct MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D;
struct MMF_Player_t93550CF1D39E682D9FF480A11FF0138923CBAE6C;
struct MMF_ReferenceHolder_t8303806F732728F7B6E4B527BAA90524D154BBE3;
struct MMFeedback_tE51A2F7A01B1E3BE46047E5A0D6BA5C79199FDCA;
struct MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D;
struct MMFeedbackCinemachineImpulseClear_t593754874A893902A94F35E475262D9F5E410CBF;
struct MMFeedbackCinemachineTransition_t66579D56518B0A6FEC7B8EF5936D080172E93109;
struct MMFeedbackTargetAcquisition_t5A7A9556CCB159A671A692D56FC832A93808CB55;
struct MMFeedbackTiming_t4F4BD4FA251C4038C8FAF0BEB673A8CCC479A9CD;
struct MMFeedbacks_t38A4A1D812AE5F7C3C3033318C408D55AE462AD6;
struct MMSequence_t10D0481DC725D195973AC5C741491AD1E69EA20C;
struct MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NoiseSettings_tFCB86EB3704D64D89D6D747BEAE83E1757EF68F1;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SignalSourceAsset_t187094A020026D70B16096697802137226248D2B;
struct String_t;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tE9BD70CB24D16486115F22794780EADA760840DD;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7;
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
struct IInputAxisProvider_tABB3BFF96A8D4C6D50FA42166CCF7AAF18F959E7;
struct BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3;
struct VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154;
struct CreateRigDelegate_tD6770756AD0D0BCB403556417C56015FBFB8343B;
struct DestroyRigDelegate_t28E835CF0AF2A9C3FE1C77889839F4B7A6D761B6;
struct CreatePipelineDelegate_tC9ED5364DE6A2A753E8C9FF767C2C37C5CBB6BFC;
struct DestroyPipelineDelegate_tDBA135A8B9ACD670F6144200C281F32F728BB842;
struct Delegate_t9335CDEAFF0FB08FD5B9E989B907490B098870E3;
struct Delegate_tB0BC9D7A574413E043B438F0A068AD7FB33AB277;
struct Delegate_tD173B266ED8EA45E3B0FEDA511537B9BCB52E868;
struct Delegate_t8F3069CFED90E34B40CF5BB68B095ACF9775E0CA;
struct Delegate_tB9EED8DE5A66B26FCB9ADEDD1A910A2862B48662;
struct Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260;
struct U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477;
struct U3CResetBlendDefinitionU3Ed__8_t970EC43B233ACC0456765A17D202202B7079A1DC;
struct Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t8F3069CFED90E34B40CF5BB68B095ACF9775E0CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t9335CDEAFF0FB08FD5B9E989B907490B098870E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_tB0BC9D7A574413E043B438F0A068AD7FB33AB277_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_tB9EED8DE5A66B26FCB9ADEDD1A910A2862B48662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_tD173B266ED8EA45E3B0FEDA511537B9BCB52E868_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMF_CinemachineImpulseClear_t27C051FD2457C2ED6BF2929DD9603D9F4E3120A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMFeedbackCinemachineImpulseClear_t593754874A893902A94F35E475262D9F5E410CBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMFeedbackCinemachineTransition_t66579D56518B0A6FEC7B8EF5936D080172E93109_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimescaleModes_t567213DC39EEE1AA073F8E8473E19F2B71FC9A68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CResetBlendDefinitionU3Ed__8_t970EC43B233ACC0456765A17D202202B7079A1DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t315EE6FE32808612D50B7BA7A5FC432ABA29860C____5358D430930A2E6E2E800A77EDF38D1B8DF4A0F5AD5A657A5F2BA107E56D18D3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t315EE6FE32808612D50B7BA7A5FC432ABA29860C____E293CBF181858FA7F31D5B7E5216FA9DB30A090726623737DB9C5669D1BBC5DD_FieldInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269_m63C03133A16FCEF5C276CB88AD2FB3EB89DD2AD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9_mC1162BCB892B08F7E1B985427405E11FA407A3CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A_m55FDBF088D5B4E935514B4B81F63DE1044B0101D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE_m24E4FA934917769BC3E78C1CE434B56A2B0346C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MMF_Feedback_FindAutomatedTarget_TisCinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83_m9BE4F2C9A2C7BBAA4BB66810779A1F85A6550DBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MMF_Feedback_FindAutomatedTarget_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_mA324472766B14380160E087155FAA624683354DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResetBlendDefinitionU3Ed__8_System_Collections_IEnumerator_Reset_m643CB5C475512A99ABB6530903238B2DABB0BC10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShakeCameraCoU3Ed__27_System_Collections_IEnumerator_Reset_mD8CDCC79276F303A7DFEDAB70F3558B00D759E49_RuntimeMethod_var;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t7BD3C49F530DDA7B848449E6B33F96DE8683F779 
{
};
struct U3CPrivateImplementationDetailsU3E_t315EE6FE32808612D50B7BA7A5FC432ABA29860C  : public RuntimeObject
{
};
struct CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F  : public RuntimeObject
{
	List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* ___m_ExpiredEvents;
	List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* ___m_ActiveEvents;
	bool ___IgnoreTimeScale;
};
struct MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888  : public RuntimeObject
{
	int32_t ___MMChannelMode;
	int32_t ___Channel;
	MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E* ___MMChannelDefinition;
};
struct MMFeedbackTiming_t4F4BD4FA251C4038C8FAF0BEB673A8CCC479A9CD  : public RuntimeObject
{
	int32_t ___TimescaleMode;
	bool ___ExcludeFromHoldingPauses;
	bool ___ContributeToTotalDuration;
	float ___InitialDelay;
	float ___CooldownDuration;
	bool ___InterruptsOnStop;
	int32_t ___NumberOfRepeats;
	bool ___RepeatForever;
	float ___DelayBetweenRepeats;
	int32_t ___MMFeedbacksDirectionCondition;
	int32_t ___PlayDirection;
	bool ___ConstantIntensity;
	bool ___UseIntensityInterval;
	float ___IntensityIntervalMin;
	float ___IntensityIntervalMax;
	MMSequence_t10D0481DC725D195973AC5C741491AD1E69EA20C* ___Sequence;
	int32_t ___TrackID;
	bool ___Quantized;
	int32_t ___TargetBPM;
	bool ___U3CUseScriptDrivenTimescaleU3Ek__BackingField;
	float ___U3CScriptDrivenDeltaTimeU3Ek__BackingField;
	float ___U3CScriptDrivenTimeU3Ek__BackingField;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tE9BD70CB24D16486115F22794780EADA760840DD  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* ___U3CU3E4__this;
	float ___amplitude;
	float ___frequency;
	bool ___useUnscaledTime;
	bool ___infinite;
	float ___duration;
};
struct U3CResetBlendDefinitionU3Ed__8_t970EC43B233ACC0456765A17D202202B7079A1DC  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A* ___U3CU3E4__this;
	float ___delay;
	float ___U3CtimerU3E5__2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B 
{
	int32_t ___m_Style;
	float ___m_Time;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CustomCurve;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	float ___m_Time;
	float ___m_Value;
	float ___m_InTangent;
	float ___m_OutTangent;
	int32_t ___m_WeightedMode;
	float ___m_InWeight;
	float ___m_OutWeight;
};
struct MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9 
{
	union
	{
		struct
		{
		};
		uint8_t MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9__padding[1];
	};
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	float ___m_Seconds;
};
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds;
};
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds;
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1120_t253B0D01A169FB61E4D70332C3CEE91753985382 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1120_t253B0D01A169FB61E4D70332C3CEE91753985382__padding[1120];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1867_tDAA20B70D237F1560CE1AD01421D1F6E21651697 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1867_tDAA20B70D237F1560CE1AD01421D1F6E21651697__padding[1867];
	};
};
#pragma pack(pop, tp)
struct Recentering_tB00B86249E96CFC65822315C710253B1E02459EF 
{
	bool ___m_enabled;
	float ___m_WaitTime;
	float ___m_RecenteringTime;
	float ___m_LastUpdateTime;
	float ___mLastAxisInputTime;
	float ___mRecenteringVelocity;
	int32_t ___m_LegacyHeadingDefinition;
	int32_t ___m_LegacyVelocityFilterStrength;
};
struct Recentering_tB00B86249E96CFC65822315C710253B1E02459EF_marshaled_pinvoke
{
	int32_t ___m_enabled;
	float ___m_WaitTime;
	float ___m_RecenteringTime;
	float ___m_LastUpdateTime;
	float ___mLastAxisInputTime;
	float ___mRecenteringVelocity;
	int32_t ___m_LegacyHeadingDefinition;
	int32_t ___m_LegacyVelocityFilterStrength;
};
struct Recentering_tB00B86249E96CFC65822315C710253B1E02459EF_marshaled_com
{
	int32_t ___m_enabled;
	float ___m_WaitTime;
	float ___m_RecenteringTime;
	float ___m_LastUpdateTime;
	float ___mLastAxisInputTime;
	float ___mRecenteringVelocity;
	int32_t ___m_LegacyHeadingDefinition;
	int32_t ___m_LegacyVelocityFilterStrength;
};
struct CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB 
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Custom;
	float ___m_Weight;
};
struct Heading_t2A3E10FE1156F914633F9E348691BC649C373B6E 
{
	int32_t ___m_Definition;
	int32_t ___m_VelocityFilterStrength;
	float ___m_Bias;
};
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA 
{
	int32_t ___m_BlendHint;
	bool ___m_InheritPosition;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive;
};
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA_marshaled_pinvoke
{
	int32_t ___m_BlendHint;
	int32_t ___m_InheritPosition;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive;
};
struct TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA_marshaled_com
{
	int32_t ___m_BlendHint;
	int32_t ___m_InheritPosition;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_OnCameraLive;
};
struct MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct AxisState_t6996FE8143104E02683986C908C18B0F62595736 
{
	float ___Value;
	int32_t ___m_SpeedMode;
	float ___m_MaxSpeed;
	float ___m_AccelTime;
	float ___m_DecelTime;
	String_t* ___m_InputAxisName;
	float ___m_InputAxisValue;
	bool ___m_InvertInput;
	float ___m_MinValue;
	float ___m_MaxValue;
	bool ___m_Wrap;
	Recentering_tB00B86249E96CFC65822315C710253B1E02459EF ___m_Recentering;
	float ___m_CurrentSpeed;
	float ___m_LastUpdateTime;
	int32_t ___m_LastUpdateFrame;
	RuntimeObject* ___m_InputAxisProvider;
	int32_t ___m_InputAxisIndex;
	bool ___U3CValueRangeLockedU3Ek__BackingField;
	bool ___U3CHasRecenteringU3Ek__BackingField;
};
struct AxisState_t6996FE8143104E02683986C908C18B0F62595736_marshaled_pinvoke
{
	float ___Value;
	int32_t ___m_SpeedMode;
	float ___m_MaxSpeed;
	float ___m_AccelTime;
	float ___m_DecelTime;
	char* ___m_InputAxisName;
	float ___m_InputAxisValue;
	int32_t ___m_InvertInput;
	float ___m_MinValue;
	float ___m_MaxValue;
	int32_t ___m_Wrap;
	Recentering_tB00B86249E96CFC65822315C710253B1E02459EF_marshaled_pinvoke ___m_Recentering;
	float ___m_CurrentSpeed;
	float ___m_LastUpdateTime;
	int32_t ___m_LastUpdateFrame;
	RuntimeObject* ___m_InputAxisProvider;
	int32_t ___m_InputAxisIndex;
	int32_t ___U3CValueRangeLockedU3Ek__BackingField;
	int32_t ___U3CHasRecenteringU3Ek__BackingField;
};
struct AxisState_t6996FE8143104E02683986C908C18B0F62595736_marshaled_com
{
	float ___Value;
	int32_t ___m_SpeedMode;
	float ___m_MaxSpeed;
	float ___m_AccelTime;
	float ___m_DecelTime;
	Il2CppChar* ___m_InputAxisName;
	float ___m_InputAxisValue;
	int32_t ___m_InvertInput;
	float ___m_MinValue;
	float ___m_MaxValue;
	int32_t ___m_Wrap;
	Recentering_tB00B86249E96CFC65822315C710253B1E02459EF_marshaled_com ___m_Recentering;
	float ___m_CurrentSpeed;
	float ___m_LastUpdateTime;
	int32_t ___m_LastUpdateFrame;
	RuntimeObject* ___m_InputAxisProvider;
	int32_t ___m_InputAxisIndex;
	int32_t ___U3CValueRangeLockedU3Ek__BackingField;
	int32_t ___U3CHasRecenteringU3Ek__BackingField;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE 
{
	float ___FieldOfView;
	float ___OrthographicSize;
	float ___NearClipPlane;
	float ___FarClipPlane;
	float ___Dutch;
	int32_t ___ModeOverride;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift;
	int32_t ___GateFit;
	float ___FocusDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize;
	bool ___m_OrthoFromCamera;
	bool ___m_PhysicalFromCamera;
};
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke
{
	float ___FieldOfView;
	float ___OrthographicSize;
	float ___NearClipPlane;
	float ___FarClipPlane;
	float ___Dutch;
	int32_t ___ModeOverride;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift;
	int32_t ___GateFit;
	float ___FocusDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize;
	int32_t ___m_OrthoFromCamera;
	int32_t ___m_PhysicalFromCamera;
};
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com
{
	float ___FieldOfView;
	float ___OrthographicSize;
	float ___NearClipPlane;
	float ___FarClipPlane;
	float ___Dutch;
	int32_t ___ModeOverride;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift;
	int32_t ___GateFit;
	float ___FocusDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize;
	int32_t ___m_OrthoFromCamera;
	int32_t ___m_PhysicalFromCamera;
};
struct MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D  : public RuntimeObject
{
	bool ___Active;
	int32_t ___UniqueID;
	String_t* ___Label;
	int32_t ___ChannelMode;
	int32_t ___Channel;
	MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E* ___MMChannelDefinition;
	float ___Chance;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___DisplayColor;
	MMFeedbackTiming_t4F4BD4FA251C4038C8FAF0BEB673A8CCC479A9CD* ___Timing;
	MMFeedbackTargetAcquisition_t5A7A9556CCB159A671A692D56FC832A93808CB55* ___AutomatedTargetAcquisition;
	bool ___RandomizeOutput;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___RandomMultiplier;
	bool ___RandomizeDuration;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___RandomDurationMultiplier;
	bool ___UseRange;
	float ___RangeDistance;
	bool ___UseRangeFalloff;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___RangeFalloff;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___RemapRangeFalloff;
	MMF_Player_t93550CF1D39E682D9FF480A11FF0138923CBAE6C* ___Owner;
	bool ___DebugActive;
	bool ___U3CScriptDrivenPauseU3Ek__BackingField;
	float ___U3CScriptDrivenPauseAutoResumeU3Ek__BackingField;
	MMF_ReferenceHolder_t8303806F732728F7B6E4B527BAA90524D154BBE3* ___U3CForcedReferenceHolderU3Ek__BackingField;
	bool ___U3CIsPlayingU3Ek__BackingField;
	bool ___U3CIsExpandedU3Ek__BackingField;
	float ____lastPlayTimestamp;
	int32_t ____playsLeft;
	bool ____initialized;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____playCoroutine;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____infinitePlayCoroutine;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____sequenceCoroutine;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____repeatedPlayCoroutine;
	bool ____requiresSetup;
	String_t* ____requiredTarget;
	float ____randomDurationMultiplier;
	int32_t ____sequenceTrackID;
	float ____beatInterval;
	bool ___BeatThisFrame;
	int32_t ___LastBeatIndex;
	int32_t ___CurrentSequenceIndex;
	float ___LastBeatTimestamp;
	MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ____channelData;
	float ____totalDuration;
	int32_t ____indexInOwnerFeedbackList;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Lens;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass;
	float ___ShotQuality;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection;
	int32_t ___BlendHint;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField;
};
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_pinvoke
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke ___Lens;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass;
	float ___ShotQuality;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection;
	int32_t ___BlendHint;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField;
};
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_com
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com ___Lens;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass;
	float ___ShotQuality;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection;
	int32_t ___BlendHint;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131  : public MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D
{
	CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* ___m_ImpulseDefinition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Velocity;
	bool ___ClearImpulseOnStop;
};
struct MMF_CinemachineImpulseClear_t27C051FD2457C2ED6BF2929DD9603D9F4E3120A9  : public MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D
{
};
struct MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49  : public MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Velocity;
	CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* ___ImpulseSource;
	bool ___ClearImpulseOnStop;
};
struct MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8  : public MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D
{
	int32_t ___Mode;
	CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* ___TargetVirtualCamera;
	bool ___ResetValuesAfterTransition;
	int32_t ___NewPriority;
	bool ___ForceMaxPriority;
	bool ___ForceTransition;
	CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___BlendDefintion;
	CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ____tempBlend;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E 
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_AttackShape;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_DecayShape;
	float ___m_AttackTime;
	float ___m_SustainTime;
	float ___m_DecayTime;
	bool ___m_ScaleWithImpact;
	bool ___m_HoldForever;
};
struct EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E_marshaled_pinvoke
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke ___m_AttackShape;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke ___m_DecayShape;
	float ___m_AttackTime;
	float ___m_SustainTime;
	float ___m_DecayTime;
	int32_t ___m_ScaleWithImpact;
	int32_t ___m_HoldForever;
};
struct EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E_marshaled_com
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com* ___m_AttackShape;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com* ___m_DecayShape;
	float ___m_AttackTime;
	float ___m_SustainTime;
	float ___m_DecayTime;
	int32_t ___m_ScaleWithImpact;
	int32_t ___m_HoldForever;
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705  : public RuntimeObject
{
	int32_t ___m_ImpulseChannel;
	int32_t ___m_ImpulseShape;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CustomImpulseShape;
	float ___m_ImpulseDuration;
	int32_t ___m_ImpulseType;
	float ___m_DissipationRate;
	SignalSourceAsset_t187094A020026D70B16096697802137226248D2B* ___m_RawSignal;
	float ___m_AmplitudeGain;
	float ___m_FrequencyGain;
	int32_t ___m_RepeatMode;
	bool ___m_Randomize;
	EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E ___m_TimeEnvelope;
	float ___m_ImpactRadius;
	int32_t ___m_DirectionMode;
	int32_t ___m_DissipationMode;
	float ___m_DissipationDistance;
	float ___m_PropagationSpeed;
};
struct MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Delegate_t9335CDEAFF0FB08FD5B9E989B907490B098870E3  : public MulticastDelegate_t
{
};
struct Delegate_tB0BC9D7A574413E043B438F0A068AD7FB33AB277  : public MulticastDelegate_t
{
};
struct Delegate_tD173B266ED8EA45E3B0FEDA511537B9BCB52E868  : public MulticastDelegate_t
{
};
struct Delegate_t8F3069CFED90E34B40CF5BB68B095ACF9775E0CA  : public MulticastDelegate_t
{
};
struct Delegate_tB9EED8DE5A66B26FCB9ADEDD1A910A2862B48662  : public MulticastDelegate_t
{
};
struct Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260  : public MulticastDelegate_t
{
};
struct Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D  : public MulticastDelegate_t
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	bool ___m_ShowDebugText;
	bool ___m_ShowCameraFrustum;
	bool ___m_IgnoreTimeScale;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_WorldUpOverride;
	int32_t ___m_UpdateMethod;
	int32_t ___m_BlendUpdateMethod;
	CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___m_DefaultBlend;
	CinemachineBlenderSettings_t55EA371578F7C0ADACF81ACF631C0838A459ED18* ___m_CustomBlends;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_OutputCamera;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_TargetOverride;
	BrainEvent_t849EB8BA11F9477DD4D1CCD463DF1C798A74B5E3* ___m_CameraCutEvent;
	VcamActivatedEvent_tBE585CFE82663479F5588F34F5039F7CCAE50154* ___m_CameraActivatedEvent;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___mPhysicsCoroutine;
	int32_t ___m_LastFrameUpdated;
	WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* ___mWaitForFixedUpdate;
	List_1_tC7A631B4A35E461A5E78F0D0C4D482812E731DEB* ___mFrameStack;
	int32_t ___mNextFrameId;
	CinemachineBlend_t727AC6579F9C674EB8E01FC3ACB846B20786FF5E* ___mCurrentLiveCameras;
	RuntimeObject* ___mActiveCameraPreviousFrame;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mActiveCameraPreviousFrameGameObject;
	CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 ___U3CCurrentCameraStateU3Ek__BackingField;
};
struct CinemachineComponentBase_tDF1741220995A46FEA90E1FB7EA206D973D7428A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_vcamOwner;
};
struct CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* ___m_ImpulseDefinition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DefaultVelocity;
};
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludedPropertiesInInspector;
	StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981* ___m_LockStageInInspector;
	int32_t ___m_ValidatingStreamVersion;
	bool ___m_OnValidateCalled;
	int32_t ___m_StreamingVersion;
	int32_t ___m_Priority;
	int32_t ___m_ActivationId;
	float ___FollowTargetAttachment;
	float ___LookAtTargetAttachment;
	int32_t ___m_StandbyUpdate;
	List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC* ___U3CmExtensionsU3Ek__BackingField;
	bool ___U3CPreviousStateIsValidU3Ek__BackingField;
	bool ___m_WasStarted;
	bool ___mSlaveStatusUpdated;
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_parentVcam;
	int32_t ___m_QueuePriority;
	float ___m_blendStartPosition;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedFollowTarget;
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedFollowTargetVcam;
	RuntimeObject* ___m_CachedFollowTargetGroup;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedLookAtTarget;
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedLookAtTargetVcam;
	RuntimeObject* ___m_CachedLookAtTargetGroup;
	bool ___U3CFollowTargetChangedU3Ek__BackingField;
	bool ___U3CLookAtTargetChangedU3Ek__BackingField;
};
struct MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ___ChannelMode;
	int32_t ___Channel;
	MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E* ___MMChannelDefinition;
	float ___DefaultShakeAmplitude;
	float ___DefaultShakeFrequency;
	float ___IdleAmplitude;
	float ___IdleFrequency;
	float ___LerpSpeed;
	float ___TestDuration;
	float ___TestAmplitude;
	float ___TestFrequency;
	bool ___TestShakeButton;
	int32_t ____timescaleMode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____initialPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____initialRotation;
	CinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269* ____perlin;
	CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* ____virtualCamera;
	float ____targetAmplitude;
	float ____targetFrequency;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____shakeCoroutine;
};
struct MMCinemachineFreeLookZoom_t6535271BE733083A975D4068708827E4A05DEC1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ___ChannelMode;
	int32_t ___Channel;
	MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E* ___MMChannelDefinition;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___ZoomCurve;
	int32_t ___TestMode;
	float ___TestFieldOfView;
	float ___TestTransitionDuration;
	float ___TestDuration;
	bool ___TestZoomButton;
	CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* ____freeLookCamera;
	float ____initialFieldOfView;
	int32_t ____mode;
	bool ____zooming;
	float ____startFieldOfView;
	float ____transitionDuration;
	float ____duration;
	float ____targetFieldOfView;
	float ____delta;
	int32_t ____direction;
	float ____reachedDestinationTimestamp;
	bool ____destinationReached;
};
struct MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ___TimescaleMode;
	CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* ____brain;
	CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ____initialDefinition;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____coroutine;
};
struct MMCinemachinePriorityListener_tEE3ED7BDA2BD945CC38862163B4A793F89E6158A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ___TimescaleMode;
	int32_t ___ChannelMode;
	int32_t ___Channel;
	MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E* ___MMChannelDefinition;
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ____camera;
	int32_t ____initialPriority;
};
struct MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ___ChannelMode;
	int32_t ___Channel;
	MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E* ___MMChannelDefinition;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___ZoomCurve;
	int32_t ___TestMode;
	float ___TestFieldOfView;
	float ___TestTransitionDuration;
	float ___TestDuration;
	bool ___TestZoomButton;
	int32_t ___U3CTimescaleModeU3Ek__BackingField;
	CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* ____virtualCamera;
	float ____initialFieldOfView;
	int32_t ____mode;
	bool ____zooming;
	float ____startFieldOfView;
	float ____transitionDuration;
	float ____duration;
	float ____targetFieldOfView;
	float ____delta;
	int32_t ____direction;
	float ____reachedDestinationTimestamp;
	bool ____destinationReached;
};
struct MMFeedback_tE51A2F7A01B1E3BE46047E5A0D6BA5C79199FDCA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	bool ___Active;
	String_t* ___Label;
	float ___Chance;
	MMFeedbackTiming_t4F4BD4FA251C4038C8FAF0BEB673A8CCC479A9CD* ___Timing;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3COwnerU3Ek__BackingField;
	bool ___DebugActive;
	bool ___U3CScriptDrivenPauseU3Ek__BackingField;
	float ___U3CScriptDrivenPauseAutoResumeU3Ek__BackingField;
	bool ___U3CIsPlayingU3Ek__BackingField;
	float ____lastPlayTimestamp;
	int32_t ____playsLeft;
	bool ____initialized;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____playCoroutine;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____infinitePlayCoroutine;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____sequenceCoroutine;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____repeatedPlayCoroutine;
	int32_t ____sequenceTrackID;
	MMFeedbacks_t38A4A1D812AE5F7C3C3033318C408D55AE462AD6* ____hostMMFeedbacks;
	float ____beatInterval;
	bool ___BeatThisFrame;
	int32_t ___LastBeatIndex;
	int32_t ___CurrentSequenceIndex;
	float ___LastBeatTimestamp;
	bool ____isHostMMFeedbacksNotNull;
	MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ____channelData;
};
struct MMMonoBehaviour_t983071B1C77C21CC3432DBBE41E3B288AC64FD15  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct CinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269  : public CinemachineComponentBase_tDF1741220995A46FEA90E1FB7EA206D973D7428A
{
	NoiseSettings_tFCB86EB3704D64D89D6D747BEAE83E1757EF68F1* ___m_NoiseProfile;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PivotOffset;
	float ___m_AmplitudeGain;
	float ___m_FrequencyGain;
	bool ___mInitialized;
	float ___mNoiseTime;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mNoiseOffsets;
};
struct CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A  : public CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LookAt;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Follow;
	bool ___m_CommonLens;
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___m_Lens;
	TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA ___m_Transitions;
	int32_t ___m_LegacyBlendHint;
	AxisState_t6996FE8143104E02683986C908C18B0F62595736 ___m_YAxis;
	Recentering_tB00B86249E96CFC65822315C710253B1E02459EF ___m_YAxisRecentering;
	AxisState_t6996FE8143104E02683986C908C18B0F62595736 ___m_XAxis;
	Heading_t2A3E10FE1156F914633F9E348691BC649C373B6E ___m_Heading;
	Recentering_tB00B86249E96CFC65822315C710253B1E02459EF ___m_RecenterToTargetHeading;
	int32_t ___m_BindingMode;
	float ___m_SplineCurvature;
	OrbitU5BU5D_t1525789A40884DD43BBE283E26E989EC19733A28* ___m_Orbits;
	float ___m_LegacyHeadingBias;
	bool ___mUseLegacyRigDefinitions;
	bool ___mIsDestroyed;
	CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 ___m_State;
	CinemachineVirtualCameraU5BU5D_tC79623529FA0FC8916013356D0E0CB81EC16CFE7* ___m_Rigs;
	CinemachineOrbitalTransposerU5BU5D_tFB9047628E48134B27783E21772FA8EAD7CA791F* ___mOrbitals;
	CinemachineBlend_t727AC6579F9C674EB8E01FC3ACB846B20786FF5E* ___mBlendA;
	CinemachineBlend_t727AC6579F9C674EB8E01FC3ACB846B20786FF5E* ___mBlendB;
	float ___m_CachedXAxisHeading;
	float ___m_LastHeadingUpdateFrame;
	OrbitU5BU5D_t1525789A40884DD43BBE283E26E989EC19733A28* ___m_CachedOrbits;
	float ___m_CachedTension;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_CachedKnots;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_CachedCtrl1;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_CachedCtrl2;
};
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50  : public CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LookAt;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Follow;
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___m_Lens;
	TransitionParams_tB597191957C5719625DEDBA130A4C3437346CDCA ___m_Transitions;
	int32_t ___m_LegacyBlendHint;
	CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 ___m_State;
	CinemachineComponentBaseU5BU5D_t479D9A9F2F2C4AB6F50F6C64FAC4BC8EC602C077* ___m_ComponentPipeline;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ComponentOwner;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mCachedLookAtTarget;
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___mCachedLookAtTargetVcam;
};
struct MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D  : public MMFeedback_tE51A2F7A01B1E3BE46047E5A0D6BA5C79199FDCA
{
	CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* ___m_ImpulseDefinition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Velocity;
	bool ___ClearImpulseOnStop;
};
struct MMFeedbackCinemachineImpulseClear_t593754874A893902A94F35E475262D9F5E410CBF  : public MMFeedback_tE51A2F7A01B1E3BE46047E5A0D6BA5C79199FDCA
{
};
struct MMFeedbackCinemachineTransition_t66579D56518B0A6FEC7B8EF5936D080172E93109  : public MMFeedback_tE51A2F7A01B1E3BE46047E5A0D6BA5C79199FDCA
{
	int32_t ___Mode;
	int32_t ___Channel;
	CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* ___TargetVirtualCamera;
	bool ___ResetValuesAfterTransition;
	int32_t ___NewPriority;
	bool ___ForceMaxPriority;
	bool ___ForceTransition;
	CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___BlendDefintion;
	CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ____tempBlend;
};
struct MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31  : public MMMonoBehaviour_t983071B1C77C21CC3432DBBE41E3B288AC64FD15
{
	int32_t ___ChannelMode;
	int32_t ___Channel;
	MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E* ___MMChannelDefinition;
	float ___ShakeDuration;
	bool ___PlayOnAwake;
	bool ___PermanentShake;
	bool ___Interruptible;
	bool ___AlwaysResetTargetValuesAfterShake;
	float ___CooldownBetweenShakes;
	bool ___Shaking;
	bool ___ForwardDirection;
	int32_t ___TimescaleMode;
	bool ____listeningToEvents;
	float ____shakeStartedTimestamp;
	float ____remappedTimeSinceStart;
	bool ____resetShakerValuesAfterShake;
	bool ____resetTargetValuesAfterShake;
	float ____journey;
};
struct MMCinemachineClippingPlanesShaker_t7851747D89A493856A718862B75850B59C99DB3D  : public MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31
{
	bool ___RelativeClippingPlanes;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___ShakeNear;
	float ___RemapNearZero;
	float ___RemapNearOne;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___ShakeFar;
	float ___RemapFarZero;
	float ___RemapFarOne;
	CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* ____targetCamera;
	float ____initialNear;
	float ____initialFar;
	float ____originalShakeDuration;
	bool ____originalRelativeClippingPlanes;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____originalShakeNear;
	float ____originalRemapNearZero;
	float ____originalRemapNearOne;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____originalShakeFar;
	float ____originalRemapFarZero;
	float ____originalRemapFarOne;
};
struct MMCinemachineFieldOfViewShaker_t1BCC979BAE60EE46A3082B43C9024218559403C5  : public MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31
{
	bool ___RelativeFieldOfView;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___ShakeFieldOfView;
	float ___RemapFieldOfViewZero;
	float ___RemapFieldOfViewOne;
	CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* ____targetCamera;
	float ____initialFieldOfView;
	float ____originalShakeDuration;
	bool ____originalRelativeFieldOfView;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____originalShakeFieldOfView;
	float ____originalRemapFieldOfViewZero;
	float ____originalRemapFieldOfViewOne;
};
struct MMCinemachineOrthographicSizeShaker_t094C6772F057FE073685EB9E6AB0B65C7EAE909C  : public MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31
{
	bool ___RelativeOrthographicSize;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___ShakeOrthographicSize;
	float ___RemapOrthographicSizeZero;
	float ___RemapOrthographicSizeOne;
	CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* ____targetCamera;
	float ____initialOrthographicSize;
	float ____originalShakeDuration;
	bool ____originalRelativeOrthographicSize;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____originalShakeOrthographicSize;
	float ____originalRemapOrthographicSizeZero;
	float ____originalRemapOrthographicSizeOne;
};
struct U3CPrivateImplementationDetailsU3E_t315EE6FE32808612D50B7BA7A5FC432ABA29860C_StaticFields
{
	__StaticArrayInitTypeSizeU3D1867_tDAA20B70D237F1560CE1AD01421D1F6E21651697 ___5358D430930A2E6E2E800A77EDF38D1B8DF4A0F5AD5A657A5F2BA107E56D18D3;
	__StaticArrayInitTypeSizeU3D1120_t253B0D01A169FB61E4D70332C3CEE91753985382 ___E293CBF181858FA7F31D5B7E5216FA9DB30A090726623737DB9C5669D1BBC5DD;
};
struct CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_StaticFields
{
	CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* ___sInstance;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B_StaticFields
{
	AnimationCurveU5BU5D_t2C4A38D7EFA8095F32316A4D9CE4CBB6840FB7EC* ___sStandardCurves;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_StaticFields
{
	Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* ___OnEvent;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_StaticFields
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Default;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131_StaticFields
{
	bool ___FeedbackTypeAuthorized;
};
struct MMF_CinemachineImpulseClear_t27C051FD2457C2ED6BF2929DD9603D9F4E3120A9_StaticFields
{
	bool ___FeedbackTypeAuthorized;
};
struct MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_StaticFields
{
	bool ___FeedbackTypeAuthorized;
};
struct MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8_StaticFields
{
	bool ___FeedbackTypeAuthorized;
};
struct CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705_StaticFields
{
	AnimationCurveU5BU5D_t2C4A38D7EFA8095F32316A4D9CE4CBB6840FB7EC* ___sStandardShapes;
};
struct CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9_StaticFields
{
	RuntimeObject* ___mSoloCamera;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___mDefaultLinearAnimationCurve;
};
struct CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A_StaticFields
{
	CreateRigDelegate_tD6770756AD0D0BCB403556417C56015FBFB8343B* ___CreateRigOverride;
	DestroyRigDelegate_t28E835CF0AF2A9C3FE1C77889839F4B7A6D761B6* ___DestroyRigOverride;
};
struct CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_StaticFields
{
	CreatePipelineDelegate_tC9ED5364DE6A2A753E8C9FF767C2C37C5CBB6BFC* ___CreatePipelineOverride;
	DestroyPipelineDelegate_tDBA135A8B9ACD670F6144200C281F32F728BB842* ___DestroyPipelineOverride;
};
struct MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D_StaticFields
{
	bool ___FeedbackTypeAuthorized;
};
struct MMFeedbackCinemachineImpulseClear_t593754874A893902A94F35E475262D9F5E410CBF_StaticFields
{
	bool ___FeedbackTypeAuthorized;
};
struct MMFeedbackCinemachineTransition_t66579D56518B0A6FEC7B8EF5936D080172E93109_StaticFields
{
	bool ___FeedbackTypeAuthorized;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CinemachineVirtualCamera_GetCinemachineComponent_TisRuntimeObject_m70B9E2B45173016F7928E3F968524E521FABFD34_gshared (CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnvelopeDefinition_get_Duration_m3CF863DC6B71344BE096AD9CBFC6C86AD2FF634C (EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* CinemachineImpulseManager_get_Instance_mCBBB7EE190D29704E4F44241A50BC2F6F23EB179 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseDefinition_CreateEvent_m12158346403D3428D6DBC0D3D22DDDCF551E5B41 (CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_velocity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedback_CustomStopFeedback_m812755E219AA8EF519A2D89F6C91AB793AE27EDD (MMFeedback_tE51A2F7A01B1E3BE46047E5A0D6BA5C79199FDCA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_feedbacksIntensity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseManager_Clear_mA6DC571A238EB0C4C7B07C06D2263B5743FB82BA (CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedback__ctor_mCD506F8FC949D7574B8EB30A5C0CC117C19BD647 (MMFeedback_tE51A2F7A01B1E3BE46047E5A0D6BA5C79199FDCA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_Trigger_m2FB6D7EAFA26DD95124E06B2888170839145F59D (MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_channelData, bool ___1_forceMaxPriority, int32_t ___2_newPriority, bool ___3_forceTransition, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___4_blendDefinition, bool ___5_resetValuesAfterTransition, int32_t ___6_timescaleMode, bool ___7_restore, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_Priority_m233ED0376CE0BD1244CCA52DF4532C8988DC05AC_inline (CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_Feedback_CustomStopFeedback_m9388036D957D90AD8C6BC3C4B17AC9A7B3B49A30 (MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_feedbacksIntensity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_Feedback__ctor_mCD413701DAEE304A0840C520FF3EB470EE324AC5 (MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseSource_GenerateImpulse_m700534622EE72CDDAFEBEFAB2E60F88654660B6A (CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_velocity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* MMF_Feedback_get_ChannelData_m1DF71B238AB941001462C1FC46853C68FBC0B9FA (MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
inline CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
inline CinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269* CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269_m63C03133A16FCEF5C276CB88AD2FB3EB89DD2AD1 (CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* __this, const RuntimeMethod* method)
{
	return ((  CinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269* (*) (CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50*, const RuntimeMethod*))CinemachineVirtualCamera_GetCinemachineComponent_TisRuntimeObject_m70B9E2B45173016F7928E3F968524E521FABFD34_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___0_routine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeCameraCoU3Ed__27__ctor_mC752F02CE0D18E5BF0BC6B385AC4B50462D7D67C (U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MMChannel_Match_m7AF32E7EAEA308801EE2A56B63407D8EF8209312 (MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_dataA, int32_t ___1_modeB, int32_t ___2_channelB, MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E* ___3_channelDefinitionB, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m7CB5FEB96E25CDBD63C7E0A579CA8143E9BA8AFF (Delegate_t8F3069CFED90E34B40CF5BB68B095ACF9775E0CA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraShakeEvent_Register_m7BFC0967C829FBBEEE5DCD07ADF255BE5507D91D (Delegate_t8F3069CFED90E34B40CF5BB68B095ACF9775E0CA* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m63C01375264F2FE4B307E18D29F117B3F23B73B2 (Delegate_tB9EED8DE5A66B26FCB9ADEDD1A910A2862B48662* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraShakeStopEvent_Register_m318BD840460216E7221EFCE171AA62BDEB82BCEE (Delegate_tB9EED8DE5A66B26FCB9ADEDD1A910A2862B48662* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraShakeEvent_Unregister_m8ED0BB2E7A7CCEA4B2E35156AB22E65F3FF3A29A (Delegate_t8F3069CFED90E34B40CF5BB68B095ACF9775E0CA* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraShakeStopEvent_Unregister_mE69EA56078B4ABA74367F9C073BB02FFC27BF0EE (Delegate_tB9EED8DE5A66B26FCB9ADEDD1A910A2862B48662* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMChannelData__ctor_m8E17D07DCCABFB50334CCFDF5AEB230E32B390D1 (MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* __this, int32_t ___0_mode, int32_t ___1_channel, MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E* ___2_channelDefinition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraShakeEvent_Trigger_m2B95CAED61DC38D2B2C67AE4718449EC55F7BC7E (float ___0_duration, float ___1_amplitude, float ___2_frequency, float ___3_amplitudeX, float ___4_amplitudeY, float ___5_amplitudeZ, bool ___6_infinite, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___7_channelData, bool ___8_useUnscaledTime, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMShaker_Initialization_mF435F195C4DE0AB245013FE4AC5C49DAF00EA29A (MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMShaker_ResetTargetValues_mD7E138483910DEE0DEF4276FF39F07A6AE80AE59 (MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMShaker_ResetShakerValues_mF597524D875B4EA6053014C7E9F63177D123C490 (MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMShaker_StartListening_m36823EC65926E79570BE8564A9C7F90DCEA8B7AD (MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_mFF2CF1BA610BC049B43CDE70406E4C28B45EA7FA (Delegate_t9335CDEAFF0FB08FD5B9E989B907490B098870E3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraClippingPlanesShakeEvent_Register_mF87E62B189E26C561BCA3A40E297DA17E9AA7FF3 (Delegate_t9335CDEAFF0FB08FD5B9E989B907490B098870E3* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMShaker_StopListening_m7F583AAD3037B2610ADB4BA3BBF63847EF3EDE1C (MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraClippingPlanesShakeEvent_Unregister_mF4002BB9EC90EC4D0C3362819546B37DCCACFCD1 (Delegate_t9335CDEAFF0FB08FD5B9E989B907490B098870E3* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___0_time, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___0_keys, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMShaker__ctor_mF8C6BFF676BA0F272791D3B64B0E5EB2E598A709 (MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m321FFD3E054C53C801D96CC148892FA3E3A55ECB (Delegate_tB0BC9D7A574413E043B438F0A068AD7FB33AB277* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraFieldOfViewShakeEvent_Register_mC79F1A4954A1AFE8872758F1BF3BC9A7D20454C9 (Delegate_tB0BC9D7A574413E043B438F0A068AD7FB33AB277* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraFieldOfViewShakeEvent_Unregister_m5790F78661BF6DF619379F690D7336A5D860A3F2 (Delegate_tB0BC9D7A574413E043B438F0A068AD7FB33AB277* ___0_callback, const RuntimeMethod* method) ;
inline CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* GameObject_GetComponent_TisCinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A_m55FDBF088D5B4E935514B4B81F63DE1044B0101D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m8D1004BCEFC6D845CBCB8EA17EF4FDBB819D808C (Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraZoomEvent_Register_m3BA025FD8AB4CDCE718D0FEEAB365B0E49EE94A0 (Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraZoomEvent_Unregister_m4A7B1DFA4E416AE9FEFD017466C03E5B18B1EF45 (Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m4440EC7CB1C0F0B9EDEAAFA64173B9B8B2181BEC (Delegate_tD173B266ED8EA45E3B0FEDA511537B9BCB52E868* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraOrthographicSizeShakeEvent_Register_mE4E6BA4E14CB2B31D7DA710C379DDEF6BDA02DCC (Delegate_tD173B266ED8EA45E3B0FEDA511537B9BCB52E868* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCameraOrthographicSizeShakeEvent_Unregister_m3C0C9011FFED801F04C1F9A2697331AF8F22E3CC (Delegate_tD173B266ED8EA45E3B0FEDA511537B9BCB52E868* ___0_callback, const RuntimeMethod* method) ;
inline CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* GameObject_GetComponent_TisCinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9_mC1162BCB892B08F7E1B985427405E11FA407A3CE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetBlendDefinitionU3Ed__8__ctor_mCD7D7BDADF94634CC7BB73B670390E1F290CC99D (U3CResetBlendDefinitionU3Ed__8_t970EC43B233ACC0456765A17D202202B7079A1DC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m102966351BDF3F711589A2E9A2E52F8C9EABE54E (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_Register_mA41B0E167E2ED763E8E1BA74E316A99CE097C582 (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_Unregister_mF6CDB945CAAFC6C09F0296A156D4FA1608FD761D (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* ___0_callback, const RuntimeMethod* method) ;
inline CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* GameObject_GetComponent_TisCinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE_m24E4FA934917769BC3E78C1CE434B56A2B0346C5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CinemachineVirtualCameraBase_get_Priority_m273769ED137982DE43BB658BBE704BCAA55E5246_inline (CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_add_OnEvent_mC495EF756CD4D57D51DDBD60DF005DB2A7995769 (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_remove_OnEvent_m7125AA477BD05BA55997BAA712E5171318487ED7 (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_inline (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* __this, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_channelData, bool ___1_forceMaxPriority, int32_t ___2_newPriority, bool ___3_forceTransition, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___4_blendDefinition, bool ___5_resetValuesAfterTransition, int32_t ___6_timescaleMode, bool ___7_restore, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MMCinemachineZoom_get_TimescaleMode_m011368B7AAC7340E11480854F9FCF8DF02DCDF14_inline (MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MMCinemachineZoom_set_TimescaleMode_m31C347EEC2E268FA9BC4824C78891EED9796E08F_inline (MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_m658F042CAB633EC5FB4D97F919A8A98848AED97A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t315EE6FE32808612D50B7BA7A5FC432ABA29860C____5358D430930A2E6E2E800A77EDF38D1B8DF4A0F5AD5A657A5F2BA107E56D18D3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t315EE6FE32808612D50B7BA7A5FC432ABA29860C____E293CBF181858FA7F31D5B7E5216FA9DB30A090726623737DB9C5669D1BBC5DD_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1867));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t315EE6FE32808612D50B7BA7A5FC432ABA29860C____5358D430930A2E6E2E800A77EDF38D1B8DF4A0F5AD5A657A5F2BA107E56D18D3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1120));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t315EE6FE32808612D50B7BA7A5FC432ABA29860C____E293CBF181858FA7F31D5B7E5216FA9DB30A090726623737DB9C5669D1BBC5DD_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = ((int32_t)15);
		(&V_0)->___TotalTypes = ((int32_t)16);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mDD032445D45C967C5DA8DDED7DB8070FEBC277BF (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tE9BD70CB24D16486115F22794780EADA760840DD* __this, const RuntimeMethod* method) 
{
	{
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
IL2CPP_EXTERN_C void MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380_marshal_pinvoke(const MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380& unmarshaled, MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380_marshal_pinvoke_back(const MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380_marshaled_pinvoke& marshaled, MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380_marshal_pinvoke_cleanup(MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380_marshal_com(const MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380& unmarshaled, MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380_marshal_com_back(const MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380_marshaled_com& marshaled, MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380_marshal_com_cleanup(MonoScriptData_tBE7F63AB640E103E18C6F45B317A673D27853380_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMFeedbackCinemachineImpulse_get_FeedbackDuration_m8FDEC225A8870B93481898C3131FDF245D57E906 (MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D* __this, const RuntimeMethod* method) 
{
	{
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_0 = __this->___m_ImpulseDefinition;
		NullCheck(L_0);
		EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* L_1 = (EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E*)(&L_0->___m_TimeEnvelope);
		float L_2;
		L_2 = EnvelopeDefinition_get_Duration_m3CF863DC6B71344BE096AD9CBFC6C86AD2FF634C(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineImpulse_CustomPlayFeedback_mC388912092663F3A8F196EDFD1AA8784D782C9A4 (MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_feedbacksIntensity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float G_B6_0 = 0.0f;
	{
		bool L_0 = ((MMFeedback_tE51A2F7A01B1E3BE46047E5A0D6BA5C79199FDCA*)__this)->___Active;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D_il2cpp_TypeInfo_var);
		bool L_1 = ((MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized;
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		return;
	}

IL_0010:
	{
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_2;
		L_2 = CinemachineImpulseManager_get_Instance_mCBBB7EE190D29704E4F44241A50BC2F6F23EB179(NULL);
		MMFeedbackTiming_t4F4BD4FA251C4038C8FAF0BEB673A8CCC479A9CD* L_3 = ((MMFeedback_tE51A2F7A01B1E3BE46047E5A0D6BA5C79199FDCA*)__this)->___Timing;
		NullCheck(L_3);
		int32_t L_4 = L_3->___TimescaleMode;
		NullCheck(L_2);
		L_2->___IgnoreTimeScale = (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		MMFeedbackTiming_t4F4BD4FA251C4038C8FAF0BEB673A8CCC479A9CD* L_5 = ((MMFeedback_tE51A2F7A01B1E3BE46047E5A0D6BA5C79199FDCA*)__this)->___Timing;
		NullCheck(L_5);
		bool L_6 = L_5->___ConstantIntensity;
		if (L_6)
		{
			goto IL_0038;
		}
	}
	{
		float L_7 = ___1_feedbacksIntensity;
		G_B6_0 = L_7;
		goto IL_003d;
	}

IL_0038:
	{
		G_B6_0 = (1.0f);
	}

IL_003d:
	{
		V_0 = G_B6_0;
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_8 = __this->___m_ImpulseDefinition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___Velocity;
		float L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		NullCheck(L_8);
		CinemachineImpulseDefinition_CreateEvent_m12158346403D3428D6DBC0D3D22DDDCF551E5B41(L_8, L_9, L_12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineImpulse_CustomStopFeedback_m7366BE8B560B4DA98133D3CEAB83116EDF6A3C36 (MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_feedbacksIntensity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((MMFeedback_tE51A2F7A01B1E3BE46047E5A0D6BA5C79199FDCA*)__this)->___Active;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D_il2cpp_TypeInfo_var);
		bool L_1 = ((MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		bool L_2 = __this->___ClearImpulseOnStop;
		if (L_2)
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		return;
	}

IL_0018:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_position;
		float L_4 = ___1_feedbacksIntensity;
		MMFeedback_CustomStopFeedback_m812755E219AA8EF519A2D89F6C91AB793AE27EDD(__this, L_3, L_4, NULL);
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_5;
		L_5 = CinemachineImpulseManager_get_Instance_mCBBB7EE190D29704E4F44241A50BC2F6F23EB179(NULL);
		NullCheck(L_5);
		CinemachineImpulseManager_Clear_mA6DC571A238EB0C4C7B07C06D2263B5743FB82BA(L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineImpulse__ctor_mF0C1C34831E745FA19F86D7ED81711B3A23811D7 (MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D* __this, const RuntimeMethod* method) 
{
	{
		MMFeedback__ctor_mCD506F8FC949D7574B8EB30A5C0CC117C19BD647(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineImpulse__cctor_m750F6A64B873A1B6CF710A875769B805D8917FF5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackCinemachineImpulse_tDA995C9877C6AC10EA0176B19A8F0E526467E55D_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized = (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineImpulseClear_CustomPlayFeedback_mB4C76D5D20D2F9C8603D979ABB66E165D491B404 (MMFeedbackCinemachineImpulseClear_t593754874A893902A94F35E475262D9F5E410CBF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_feedbacksIntensity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackCinemachineImpulseClear_t593754874A893902A94F35E475262D9F5E410CBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((MMFeedback_tE51A2F7A01B1E3BE46047E5A0D6BA5C79199FDCA*)__this)->___Active;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MMFeedbackCinemachineImpulseClear_t593754874A893902A94F35E475262D9F5E410CBF_il2cpp_TypeInfo_var);
		bool L_1 = ((MMFeedbackCinemachineImpulseClear_t593754874A893902A94F35E475262D9F5E410CBF_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackCinemachineImpulseClear_t593754874A893902A94F35E475262D9F5E410CBF_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized;
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		return;
	}

IL_0010:
	{
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_2;
		L_2 = CinemachineImpulseManager_get_Instance_mCBBB7EE190D29704E4F44241A50BC2F6F23EB179(NULL);
		NullCheck(L_2);
		CinemachineImpulseManager_Clear_mA6DC571A238EB0C4C7B07C06D2263B5743FB82BA(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineImpulseClear__ctor_m508AF9C769E38565BCF2CB49953C21651E69A317 (MMFeedbackCinemachineImpulseClear_t593754874A893902A94F35E475262D9F5E410CBF* __this, const RuntimeMethod* method) 
{
	{
		MMFeedback__ctor_mCD506F8FC949D7574B8EB30A5C0CC117C19BD647(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineImpulseClear__cctor_mC575F066130F49D92B73E8F9EECA48D7796FDF80 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackCinemachineImpulseClear_t593754874A893902A94F35E475262D9F5E410CBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MMFeedbackCinemachineImpulseClear_t593754874A893902A94F35E475262D9F5E410CBF_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackCinemachineImpulseClear_t593754874A893902A94F35E475262D9F5E410CBF_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized = (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMFeedbackCinemachineTransition_get_FeedbackDuration_mCC54A3DA3D84D6766255CFDBA6816DECFDD8AB85 (MMFeedbackCinemachineTransition_t66579D56518B0A6FEC7B8EF5936D080172E93109* __this, const RuntimeMethod* method) 
{
	{
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B* L_0 = (CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B*)(&__this->___BlendDefintion);
		float L_1 = L_0->___m_Time;
		float L_2;
		L_2 = VirtualFuncInvoker1< float, float >::Invoke(37, __this, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineTransition_set_FeedbackDuration_mD612803A6A2D98AB4C6ECD8CB3770D35B55D36A7 (MMFeedbackCinemachineTransition_t66579D56518B0A6FEC7B8EF5936D080172E93109* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B* L_0 = (CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B*)(&__this->___BlendDefintion);
		float L_1 = ___0_value;
		L_0->___m_Time = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineTransition_CustomPlayFeedback_m5161365984117A0453F2F2AF42E2871CE3F4363E (MMFeedbackCinemachineTransition_t66579D56518B0A6FEC7B8EF5936D080172E93109* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_feedbacksIntensity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackCinemachineTransition_t66579D56518B0A6FEC7B8EF5936D080172E93109_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((MMFeedback_tE51A2F7A01B1E3BE46047E5A0D6BA5C79199FDCA*)__this)->___Active;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MMFeedbackCinemachineTransition_t66579D56518B0A6FEC7B8EF5936D080172E93109_il2cpp_TypeInfo_var);
		bool L_1 = ((MMFeedbackCinemachineTransition_t66579D56518B0A6FEC7B8EF5936D080172E93109_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackCinemachineTransition_t66579D56518B0A6FEC7B8EF5936D080172E93109_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized;
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		return;
	}

IL_0010:
	{
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B L_2 = __this->___BlendDefintion;
		__this->____tempBlend = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____tempBlend))->___m_CustomCurve), (void*)NULL);
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B* L_3 = (CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B*)(&__this->____tempBlend);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(16, __this);
		L_3->___m_Time = L_4;
		int32_t L_5 = __this->___Mode;
		if (L_5)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_6 = __this->___Channel;
		MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* L_7;
		L_7 = VirtualFuncInvoker1< MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888*, int32_t >::Invoke(19, __this, L_6);
		bool L_8 = __this->___ForceMaxPriority;
		int32_t L_9 = __this->___NewPriority;
		bool L_10 = __this->___ForceTransition;
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B L_11 = __this->____tempBlend;
		bool L_12 = __this->___ResetValuesAfterTransition;
		MMFeedbackTiming_t4F4BD4FA251C4038C8FAF0BEB673A8CCC479A9CD* L_13 = ((MMFeedback_tE51A2F7A01B1E3BE46047E5A0D6BA5C79199FDCA*)__this)->___Timing;
		NullCheck(L_13);
		int32_t L_14 = L_13->___TimescaleMode;
		MMCinemachinePriorityEvent_Trigger_m2FB6D7EAFA26DD95124E06B2888170839145F59D(L_7, L_8, L_9, L_10, L_11, L_12, L_14, (bool)0, NULL);
		return;
	}

IL_0071:
	{
		int32_t L_15 = __this->___Channel;
		MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* L_16;
		L_16 = VirtualFuncInvoker1< MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888*, int32_t >::Invoke(19, __this, L_15);
		bool L_17 = __this->___ForceMaxPriority;
		bool L_18 = __this->___ForceTransition;
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B L_19 = __this->____tempBlend;
		bool L_20 = __this->___ResetValuesAfterTransition;
		MMFeedbackTiming_t4F4BD4FA251C4038C8FAF0BEB673A8CCC479A9CD* L_21 = ((MMFeedback_tE51A2F7A01B1E3BE46047E5A0D6BA5C79199FDCA*)__this)->___Timing;
		NullCheck(L_21);
		int32_t L_22 = L_21->___TimescaleMode;
		MMCinemachinePriorityEvent_Trigger_m2FB6D7EAFA26DD95124E06B2888170839145F59D(L_16, L_17, 0, L_18, L_19, L_20, L_22, (bool)0, NULL);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_23 = __this->___TargetVirtualCamera;
		int32_t L_24 = __this->___NewPriority;
		NullCheck(L_23);
		CinemachineVirtualCameraBase_set_Priority_m233ED0376CE0BD1244CCA52DF4532C8988DC05AC_inline(L_23, L_24, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineTransition__ctor_mE197459336F90D968C079F460997BC9B07B3D3A1 (MMFeedbackCinemachineTransition_t66579D56518B0A6FEC7B8EF5936D080172E93109* __this, const RuntimeMethod* method) 
{
	{
		__this->___ResetValuesAfterTransition = (bool)1;
		__this->___NewPriority = ((int32_t)10);
		__this->___ForceMaxPriority = (bool)1;
		MMFeedback__ctor_mCD506F8FC949D7574B8EB30A5C0CC117C19BD647(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMFeedbackCinemachineTransition__cctor_mE03B086D44259D9E1631530C612512656836A460 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMFeedbackCinemachineTransition_t66579D56518B0A6FEC7B8EF5936D080172E93109_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MMFeedbackCinemachineTransition_t66579D56518B0A6FEC7B8EF5936D080172E93109_StaticFields*)il2cpp_codegen_static_fields_for(MMFeedbackCinemachineTransition_t66579D56518B0A6FEC7B8EF5936D080172E93109_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized = (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MMF_CinemachineImpulse_get_HasRandomness_mF17ACDC29B522B24046655FE52900F505DF0B803 (MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMF_CinemachineImpulse_get_FeedbackDuration_m7DF82922006A07FF9C3CB02EA1E2D85422F3FE55 (MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131* __this, const RuntimeMethod* method) 
{
	{
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_0 = __this->___m_ImpulseDefinition;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return (0.0f);
	}

IL_000e:
	{
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_1 = __this->___m_ImpulseDefinition;
		NullCheck(L_1);
		EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* L_2 = (EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E*)(&L_1->___m_TimeEnvelope);
		float L_3;
		L_3 = EnvelopeDefinition_get_Duration_m3CF863DC6B71344BE096AD9CBFC6C86AD2FF634C(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulse_CustomPlayFeedback_m327933AFC8064FB14C29D3036B926DC1739939AC (MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_feedbacksIntensity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		bool L_0 = ((MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D*)__this)->___Active;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized;
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		return;
	}

IL_0010:
	{
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_2;
		L_2 = CinemachineImpulseManager_get_Instance_mCBBB7EE190D29704E4F44241A50BC2F6F23EB179(NULL);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(25, __this);
		NullCheck(L_2);
		L_2->___IgnoreTimeScale = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		float L_4 = ___1_feedbacksIntensity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_position;
		float L_6;
		L_6 = VirtualFuncInvoker2< float, float, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(22, __this, L_4, L_5);
		V_0 = L_6;
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_7 = __this->___m_ImpulseDefinition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___Velocity;
		float L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		NullCheck(L_7);
		CinemachineImpulseDefinition_CreateEvent_m12158346403D3428D6DBC0D3D22DDDCF551E5B41(L_7, L_8, L_11, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulse_CustomStopFeedback_m2D53260C94A5B5F6052D238128BCEA4E15E0B35A (MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_feedbacksIntensity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D*)__this)->___Active;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		bool L_2 = __this->___ClearImpulseOnStop;
		if (L_2)
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		return;
	}

IL_0018:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_position;
		float L_4 = ___1_feedbacksIntensity;
		MMF_Feedback_CustomStopFeedback_m9388036D957D90AD8C6BC3C4B17AC9A7B3B49A30(__this, L_3, L_4, NULL);
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_5;
		L_5 = CinemachineImpulseManager_get_Instance_mCBBB7EE190D29704E4F44241A50BC2F6F23EB179(NULL);
		NullCheck(L_5);
		CinemachineImpulseManager_Clear_mA6DC571A238EB0C4C7B07C06D2263B5743FB82BA(L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulse__ctor_m047E6E68528C063C6058D4E36E4ABF70E845E28C (MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131* __this, const RuntimeMethod* method) 
{
	{
		MMF_Feedback__ctor_mCD413701DAEE304A0840C520FF3EB470EE324AC5(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulse__cctor_mDF56927E5865698501F5C494B8242445491AC8FD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineImpulse_t90A334FA345704DE6CAFD89E9F3B45D577717131_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized = (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulseClear_CustomPlayFeedback_m622D190B08335B8640FC7D9CF907CE4BF96A3C9A (MMF_CinemachineImpulseClear_t27C051FD2457C2ED6BF2929DD9603D9F4E3120A9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_feedbacksIntensity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineImpulseClear_t27C051FD2457C2ED6BF2929DD9603D9F4E3120A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D*)__this)->___Active;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MMF_CinemachineImpulseClear_t27C051FD2457C2ED6BF2929DD9603D9F4E3120A9_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_CinemachineImpulseClear_t27C051FD2457C2ED6BF2929DD9603D9F4E3120A9_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineImpulseClear_t27C051FD2457C2ED6BF2929DD9603D9F4E3120A9_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized;
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		return;
	}

IL_0010:
	{
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_2;
		L_2 = CinemachineImpulseManager_get_Instance_mCBBB7EE190D29704E4F44241A50BC2F6F23EB179(NULL);
		NullCheck(L_2);
		CinemachineImpulseManager_Clear_mA6DC571A238EB0C4C7B07C06D2263B5743FB82BA(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulseClear__ctor_m15A600DA1716D5B0408182987F3496A05CB92ED7 (MMF_CinemachineImpulseClear_t27C051FD2457C2ED6BF2929DD9603D9F4E3120A9* __this, const RuntimeMethod* method) 
{
	{
		MMF_Feedback__ctor_mCD413701DAEE304A0840C520FF3EB470EE324AC5(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulseClear__cctor_mBDC1C2D393378F011EB5D1A3E20856D1BDAB99ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineImpulseClear_t27C051FD2457C2ED6BF2929DD9603D9F4E3120A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MMF_CinemachineImpulseClear_t27C051FD2457C2ED6BF2929DD9603D9F4E3120A9_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineImpulseClear_t27C051FD2457C2ED6BF2929DD9603D9F4E3120A9_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized = (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MMF_CinemachineImpulseSource_get_HasAutomatedTargetAcquisition_m8D4586CF6AE972794F4B434117337F53268AD140 (MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulseSource_AutomateTargetAcquisition_mCE57CDA5510CBCD6C1D6468ADAA8615C0229CB01 (MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_Feedback_FindAutomatedTarget_TisCinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83_m9BE4F2C9A2C7BBAA4BB66810779A1F85A6550DBD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* L_0;
		L_0 = GenericVirtualFuncInvoker0< CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* >::Invoke(MMF_Feedback_FindAutomatedTarget_TisCinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83_m9BE4F2C9A2C7BBAA4BB66810779A1F85A6550DBD_RuntimeMethod_var, __this);
		__this->___ImpulseSource = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ImpulseSource), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulseSource_CustomPlayFeedback_mC8AFF403882BCFDDBF8D119A26F3EC4FF8CF0EE6 (MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_feedbacksIntensity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D*)__this)->___Active;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized;
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		return;
	}

IL_0010:
	{
		CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* L_2 = __this->___ImpulseSource;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* L_4 = __this->___ImpulseSource;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___Velocity;
		NullCheck(L_4);
		CinemachineImpulseSource_GenerateImpulse_m700534622EE72CDDAFEBEFAB2E60F88654660B6A(L_4, L_5, NULL);
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulseSource_CustomStopFeedback_m192BEBEFD3FE17E3F9EDDA06F0169C2AF48D4EB2 (MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_feedbacksIntensity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D*)__this)->___Active;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		bool L_2 = __this->___ClearImpulseOnStop;
		if (L_2)
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		return;
	}

IL_0018:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_position;
		float L_4 = ___1_feedbacksIntensity;
		MMF_Feedback_CustomStopFeedback_m9388036D957D90AD8C6BC3C4B17AC9A7B3B49A30(__this, L_3, L_4, NULL);
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_5;
		L_5 = CinemachineImpulseManager_get_Instance_mCBBB7EE190D29704E4F44241A50BC2F6F23EB179(NULL);
		NullCheck(L_5);
		CinemachineImpulseManager_Clear_mA6DC571A238EB0C4C7B07C06D2263B5743FB82BA(L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulseSource_CustomRestoreInitialValues_mE85AE58EC55F5385BD4427A7D315114F1A83FB75 (MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D*)__this)->___Active;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized;
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		return;
	}

IL_0010:
	{
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_2;
		L_2 = CinemachineImpulseManager_get_Instance_mCBBB7EE190D29704E4F44241A50BC2F6F23EB179(NULL);
		NullCheck(L_2);
		CinemachineImpulseManager_Clear_mA6DC571A238EB0C4C7B07C06D2263B5743FB82BA(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulseSource__ctor_m78C274900B84ABA7D4A221658400645C1F34EE18 (MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (1.0f), (1.0f), (1.0f), NULL);
		__this->___Velocity = L_0;
		MMF_Feedback__ctor_mCD413701DAEE304A0840C520FF3EB470EE324AC5(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineImpulseSource__cctor_mDB44B980BDBEADF59B066E3A527F23DDE89B36C6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineImpulseSource_t9F058F7B40FDDD3C398BE92118D7F7BD2D861D49_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized = (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMF_CinemachineTransition_get_FeedbackDuration_mE4AB9695C200504382AE6505797224924930CC97 (MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8* __this, const RuntimeMethod* method) 
{
	{
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B* L_0 = (CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B*)(&__this->___BlendDefintion);
		float L_1 = L_0->___m_Time;
		float L_2;
		L_2 = VirtualFuncInvoker1< float, float >::Invoke(64, __this, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineTransition_set_FeedbackDuration_mF9347FCEDD53470118097014F9ADB90CC9B44127 (MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B* L_0 = (CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B*)(&__this->___BlendDefintion);
		float L_1 = ___0_value;
		L_0->___m_Time = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MMF_CinemachineTransition_get_HasAutomatedTargetAcquisition_m6343EBFF90C2E7436C2F12C51F641EC819C19DD7 (MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineTransition_AutomateTargetAcquisition_mA2C50232584A400C92C58FCF58C504860A239727 (MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_Feedback_FindAutomatedTarget_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_mA324472766B14380160E087155FAA624683354DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_0;
		L_0 = GenericVirtualFuncInvoker0< CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* >::Invoke(MMF_Feedback_FindAutomatedTarget_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_mA324472766B14380160E087155FAA624683354DC_RuntimeMethod_var, __this);
		__this->___TargetVirtualCamera = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TargetVirtualCamera), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MMF_CinemachineTransition_get_HasChannel_mADF2C9C6758A7C6794F0CDC65420CF55078B64C9 (MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineTransition_CustomPlayFeedback_m3DFD4590423FEBE0F356EA26452B05546CE92BF0 (MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_feedbacksIntensity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D*)__this)->___Active;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized;
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		return;
	}

IL_0010:
	{
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B L_2 = __this->___BlendDefintion;
		__this->____tempBlend = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____tempBlend))->___m_CustomCurve), (void*)NULL);
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B* L_3 = (CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B*)(&__this->____tempBlend);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(39, __this);
		L_3->___m_Time = L_4;
		int32_t L_5 = __this->___Mode;
		if (L_5)
		{
			goto IL_0066;
		}
	}
	{
		MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* L_6;
		L_6 = MMF_Feedback_get_ChannelData_m1DF71B238AB941001462C1FC46853C68FBC0B9FA(__this, NULL);
		bool L_7 = __this->___ForceMaxPriority;
		int32_t L_8 = __this->___NewPriority;
		bool L_9 = __this->___ForceTransition;
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B L_10 = __this->____tempBlend;
		bool L_11 = __this->___ResetValuesAfterTransition;
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(24, __this);
		MMCinemachinePriorityEvent_Trigger_m2FB6D7EAFA26DD95124E06B2888170839145F59D(L_6, L_7, L_8, L_9, L_10, L_11, L_12, (bool)0, NULL);
		return;
	}

IL_0066:
	{
		MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* L_13;
		L_13 = MMF_Feedback_get_ChannelData_m1DF71B238AB941001462C1FC46853C68FBC0B9FA(__this, NULL);
		bool L_14 = __this->___ForceMaxPriority;
		bool L_15 = __this->___ForceTransition;
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B L_16 = __this->____tempBlend;
		bool L_17 = __this->___ResetValuesAfterTransition;
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(24, __this);
		MMCinemachinePriorityEvent_Trigger_m2FB6D7EAFA26DD95124E06B2888170839145F59D(L_13, L_14, 0, L_15, L_16, L_17, L_18, (bool)0, NULL);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_19 = __this->___TargetVirtualCamera;
		int32_t L_20 = __this->___NewPriority;
		NullCheck(L_19);
		CinemachineVirtualCameraBase_set_Priority_m233ED0376CE0BD1244CCA52DF4532C8988DC05AC_inline(L_19, L_20, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineTransition_CustomRestoreInitialValues_m6CBAE968826708D9F348795596ED845B3805ABAB (MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((MMF_Feedback_t0B678D199FBB49B4BFF7B25186C23D19553ADA1D*)__this)->___Active;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8_il2cpp_TypeInfo_var);
		bool L_1 = ((MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized;
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		return;
	}

IL_0010:
	{
		MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* L_2;
		L_2 = MMF_Feedback_get_ChannelData_m1DF71B238AB941001462C1FC46853C68FBC0B9FA(__this, NULL);
		bool L_3 = __this->___ForceMaxPriority;
		bool L_4 = __this->___ForceTransition;
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B L_5 = __this->____tempBlend;
		bool L_6 = __this->___ResetValuesAfterTransition;
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(24, __this);
		MMCinemachinePriorityEvent_Trigger_m2FB6D7EAFA26DD95124E06B2888170839145F59D(L_2, L_3, 0, L_4, L_5, L_6, L_7, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineTransition__ctor_m13697265EA0477E2BCEB077C9783B96C3B8CCF78 (MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8* __this, const RuntimeMethod* method) 
{
	{
		__this->___ResetValuesAfterTransition = (bool)1;
		__this->___NewPriority = ((int32_t)10);
		__this->___ForceMaxPriority = (bool)1;
		MMF_Feedback__ctor_mCD413701DAEE304A0840C520FF3EB470EE324AC5(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMF_CinemachineTransition__cctor_m2E6AA23362091CE633C16319BE319F887ABC8DA4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8_StaticFields*)il2cpp_codegen_static_fields_for(MMF_CinemachineTransition_t3F8513D5C3668F4DB53E0940D604A0D346CF24D8_il2cpp_TypeInfo_var))->___FeedbackTypeAuthorized = (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMCinemachineCameraShaker_GetTime_m5FA41F37498C0EFDCCBABA66C26491A0E3D6FD95 (MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____timescaleMode;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMCinemachineCameraShaker_GetDeltaTime_m8C172518E7DEC953162B2DECBDF7436DBA962F83 (MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____timescaleMode;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_Awake_m3C05C3365913AAE198D61DA9C59A12DABFEF23A4 (MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269_m63C03133A16FCEF5C276CB88AD2FB3EB89DD2AD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_1;
		L_1 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_0, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		__this->____virtualCamera = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____virtualCamera), (void*)L_1);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_2 = __this->____virtualCamera;
		NullCheck(L_2);
		CinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269* L_3;
		L_3 = CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269_m63C03133A16FCEF5C276CB88AD2FB3EB89DD2AD1(L_2, CinemachineVirtualCamera_GetCinemachineComponent_TisCinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269_m63C03133A16FCEF5C276CB88AD2FB3EB89DD2AD1_RuntimeMethod_var);
		__this->____perlin = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____perlin), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_Start_m73F83A8B0222D9174CF7512E7B5633E5D08B979A (MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269* L_0 = __this->____perlin;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		CinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269* L_2 = __this->____perlin;
		NullCheck(L_2);
		float L_3 = L_2->___m_AmplitudeGain;
		__this->___IdleAmplitude = L_3;
		CinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269* L_4 = __this->____perlin;
		NullCheck(L_4);
		float L_5 = L_4->___m_FrequencyGain;
		__this->___IdleFrequency = L_5;
	}

IL_0030:
	{
		float L_6 = __this->___IdleAmplitude;
		__this->____targetAmplitude = L_6;
		float L_7 = __this->___IdleFrequency;
		__this->____targetFrequency = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_Update_m964CC72366F5D257FEAE0B31DE64EE99E126C8D0 (MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269* L_0 = __this->____perlin;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		CinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269* L_2 = __this->____perlin;
		float L_3 = __this->____targetAmplitude;
		NullCheck(L_2);
		L_2->___m_AmplitudeGain = L_3;
		CinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269* L_4 = __this->____perlin;
		CinemachineBasicMultiChannelPerlin_tDAA09E3E93032C713228E84CA33B21293E9A9269* L_5 = __this->____perlin;
		NullCheck(L_5);
		float L_6 = L_5->___m_FrequencyGain;
		float L_7 = __this->____targetFrequency;
		float L_8;
		L_8 = VirtualFuncInvoker0< float >::Invoke(5, __this);
		float L_9 = __this->___LerpSpeed;
		float L_10;
		L_10 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_6, L_7, ((float)il2cpp_codegen_multiply(L_8, L_9)), NULL);
		NullCheck(L_4);
		L_4->___m_FrequencyGain = L_10;
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_ShakeCamera_m205B1DA42B57384B9E6099A659A2D7A72222C367 (MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* __this, float ___0_duration, bool ___1_infinite, bool ___2_useUnscaledTime, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_duration;
		float L_1 = __this->___DefaultShakeAmplitude;
		float L_2 = __this->___DefaultShakeFrequency;
		bool L_3 = ___1_infinite;
		bool L_4 = ___2_useUnscaledTime;
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker5< RuntimeObject*, float, float, float, bool, bool >::Invoke(11, __this, L_0, L_1, L_2, L_3, L_4);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_ShakeCamera_mE23F478E58F52F68AA6B93CCE1C6E6404017CBBA (MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* __this, float ___0_duration, float ___1_amplitude, float ___2_frequency, bool ___3_infinite, bool ___4_useUnscaledTime, const RuntimeMethod* method) 
{
	{
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->____shakeCoroutine;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->____shakeCoroutine;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_1, NULL);
	}

IL_0014:
	{
		float L_2 = ___0_duration;
		float L_3 = ___1_amplitude;
		float L_4 = ___2_frequency;
		bool L_5 = ___3_infinite;
		bool L_6 = ___4_useUnscaledTime;
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker5< RuntimeObject*, float, float, float, bool, bool >::Invoke(11, __this, L_2, L_3, L_4, L_5, L_6);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
		__this->____shakeCoroutine = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____shakeCoroutine), (void*)L_8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MMCinemachineCameraShaker_ShakeCameraCo_m0B57179ACBEA3CF98767E5EC4E1357CBC80CECB7 (MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* __this, float ___0_duration, float ___1_amplitude, float ___2_frequency, bool ___3_infinite, bool ___4_useUnscaledTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477* L_0 = (U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477*)il2cpp_codegen_object_new(U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477_il2cpp_TypeInfo_var);
		U3CShakeCameraCoU3Ed__27__ctor_mC752F02CE0D18E5BF0BC6B385AC4B50462D7D67C(L_0, 0, NULL);
		U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477* L_2 = L_1;
		float L_3 = ___0_duration;
		NullCheck(L_2);
		L_2->___duration = L_3;
		U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477* L_4 = L_2;
		float L_5 = ___1_amplitude;
		NullCheck(L_4);
		L_4->___amplitude = L_5;
		U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477* L_6 = L_4;
		float L_7 = ___2_frequency;
		NullCheck(L_6);
		L_6->___frequency = L_7;
		U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477* L_8 = L_6;
		bool L_9 = ___3_infinite;
		NullCheck(L_8);
		L_8->___infinite = L_9;
		U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477* L_10 = L_8;
		bool L_11 = ___4_useUnscaledTime;
		NullCheck(L_10);
		L_10->___useUnscaledTime = L_11;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_CameraReset_m777562FE20253349BDA90034444853E7CBF76B35 (MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___IdleAmplitude;
		__this->____targetAmplitude = L_0;
		float L_1 = __this->___IdleFrequency;
		__this->____targetFrequency = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_OnCameraShakeEvent_m35E19514D27C6216E79040BCC9F7783A1FC959C5 (MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* __this, float ___0_duration, float ___1_amplitude, float ___2_frequency, float ___3_amplitudeX, float ___4_amplitudeY, float ___5_amplitudeZ, bool ___6_infinite, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___7_channelData, bool ___8_useUnscaledTime, const RuntimeMethod* method) 
{
	{
		MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* L_0 = ___7_channelData;
		int32_t L_1 = __this->___ChannelMode;
		int32_t L_2 = __this->___Channel;
		MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E* L_3 = __this->___MMChannelDefinition;
		bool L_4;
		L_4 = MMChannel_Match_m7AF32E7EAEA308801EE2A56B63407D8EF8209312(L_0, L_1, L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		float L_5 = ___0_duration;
		float L_6 = ___1_amplitude;
		float L_7 = ___2_frequency;
		bool L_8 = ___6_infinite;
		bool L_9 = ___8_useUnscaledTime;
		VirtualActionInvoker5< float, float, float, bool, bool >::Invoke(10, __this, L_5, L_6, L_7, L_8, L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_OnCameraShakeStopEvent_m521BF688D280F1E89729B3161A6A521B8B13B739 (MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* __this, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_channelData, const RuntimeMethod* method) 
{
	{
		MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* L_0 = ___0_channelData;
		int32_t L_1 = __this->___ChannelMode;
		int32_t L_2 = __this->___Channel;
		MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E* L_3 = __this->___MMChannelDefinition;
		bool L_4;
		L_4 = MMChannel_Match_m7AF32E7EAEA308801EE2A56B63407D8EF8209312(L_0, L_1, L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5 = __this->____shakeCoroutine;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6 = __this->____shakeCoroutine;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_6, NULL);
	}

IL_002f:
	{
		VirtualActionInvoker0::Invoke(12, __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_OnEnable_mD97234C840B048487BE7146E8B8F49C32E9BAF18 (MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t8F3069CFED90E34B40CF5BB68B095ACF9775E0CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tB9EED8DE5A66B26FCB9ADEDD1A910A2862B48662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t8F3069CFED90E34B40CF5BB68B095ACF9775E0CA* L_0 = (Delegate_t8F3069CFED90E34B40CF5BB68B095ACF9775E0CA*)il2cpp_codegen_object_new(Delegate_t8F3069CFED90E34B40CF5BB68B095ACF9775E0CA_il2cpp_TypeInfo_var);
		Delegate__ctor_m7CB5FEB96E25CDBD63C7E0A579CA8143E9BA8AFF(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 13)), NULL);
		MMCameraShakeEvent_Register_m7BFC0967C829FBBEEE5DCD07ADF255BE5507D91D(L_0, NULL);
		Delegate_tB9EED8DE5A66B26FCB9ADEDD1A910A2862B48662* L_1 = (Delegate_tB9EED8DE5A66B26FCB9ADEDD1A910A2862B48662*)il2cpp_codegen_object_new(Delegate_tB9EED8DE5A66B26FCB9ADEDD1A910A2862B48662_il2cpp_TypeInfo_var);
		Delegate__ctor_m63C01375264F2FE4B307E18D29F117B3F23B73B2(L_1, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 14)), NULL);
		MMCameraShakeStopEvent_Register_m318BD840460216E7221EFCE171AA62BDEB82BCEE(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_OnDisable_mCCFED102B1D3DF2B1A9EB093363B5C2AC9357E89 (MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t8F3069CFED90E34B40CF5BB68B095ACF9775E0CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tB9EED8DE5A66B26FCB9ADEDD1A910A2862B48662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t8F3069CFED90E34B40CF5BB68B095ACF9775E0CA* L_0 = (Delegate_t8F3069CFED90E34B40CF5BB68B095ACF9775E0CA*)il2cpp_codegen_object_new(Delegate_t8F3069CFED90E34B40CF5BB68B095ACF9775E0CA_il2cpp_TypeInfo_var);
		Delegate__ctor_m7CB5FEB96E25CDBD63C7E0A579CA8143E9BA8AFF(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 13)), NULL);
		MMCameraShakeEvent_Unregister_m8ED0BB2E7A7CCEA4B2E35156AB22E65F3FF3A29A(L_0, NULL);
		Delegate_tB9EED8DE5A66B26FCB9ADEDD1A910A2862B48662* L_1 = (Delegate_tB9EED8DE5A66B26FCB9ADEDD1A910A2862B48662*)il2cpp_codegen_object_new(Delegate_tB9EED8DE5A66B26FCB9ADEDD1A910A2862B48662_il2cpp_TypeInfo_var);
		Delegate__ctor_m63C01375264F2FE4B307E18D29F117B3F23B73B2(L_1, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 14)), NULL);
		MMCameraShakeStopEvent_Unregister_mE69EA56078B4ABA74367F9C073BB02FFC27BF0EE(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker_TestShake_m88E644DAB400000396A3ED6B5FD998E49FE225BC (MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->___TestDuration;
		float L_1 = __this->___TestAmplitude;
		float L_2 = __this->___TestFrequency;
		int32_t L_3 = __this->___ChannelMode;
		int32_t L_4 = __this->___Channel;
		MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E* L_5 = __this->___MMChannelDefinition;
		MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* L_6 = (MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888*)il2cpp_codegen_object_new(MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888_il2cpp_TypeInfo_var);
		MMChannelData__ctor_m8E17D07DCCABFB50334CCFDF5AEB230E32B390D1(L_6, L_3, L_4, L_5, NULL);
		MMCameraShakeEvent_Trigger_m2B95CAED61DC38D2B2C67AE4718449EC55F7BC7E(L_0, L_1, L_2, (0.0f), (0.0f), (0.0f), (bool)0, L_6, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineCameraShaker__ctor_m3041D9ECA821BF013877FDD10182B0FFA66AC034 (MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* __this, const RuntimeMethod* method) 
{
	{
		__this->___DefaultShakeAmplitude = (0.5f);
		__this->___DefaultShakeFrequency = (10.0f);
		__this->___IdleFrequency = (1.0f);
		__this->___LerpSpeed = (5.0f);
		__this->___TestDuration = (0.300000012f);
		__this->___TestAmplitude = (2.0f);
		__this->___TestFrequency = (20.0f);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeCameraCoU3Ed__27__ctor_mC752F02CE0D18E5BF0BC6B385AC4B50462D7D67C (U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeCameraCoU3Ed__27_System_IDisposable_Dispose_mF3E14759D0D7C72A66264EBFC98219B49790FE2B (U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShakeCameraCoU3Ed__27_MoveNext_m2DAF4AA7DBA764DBD50CBAF5EC6819B72BC11738 (U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* V_1 = NULL;
	MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* G_B5_0 = NULL;
	MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* G_B6_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_006a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state = (-1);
		MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* L_4 = V_1;
		float L_5 = __this->___amplitude;
		NullCheck(L_4);
		L_4->____targetAmplitude = L_5;
		MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* L_6 = V_1;
		float L_7 = __this->___frequency;
		NullCheck(L_6);
		L_6->____targetFrequency = L_7;
		MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* L_8 = V_1;
		bool L_9 = __this->___useUnscaledTime;
		if (L_9)
		{
			G_B5_0 = L_8;
			goto IL_0042;
		}
		G_B4_0 = L_8;
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0043;
	}

IL_0042:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0043:
	{
		NullCheck(G_B6_1);
		G_B6_1->____timescaleMode = G_B6_0;
		bool L_10 = __this->___infinite;
		if (L_10)
		{
			goto IL_0077;
		}
	}
	{
		float L_11 = __this->___duration;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_12 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_12, L_11, NULL);
		__this->___U3CU3E2__current = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_12);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_006a:
	{
		__this->___U3CU3E1__state = (-1);
		MMCinemachineCameraShaker_tFF3CD059083D1A332500FCCEEC5CBFD51EAFDAF5* L_13 = V_1;
		NullCheck(L_13);
		VirtualActionInvoker0::Invoke(12, L_13);
	}

IL_0077:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShakeCameraCoU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mECF6EBED2EC565ADB2C27127EA04DA6CCD119619 (U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeCameraCoU3Ed__27_System_Collections_IEnumerator_Reset_mD8CDCC79276F303A7DFEDAB70F3558B00D759E49 (U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShakeCameraCoU3Ed__27_System_Collections_IEnumerator_Reset_mD8CDCC79276F303A7DFEDAB70F3558B00D759E49_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShakeCameraCoU3Ed__27_System_Collections_IEnumerator_get_Current_m2EEF1B0CB7A86B1F9B614F135E39D536ECCD7037 (U3CShakeCameraCoU3Ed__27_t40B1B10F48251EB8B212EE44214C8197115B1477* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_Initialization_m605D3A3D5E192592B530584FE0E779380371223C (MMCinemachineClippingPlanesShaker_t7851747D89A493856A718862B75850B59C99DB3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MMShaker_Initialization_mF435F195C4DE0AB245013FE4AC5C49DAF00EA29A(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_1;
		L_1 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_0, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		__this->____targetCamera = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____targetCamera), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_Reset_mE9A4C7B81616469D1898B8BB7C23874EFFC0FF61 (MMCinemachineClippingPlanesShaker_t7851747D89A493856A718862B75850B59C99DB3D* __this, const RuntimeMethod* method) 
{
	{
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___ShakeDuration = (0.5f);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_Shake_mBE6B5179C7EFCE9A56008C641880B11436E2EDDD (MMCinemachineClippingPlanesShaker_t7851747D89A493856A718862B75850B59C99DB3D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___ShakeNear;
		float L_1 = __this->___RemapNearZero;
		float L_2 = __this->___RemapNearOne;
		bool L_3 = __this->___RelativeClippingPlanes;
		float L_4 = __this->____initialNear;
		float L_5;
		L_5 = VirtualFuncInvoker5< float, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, float, float, bool, float >::Invoke(14, __this, L_0, L_1, L_2, L_3, L_4);
		V_0 = L_5;
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_6 = __this->____targetCamera;
		NullCheck(L_6);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_7 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_6->___m_Lens);
		float L_8 = V_0;
		L_7->___NearClipPlane = L_8;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9 = __this->___ShakeFar;
		float L_10 = __this->___RemapFarZero;
		float L_11 = __this->___RemapFarOne;
		bool L_12 = __this->___RelativeClippingPlanes;
		float L_13 = __this->____initialFar;
		float L_14;
		L_14 = VirtualFuncInvoker5< float, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, float, float, bool, float >::Invoke(14, __this, L_9, L_10, L_11, L_12, L_13);
		V_1 = L_14;
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_15 = __this->____targetCamera;
		NullCheck(L_15);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_16 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_15->___m_Lens);
		float L_17 = V_1;
		L_16->___FarClipPlane = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_GrabInitialValues_mEA6A3C163EC251DB3376C955DB2B55F5D62DAEA1 (MMCinemachineClippingPlanesShaker_t7851747D89A493856A718862B75850B59C99DB3D* __this, const RuntimeMethod* method) 
{
	{
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_0 = __this->____targetCamera;
		NullCheck(L_0);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_1 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_0->___m_Lens);
		float L_2 = L_1->___NearClipPlane;
		__this->____initialNear = L_2;
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_3 = __this->____targetCamera;
		NullCheck(L_3);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_4 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_3->___m_Lens);
		float L_5 = L_4->___FarClipPlane;
		__this->____initialFar = L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_OnMMCameraClippingPlanesShakeEvent_mB110C7368586C52B0C3A0D683181106AB60A3C60 (MMCinemachineClippingPlanesShaker_t7851747D89A493856A718862B75850B59C99DB3D* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_animNearCurve, float ___1_duration, float ___2_remapNearMin, float ___3_remapNearMax, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___4_animFarCurve, float ___5_remapFarMin, float ___6_remapFarMax, bool ___7_relativeValues, float ___8_feedbacksIntensity, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___9_channelData, bool ___10_resetShakerValuesAfterShake, bool ___11_resetTargetValuesAfterShake, bool ___12_forwardDirection, int32_t ___13_timescaleMode, bool ___14_stop, bool ___15_restore, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* L_0 = ___9_channelData;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		bool L_2;
		L_2 = VirtualFuncInvoker4< bool, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888*, bool, float, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(25, __this, L_0, (bool)0, (0.0f), L_1);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		bool L_3 = ___14_stop;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		VirtualActionInvoker0::Invoke(22, __this);
		return;
	}

IL_0025:
	{
		bool L_4 = ___15_restore;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		VirtualActionInvoker0::Invoke(15, __this);
		return;
	}

IL_0030:
	{
		bool L_5 = ((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___Interruptible;
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		bool L_6 = ((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___Shaking;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		return;
	}

IL_0041:
	{
		bool L_7 = ___10_resetShakerValuesAfterShake;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->____resetShakerValuesAfterShake = L_7;
		bool L_8 = ___11_resetTargetValuesAfterShake;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->____resetTargetValuesAfterShake = L_8;
		bool L_9 = ___10_resetShakerValuesAfterShake;
		if (!L_9)
		{
			goto IL_00b5;
		}
	}
	{
		float L_10 = ((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___ShakeDuration;
		__this->____originalShakeDuration = L_10;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = __this->___ShakeNear;
		__this->____originalShakeNear = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____originalShakeNear), (void*)L_11);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = __this->___ShakeFar;
		__this->____originalShakeFar = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____originalShakeFar), (void*)L_12);
		float L_13 = __this->___RemapNearZero;
		__this->____originalRemapNearZero = L_13;
		float L_14 = __this->___RemapNearOne;
		__this->____originalRemapNearOne = L_14;
		float L_15 = __this->___RemapFarZero;
		__this->____originalRemapFarZero = L_15;
		float L_16 = __this->___RemapFarOne;
		__this->____originalRemapFarOne = L_16;
		bool L_17 = __this->___RelativeClippingPlanes;
		__this->____originalRelativeClippingPlanes = L_17;
	}

IL_00b5:
	{
		int32_t L_18 = ___13_timescaleMode;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___TimescaleMode = L_18;
		float L_19 = ___1_duration;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___ShakeDuration = L_19;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_20 = ___0_animNearCurve;
		__this->___ShakeNear = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShakeNear), (void*)L_20);
		float L_21 = ___2_remapNearMin;
		float L_22 = ___8_feedbacksIntensity;
		__this->___RemapNearZero = ((float)il2cpp_codegen_multiply(L_21, L_22));
		float L_23 = ___3_remapNearMax;
		float L_24 = ___8_feedbacksIntensity;
		__this->___RemapNearOne = ((float)il2cpp_codegen_multiply(L_23, L_24));
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_25 = ___4_animFarCurve;
		__this->___ShakeFar = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShakeFar), (void*)L_25);
		float L_26 = ___5_remapFarMin;
		float L_27 = ___8_feedbacksIntensity;
		__this->___RemapFarZero = ((float)il2cpp_codegen_multiply(L_26, L_27));
		float L_28 = ___6_remapFarMax;
		float L_29 = ___8_feedbacksIntensity;
		__this->___RemapFarOne = ((float)il2cpp_codegen_multiply(L_28, L_29));
		bool L_30 = ___7_relativeValues;
		__this->___RelativeClippingPlanes = L_30;
		bool L_31 = ___12_forwardDirection;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___ForwardDirection = L_31;
		VirtualActionInvoker0::Invoke(21, __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_ResetTargetValues_mDA2C536D84A8348CB74FC9AE25B0ABDB6A747250 (MMCinemachineClippingPlanesShaker_t7851747D89A493856A718862B75850B59C99DB3D* __this, const RuntimeMethod* method) 
{
	{
		MMShaker_ResetTargetValues_mD7E138483910DEE0DEF4276FF39F07A6AE80AE59(__this, NULL);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_0 = __this->____targetCamera;
		NullCheck(L_0);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_1 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_0->___m_Lens);
		float L_2 = __this->____initialNear;
		L_1->___NearClipPlane = L_2;
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_3 = __this->____targetCamera;
		NullCheck(L_3);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_4 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_3->___m_Lens);
		float L_5 = __this->____initialFar;
		L_4->___FarClipPlane = L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_ResetShakerValues_mAD1967572FEBC1B1C727BAD2EF8C9DEF401483EB (MMCinemachineClippingPlanesShaker_t7851747D89A493856A718862B75850B59C99DB3D* __this, const RuntimeMethod* method) 
{
	{
		MMShaker_ResetShakerValues_mF597524D875B4EA6053014C7E9F63177D123C490(__this, NULL);
		float L_0 = __this->____originalShakeDuration;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___ShakeDuration = L_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = __this->____originalShakeNear;
		__this->___ShakeNear = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShakeNear), (void*)L_1);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = __this->____originalShakeFar;
		__this->___ShakeFar = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShakeFar), (void*)L_2);
		float L_3 = __this->____originalRemapNearZero;
		__this->___RemapNearZero = L_3;
		float L_4 = __this->____originalRemapNearOne;
		__this->___RemapNearOne = L_4;
		float L_5 = __this->____originalRemapFarZero;
		__this->___RemapFarZero = L_5;
		float L_6 = __this->____originalRemapFarOne;
		__this->___RemapFarOne = L_6;
		bool L_7 = __this->____originalRelativeClippingPlanes;
		__this->___RelativeClippingPlanes = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_StartListening_m382C6B6493E634AF2A6D1F37B32F422C2B0F7558 (MMCinemachineClippingPlanesShaker_t7851747D89A493856A718862B75850B59C99DB3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t9335CDEAFF0FB08FD5B9E989B907490B098870E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MMShaker_StartListening_m36823EC65926E79570BE8564A9C7F90DCEA8B7AD(__this, NULL);
		Delegate_t9335CDEAFF0FB08FD5B9E989B907490B098870E3* L_0 = (Delegate_t9335CDEAFF0FB08FD5B9E989B907490B098870E3*)il2cpp_codegen_object_new(Delegate_t9335CDEAFF0FB08FD5B9E989B907490B098870E3_il2cpp_TypeInfo_var);
		Delegate__ctor_mFF2CF1BA610BC049B43CDE70406E4C28B45EA7FA(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 28)), NULL);
		MMCameraClippingPlanesShakeEvent_Register_mF87E62B189E26C561BCA3A40E297DA17E9AA7FF3(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker_StopListening_m663CB34D33F8086FBAC5F6C90E2FD4EA70F4B06C (MMCinemachineClippingPlanesShaker_t7851747D89A493856A718862B75850B59C99DB3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t9335CDEAFF0FB08FD5B9E989B907490B098870E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MMShaker_StopListening_m7F583AAD3037B2610ADB4BA3BBF63847EF3EDE1C(__this, NULL);
		Delegate_t9335CDEAFF0FB08FD5B9E989B907490B098870E3* L_0 = (Delegate_t9335CDEAFF0FB08FD5B9E989B907490B098870E3*)il2cpp_codegen_object_new(Delegate_t9335CDEAFF0FB08FD5B9E989B907490B098870E3_il2cpp_TypeInfo_var);
		Delegate__ctor_mFF2CF1BA610BC049B43CDE70406E4C28B45EA7FA(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 28)), NULL);
		MMCameraClippingPlanesShakeEvent_Unregister_mF4002BB9EC90EC4D0C3362819546B37DCCACFCD1(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineClippingPlanesShaker__ctor_mDBD3DBC91E44ED7CC9295FC99EF3D416932D3329 (MMCinemachineClippingPlanesShaker_t7851747D89A493856A718862B75850B59C99DB3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (0.5f), (1.0f), NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_6), (1.0f), (0.0f), NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_6);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_7, L_5, NULL);
		__this->___ShakeNear = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShakeNear), (void*)L_7);
		__this->___RemapNearZero = (0.300000012f);
		__this->___RemapNearOne = (100.0f);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_8 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_9 = L_8;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_10), (0.0f), (0.0f), NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_10);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_11 = L_9;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_12), (0.5f), (1.0f), NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_12);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_13 = L_11;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_14), (1.0f), (0.0f), NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_14);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_15 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_15, L_13, NULL);
		__this->___ShakeFar = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShakeFar), (void*)L_15);
		__this->___RemapFarZero = (1000.0f);
		__this->___RemapFarOne = (1000.0f);
		MMShaker__ctor_mF8C6BFF676BA0F272791D3B64B0E5EB2E598A709(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_Initialization_mF437E0F15248EEB909C4A064D2316C713DE33FF3 (MMCinemachineFieldOfViewShaker_t1BCC979BAE60EE46A3082B43C9024218559403C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MMShaker_Initialization_mF435F195C4DE0AB245013FE4AC5C49DAF00EA29A(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_1;
		L_1 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_0, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		__this->____targetCamera = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____targetCamera), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_Reset_m6E547CF7A6BC6FE34A8AEA3E10660A3921ECD408 (MMCinemachineFieldOfViewShaker_t1BCC979BAE60EE46A3082B43C9024218559403C5* __this, const RuntimeMethod* method) 
{
	{
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___ShakeDuration = (0.5f);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_Shake_m4BBB3C251DF7D5737F0E4C5B982431CDCE3F891D (MMCinemachineFieldOfViewShaker_t1BCC979BAE60EE46A3082B43C9024218559403C5* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___ShakeFieldOfView;
		float L_1 = __this->___RemapFieldOfViewZero;
		float L_2 = __this->___RemapFieldOfViewOne;
		bool L_3 = __this->___RelativeFieldOfView;
		float L_4 = __this->____initialFieldOfView;
		float L_5;
		L_5 = VirtualFuncInvoker5< float, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, float, float, bool, float >::Invoke(14, __this, L_0, L_1, L_2, L_3, L_4);
		V_0 = L_5;
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_6 = __this->____targetCamera;
		NullCheck(L_6);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_7 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_6->___m_Lens);
		float L_8 = V_0;
		L_7->___FieldOfView = L_8;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_GrabInitialValues_mC442989521060FCC04209A9C593D0F8A61F56A7E (MMCinemachineFieldOfViewShaker_t1BCC979BAE60EE46A3082B43C9024218559403C5* __this, const RuntimeMethod* method) 
{
	{
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_0 = __this->____targetCamera;
		NullCheck(L_0);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_1 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_0->___m_Lens);
		float L_2 = L_1->___FieldOfView;
		__this->____initialFieldOfView = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_OnMMCameraFieldOfViewShakeEvent_m35E987F68E1C06D6221D4A9E0239EE48CC84741E (MMCinemachineFieldOfViewShaker_t1BCC979BAE60EE46A3082B43C9024218559403C5* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_distortionCurve, float ___1_duration, float ___2_remapMin, float ___3_remapMax, bool ___4_relativeDistortion, float ___5_feedbacksIntensity, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___6_channelData, bool ___7_resetShakerValuesAfterShake, bool ___8_resetTargetValuesAfterShake, bool ___9_forwardDirection, int32_t ___10_timescaleMode, bool ___11_stop, bool ___12_restore, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* L_0 = ___6_channelData;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		bool L_2;
		L_2 = VirtualFuncInvoker4< bool, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888*, bool, float, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(25, __this, L_0, (bool)0, (0.0f), L_1);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		bool L_3 = ___11_stop;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		VirtualActionInvoker0::Invoke(22, __this);
		return;
	}

IL_0025:
	{
		bool L_4 = ___12_restore;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		VirtualActionInvoker0::Invoke(15, __this);
		return;
	}

IL_0030:
	{
		bool L_5 = ((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___Interruptible;
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		bool L_6 = ((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___Shaking;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		return;
	}

IL_0041:
	{
		bool L_7 = ___7_resetShakerValuesAfterShake;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->____resetShakerValuesAfterShake = L_7;
		bool L_8 = ___8_resetTargetValuesAfterShake;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->____resetTargetValuesAfterShake = L_8;
		bool L_9 = ___7_resetShakerValuesAfterShake;
		if (!L_9)
		{
			goto IL_0091;
		}
	}
	{
		float L_10 = ((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___ShakeDuration;
		__this->____originalShakeDuration = L_10;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = __this->___ShakeFieldOfView;
		__this->____originalShakeFieldOfView = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____originalShakeFieldOfView), (void*)L_11);
		float L_12 = __this->___RemapFieldOfViewZero;
		__this->____originalRemapFieldOfViewZero = L_12;
		float L_13 = __this->___RemapFieldOfViewOne;
		__this->____originalRemapFieldOfViewOne = L_13;
		bool L_14 = __this->___RelativeFieldOfView;
		__this->____originalRelativeFieldOfView = L_14;
	}

IL_0091:
	{
		int32_t L_15 = ___10_timescaleMode;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___TimescaleMode = L_15;
		float L_16 = ___1_duration;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___ShakeDuration = L_16;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_17 = ___0_distortionCurve;
		__this->___ShakeFieldOfView = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShakeFieldOfView), (void*)L_17);
		float L_18 = ___2_remapMin;
		float L_19 = ___5_feedbacksIntensity;
		__this->___RemapFieldOfViewZero = ((float)il2cpp_codegen_multiply(L_18, L_19));
		float L_20 = ___3_remapMax;
		float L_21 = ___5_feedbacksIntensity;
		__this->___RemapFieldOfViewOne = ((float)il2cpp_codegen_multiply(L_20, L_21));
		bool L_22 = ___4_relativeDistortion;
		__this->___RelativeFieldOfView = L_22;
		bool L_23 = ___9_forwardDirection;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___ForwardDirection = L_23;
		VirtualActionInvoker0::Invoke(21, __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_ResetTargetValues_m18AB5A6F6529FD69DE410DB32F516C46E25EA30C (MMCinemachineFieldOfViewShaker_t1BCC979BAE60EE46A3082B43C9024218559403C5* __this, const RuntimeMethod* method) 
{
	{
		MMShaker_ResetTargetValues_mD7E138483910DEE0DEF4276FF39F07A6AE80AE59(__this, NULL);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_0 = __this->____targetCamera;
		NullCheck(L_0);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_1 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_0->___m_Lens);
		float L_2 = __this->____initialFieldOfView;
		L_1->___FieldOfView = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_ResetShakerValues_m16600E4B007436BA20DC0B30A249B7B4B23051E1 (MMCinemachineFieldOfViewShaker_t1BCC979BAE60EE46A3082B43C9024218559403C5* __this, const RuntimeMethod* method) 
{
	{
		MMShaker_ResetShakerValues_mF597524D875B4EA6053014C7E9F63177D123C490(__this, NULL);
		float L_0 = __this->____originalShakeDuration;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___ShakeDuration = L_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = __this->____originalShakeFieldOfView;
		__this->___ShakeFieldOfView = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShakeFieldOfView), (void*)L_1);
		float L_2 = __this->____originalRemapFieldOfViewZero;
		__this->___RemapFieldOfViewZero = L_2;
		float L_3 = __this->____originalRemapFieldOfViewOne;
		__this->___RemapFieldOfViewOne = L_3;
		bool L_4 = __this->____originalRelativeFieldOfView;
		__this->___RelativeFieldOfView = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_StartListening_mB0D3DC90103F0C1B6CC10BCCCDF8F831CF6036F4 (MMCinemachineFieldOfViewShaker_t1BCC979BAE60EE46A3082B43C9024218559403C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tB0BC9D7A574413E043B438F0A068AD7FB33AB277_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MMShaker_StartListening_m36823EC65926E79570BE8564A9C7F90DCEA8B7AD(__this, NULL);
		Delegate_tB0BC9D7A574413E043B438F0A068AD7FB33AB277* L_0 = (Delegate_tB0BC9D7A574413E043B438F0A068AD7FB33AB277*)il2cpp_codegen_object_new(Delegate_tB0BC9D7A574413E043B438F0A068AD7FB33AB277_il2cpp_TypeInfo_var);
		Delegate__ctor_m321FFD3E054C53C801D96CC148892FA3E3A55ECB(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 28)), NULL);
		MMCameraFieldOfViewShakeEvent_Register_mC79F1A4954A1AFE8872758F1BF3BC9A7D20454C9(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker_StopListening_m28FC30250B795704CF7AC3539BDA5826F0DE7664 (MMCinemachineFieldOfViewShaker_t1BCC979BAE60EE46A3082B43C9024218559403C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tB0BC9D7A574413E043B438F0A068AD7FB33AB277_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MMShaker_StopListening_m7F583AAD3037B2610ADB4BA3BBF63847EF3EDE1C(__this, NULL);
		Delegate_tB0BC9D7A574413E043B438F0A068AD7FB33AB277* L_0 = (Delegate_tB0BC9D7A574413E043B438F0A068AD7FB33AB277*)il2cpp_codegen_object_new(Delegate_tB0BC9D7A574413E043B438F0A068AD7FB33AB277_il2cpp_TypeInfo_var);
		Delegate__ctor_m321FFD3E054C53C801D96CC148892FA3E3A55ECB(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 28)), NULL);
		MMCameraFieldOfViewShakeEvent_Unregister_m5790F78661BF6DF619379F690D7336A5D860A3F2(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFieldOfViewShaker__ctor_mEA5FCC82DBDD22D784634986E5E216A265770351 (MMCinemachineFieldOfViewShaker_t1BCC979BAE60EE46A3082B43C9024218559403C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (0.5f), (1.0f), NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_6), (1.0f), (0.0f), NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_6);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_7, L_5, NULL);
		__this->___ShakeFieldOfView = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShakeFieldOfView), (void*)L_7);
		__this->___RemapFieldOfViewZero = (60.0f);
		__this->___RemapFieldOfViewOne = (120.0f);
		MMShaker__ctor_mF8C6BFF676BA0F272791D3B64B0E5EB2E598A709(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFreeLookZoom_Awake_m9CB69056CB21B0F94EF1F68594187263031F4BD9 (MMCinemachineFreeLookZoom_t6535271BE733083A975D4068708827E4A05DEC1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A_m55FDBF088D5B4E935514B4B81F63DE1044B0101D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_1;
		L_1 = GameObject_GetComponent_TisCinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A_m55FDBF088D5B4E935514B4B81F63DE1044B0101D(L_0, GameObject_GetComponent_TisCinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A_m55FDBF088D5B4E935514B4B81F63DE1044B0101D_RuntimeMethod_var);
		__this->____freeLookCamera = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____freeLookCamera), (void*)L_1);
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_2 = __this->____freeLookCamera;
		NullCheck(L_2);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_3 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_2->___m_Lens);
		float L_4 = L_3->___FieldOfView;
		__this->____initialFieldOfView = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFreeLookZoom_Update_m74875FB2D88BCE2506BBCB410073C2088233DDAA (MMCinemachineFreeLookZoom_t6535271BE733083A975D4068708827E4A05DEC1E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____zooming;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_1 = __this->____freeLookCamera;
		NullCheck(L_1);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_2 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_1->___m_Lens);
		float L_3 = L_2->___FieldOfView;
		float L_4 = __this->____targetFieldOfView;
		if ((((float)L_3) == ((float)L_4)))
		{
			goto IL_006d;
		}
	}
	{
		float L_5 = __this->____delta;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_7 = __this->____transitionDuration;
		__this->____delta = ((float)il2cpp_codegen_add(L_5, ((float)(L_6/L_7))));
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_8 = __this->____freeLookCamera;
		NullCheck(L_8);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_9 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_8->___m_Lens);
		float L_10 = __this->____startFieldOfView;
		float L_11 = __this->____targetFieldOfView;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = __this->___ZoomCurve;
		float L_13 = __this->____delta;
		NullCheck(L_12);
		float L_14;
		L_14 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_12, L_13, NULL);
		float L_15;
		L_15 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_10, L_11, L_14, NULL);
		L_9->___FieldOfView = L_15;
		return;
	}

IL_006d:
	{
		bool L_16 = __this->____destinationReached;
		if (L_16)
		{
			goto IL_0087;
		}
	}
	{
		float L_17;
		L_17 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->____reachedDestinationTimestamp = L_17;
		__this->____destinationReached = (bool)1;
	}

IL_0087:
	{
		int32_t L_18 = __this->____mode;
		if (L_18)
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_19 = __this->____direction;
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00d7;
		}
	}
	{
		float L_20;
		L_20 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_21 = __this->____reachedDestinationTimestamp;
		float L_22 = __this->____duration;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_20, L_21))) > ((float)L_22))))
		{
			goto IL_00de;
		}
	}
	{
		__this->____direction = (-1);
		float L_23 = __this->____targetFieldOfView;
		__this->____startFieldOfView = L_23;
		float L_24 = __this->____initialFieldOfView;
		__this->____targetFieldOfView = L_24;
		__this->____delta = (0.0f);
		return;
	}

IL_00d7:
	{
		__this->____zooming = (bool)0;
	}

IL_00de:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFreeLookZoom_Zoom_m3832EE0E3F88C915C6C716238B1263D1926D77AE (MMCinemachineFreeLookZoom_t6535271BE733083A975D4068708827E4A05DEC1E* __this, int32_t ___0_mode, float ___1_newFieldOfView, float ___2_transitionDuration, float ___3_duration, bool ___4_relative, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____zooming;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->____zooming = (bool)1;
		__this->____delta = (0.0f);
		int32_t L_1 = ___0_mode;
		__this->____mode = L_1;
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_2 = __this->____freeLookCamera;
		NullCheck(L_2);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_3 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_2->___m_Lens);
		float L_4 = L_3->___FieldOfView;
		__this->____startFieldOfView = L_4;
		float L_5 = ___2_transitionDuration;
		__this->____transitionDuration = L_5;
		float L_6 = ___3_duration;
		__this->____duration = L_6;
		float L_7 = ___2_transitionDuration;
		__this->____transitionDuration = L_7;
		__this->____direction = 1;
		__this->____destinationReached = (bool)0;
		int32_t L_8 = ___0_mode;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0070;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_0082;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_0070:
	{
		float L_9 = ___1_newFieldOfView;
		__this->____targetFieldOfView = L_9;
		goto IL_008e;
	}

IL_0079:
	{
		float L_10 = ___1_newFieldOfView;
		__this->____targetFieldOfView = L_10;
		goto IL_008e;
	}

IL_0082:
	{
		float L_11 = __this->____initialFieldOfView;
		__this->____targetFieldOfView = L_11;
	}

IL_008e:
	{
		bool L_12 = ___4_relative;
		if (!L_12)
		{
			goto IL_00a5;
		}
	}
	{
		float L_13 = __this->____targetFieldOfView;
		float L_14 = __this->____initialFieldOfView;
		__this->____targetFieldOfView = ((float)il2cpp_codegen_add(L_13, L_14));
	}

IL_00a5:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFreeLookZoom_TestZoom_m9552AFAE3871D313D7309B69D33E28F052E65BFA (MMCinemachineFreeLookZoom_t6535271BE733083A975D4068708827E4A05DEC1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___TestMode;
		float L_1 = __this->___TestFieldOfView;
		float L_2 = __this->___TestTransitionDuration;
		float L_3 = __this->___TestDuration;
		VirtualActionInvoker5< int32_t, float, float, float, bool >::Invoke(6, __this, L_0, L_1, L_2, L_3, (bool)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFreeLookZoom_OnCameraZoomEvent_m26F7306ED791CE2795D1AA4CFAFE44695CB55C31 (MMCinemachineFreeLookZoom_t6535271BE733083A975D4068708827E4A05DEC1E* __this, int32_t ___0_mode, float ___1_newFieldOfView, float ___2_transitionDuration, float ___3_duration, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___4_channelData, bool ___5_useUnscaledTime, bool ___6_stop, bool ___7_relative, bool ___8_restore, const RuntimeMethod* method) 
{
	{
		MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* L_0 = ___4_channelData;
		int32_t L_1 = __this->___ChannelMode;
		int32_t L_2 = __this->___Channel;
		MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E* L_3 = __this->___MMChannelDefinition;
		bool L_4;
		L_4 = MMChannel_Match_m7AF32E7EAEA308801EE2A56B63407D8EF8209312(L_0, L_1, L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		bool L_5 = ___6_stop;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		__this->____zooming = (bool)0;
		return;
	}

IL_0028:
	{
		bool L_6 = ___8_restore;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		CinemachineFreeLook_t397C813915C4BDC42D63DE82DF52897738FCBA1A* L_7 = __this->____freeLookCamera;
		NullCheck(L_7);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_8 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_7->___m_Lens);
		float L_9 = __this->____initialFieldOfView;
		L_8->___FieldOfView = L_9;
		return;
	}

IL_0043:
	{
		int32_t L_10 = ___0_mode;
		float L_11 = ___1_newFieldOfView;
		float L_12 = ___2_transitionDuration;
		float L_13 = ___3_duration;
		bool L_14 = ___7_relative;
		VirtualActionInvoker5< int32_t, float, float, float, bool >::Invoke(6, __this, L_10, L_11, L_12, L_13, L_14);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFreeLookZoom_OnEnable_m31C6EDEEFF51A24DC77551AB7CDD8AB253FF2F47 (MMCinemachineFreeLookZoom_t6535271BE733083A975D4068708827E4A05DEC1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260* L_0 = (Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260*)il2cpp_codegen_object_new(Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260_il2cpp_TypeInfo_var);
		Delegate__ctor_m8D1004BCEFC6D845CBCB8EA17EF4FDBB819D808C(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 8)), NULL);
		MMCameraZoomEvent_Register_m3BA025FD8AB4CDCE718D0FEEAB365B0E49EE94A0(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFreeLookZoom_OnDisable_mEADA1FC245E253B0E2CDC09CA178F49A011332F7 (MMCinemachineFreeLookZoom_t6535271BE733083A975D4068708827E4A05DEC1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260* L_0 = (Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260*)il2cpp_codegen_object_new(Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260_il2cpp_TypeInfo_var);
		Delegate__ctor_m8D1004BCEFC6D845CBCB8EA17EF4FDBB819D808C(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 8)), NULL);
		MMCameraZoomEvent_Unregister_m4A7B1DFA4E416AE9FEFD017466C03E5B18B1EF45(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineFreeLookZoom__ctor_m269CE8779DEE61F205F6DF5143FBC9A17F199E51 (MMCinemachineFreeLookZoom_t6535271BE733083A975D4068708827E4A05DEC1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (1.0f), (1.0f), NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_5, L_3, NULL);
		__this->___ZoomCurve = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ZoomCurve), (void*)L_5);
		__this->___TestFieldOfView = (30.0f);
		__this->___TestTransitionDuration = (0.100000001f);
		__this->___TestDuration = (0.0500000007f);
		__this->____direction = 1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_Initialization_m6EAAEC2A573176C7329DD993E1E4C44BD879C9E0 (MMCinemachineOrthographicSizeShaker_t094C6772F057FE073685EB9E6AB0B65C7EAE909C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MMShaker_Initialization_mF435F195C4DE0AB245013FE4AC5C49DAF00EA29A(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_1;
		L_1 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_0, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		__this->____targetCamera = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____targetCamera), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_Reset_m5AD5A152203F4D6F8C4C79B5A9222B3B3D352BB9 (MMCinemachineOrthographicSizeShaker_t094C6772F057FE073685EB9E6AB0B65C7EAE909C* __this, const RuntimeMethod* method) 
{
	{
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___ShakeDuration = (0.5f);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_Shake_m08AAAF91B1B37620603722075702957FE0BB987B (MMCinemachineOrthographicSizeShaker_t094C6772F057FE073685EB9E6AB0B65C7EAE909C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___ShakeOrthographicSize;
		float L_1 = __this->___RemapOrthographicSizeZero;
		float L_2 = __this->___RemapOrthographicSizeOne;
		bool L_3 = __this->___RelativeOrthographicSize;
		float L_4 = __this->____initialOrthographicSize;
		float L_5;
		L_5 = VirtualFuncInvoker5< float, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, float, float, bool, float >::Invoke(14, __this, L_0, L_1, L_2, L_3, L_4);
		V_0 = L_5;
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_6 = __this->____targetCamera;
		NullCheck(L_6);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_7 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_6->___m_Lens);
		float L_8 = V_0;
		L_7->___OrthographicSize = L_8;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_GrabInitialValues_m80963B0B0CA4EBAD3345047A89C70BEBFDB7D961 (MMCinemachineOrthographicSizeShaker_t094C6772F057FE073685EB9E6AB0B65C7EAE909C* __this, const RuntimeMethod* method) 
{
	{
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_0 = __this->____targetCamera;
		NullCheck(L_0);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_1 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_0->___m_Lens);
		float L_2 = L_1->___OrthographicSize;
		__this->____initialOrthographicSize = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_OnMMCameraOrthographicSizeShakeEvent_mF9A2E2A9C4251771AC4D10E69FEA7A7D60201724 (MMCinemachineOrthographicSizeShaker_t094C6772F057FE073685EB9E6AB0B65C7EAE909C* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_distortionCurve, float ___1_duration, float ___2_remapMin, float ___3_remapMax, bool ___4_relativeDistortion, float ___5_feedbacksIntensity, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___6_channelData, bool ___7_resetShakerValuesAfterShake, bool ___8_resetTargetValuesAfterShake, bool ___9_forwardDirection, bool ___10_stop, bool ___11_restore, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* L_0 = ___6_channelData;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		bool L_2;
		L_2 = VirtualFuncInvoker4< bool, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888*, bool, float, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(25, __this, L_0, (bool)0, (0.0f), L_1);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		bool L_3 = ___10_stop;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		VirtualActionInvoker0::Invoke(22, __this);
		return;
	}

IL_0025:
	{
		bool L_4 = ___11_restore;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		VirtualActionInvoker0::Invoke(15, __this);
		return;
	}

IL_0030:
	{
		bool L_5 = ((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___Interruptible;
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		bool L_6 = ((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___Shaking;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		return;
	}

IL_0041:
	{
		bool L_7 = ___7_resetShakerValuesAfterShake;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->____resetShakerValuesAfterShake = L_7;
		bool L_8 = ___8_resetTargetValuesAfterShake;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->____resetTargetValuesAfterShake = L_8;
		bool L_9 = ___7_resetShakerValuesAfterShake;
		if (!L_9)
		{
			goto IL_0091;
		}
	}
	{
		float L_10 = ((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___ShakeDuration;
		__this->____originalShakeDuration = L_10;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = __this->___ShakeOrthographicSize;
		__this->____originalShakeOrthographicSize = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____originalShakeOrthographicSize), (void*)L_11);
		float L_12 = __this->___RemapOrthographicSizeZero;
		__this->____originalRemapOrthographicSizeZero = L_12;
		float L_13 = __this->___RemapOrthographicSizeOne;
		__this->____originalRemapOrthographicSizeOne = L_13;
		bool L_14 = __this->___RelativeOrthographicSize;
		__this->____originalRelativeOrthographicSize = L_14;
	}

IL_0091:
	{
		float L_15 = ___1_duration;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___ShakeDuration = L_15;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_16 = ___0_distortionCurve;
		__this->___ShakeOrthographicSize = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShakeOrthographicSize), (void*)L_16);
		float L_17 = ___2_remapMin;
		float L_18 = ___5_feedbacksIntensity;
		__this->___RemapOrthographicSizeZero = ((float)il2cpp_codegen_multiply(L_17, L_18));
		float L_19 = ___3_remapMax;
		float L_20 = ___5_feedbacksIntensity;
		__this->___RemapOrthographicSizeOne = ((float)il2cpp_codegen_multiply(L_19, L_20));
		bool L_21 = ___4_relativeDistortion;
		__this->___RelativeOrthographicSize = L_21;
		bool L_22 = ___9_forwardDirection;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___ForwardDirection = L_22;
		VirtualActionInvoker0::Invoke(21, __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_ResetTargetValues_m70FEFDB87E9B96DEA5B6BA9A100F26AFC009162E (MMCinemachineOrthographicSizeShaker_t094C6772F057FE073685EB9E6AB0B65C7EAE909C* __this, const RuntimeMethod* method) 
{
	{
		MMShaker_ResetTargetValues_mD7E138483910DEE0DEF4276FF39F07A6AE80AE59(__this, NULL);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_0 = __this->____targetCamera;
		NullCheck(L_0);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_1 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_0->___m_Lens);
		float L_2 = __this->____initialOrthographicSize;
		L_1->___OrthographicSize = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_ResetShakerValues_mDE8222E2118C320A8872DF6D780E38A15D7DFEFD (MMCinemachineOrthographicSizeShaker_t094C6772F057FE073685EB9E6AB0B65C7EAE909C* __this, const RuntimeMethod* method) 
{
	{
		MMShaker_ResetShakerValues_mF597524D875B4EA6053014C7E9F63177D123C490(__this, NULL);
		float L_0 = __this->____originalShakeDuration;
		((MMShaker_t48AAF716B7D3FC0C6FB15A32772D7DF0D57FCC31*)__this)->___ShakeDuration = L_0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = __this->____originalShakeOrthographicSize;
		__this->___ShakeOrthographicSize = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShakeOrthographicSize), (void*)L_1);
		float L_2 = __this->____originalRemapOrthographicSizeZero;
		__this->___RemapOrthographicSizeZero = L_2;
		float L_3 = __this->____originalRemapOrthographicSizeOne;
		__this->___RemapOrthographicSizeOne = L_3;
		bool L_4 = __this->____originalRelativeOrthographicSize;
		__this->___RelativeOrthographicSize = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_StartListening_m4328E94835F4B0193B1F264D7B28A09F9D74A9E4 (MMCinemachineOrthographicSizeShaker_t094C6772F057FE073685EB9E6AB0B65C7EAE909C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tD173B266ED8EA45E3B0FEDA511537B9BCB52E868_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MMShaker_StartListening_m36823EC65926E79570BE8564A9C7F90DCEA8B7AD(__this, NULL);
		Delegate_tD173B266ED8EA45E3B0FEDA511537B9BCB52E868* L_0 = (Delegate_tD173B266ED8EA45E3B0FEDA511537B9BCB52E868*)il2cpp_codegen_object_new(Delegate_tD173B266ED8EA45E3B0FEDA511537B9BCB52E868_il2cpp_TypeInfo_var);
		Delegate__ctor_m4440EC7CB1C0F0B9EDEAAFA64173B9B8B2181BEC(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 28)), NULL);
		MMCameraOrthographicSizeShakeEvent_Register_mE4E6BA4E14CB2B31D7DA710C379DDEF6BDA02DCC(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker_StopListening_mD34AF14C738E321DB75BA50A9BC853F11D26E506 (MMCinemachineOrthographicSizeShaker_t094C6772F057FE073685EB9E6AB0B65C7EAE909C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tD173B266ED8EA45E3B0FEDA511537B9BCB52E868_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MMShaker_StopListening_m7F583AAD3037B2610ADB4BA3BBF63847EF3EDE1C(__this, NULL);
		Delegate_tD173B266ED8EA45E3B0FEDA511537B9BCB52E868* L_0 = (Delegate_tD173B266ED8EA45E3B0FEDA511537B9BCB52E868*)il2cpp_codegen_object_new(Delegate_tD173B266ED8EA45E3B0FEDA511537B9BCB52E868_il2cpp_TypeInfo_var);
		Delegate__ctor_m4440EC7CB1C0F0B9EDEAAFA64173B9B8B2181BEC(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 28)), NULL);
		MMCameraOrthographicSizeShakeEvent_Unregister_m3C0C9011FFED801F04C1F9A2697331AF8F22E3CC(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineOrthographicSizeShaker__ctor_m38AF23D7D724E0F9CF4C6DE6C07B9FB3B75B2883 (MMCinemachineOrthographicSizeShaker_t094C6772F057FE073685EB9E6AB0B65C7EAE909C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)3);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (0.5f), (1.0f), NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_6), (1.0f), (0.0f), NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_6);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_7, L_5, NULL);
		__this->___ShakeOrthographicSize = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShakeOrthographicSize), (void*)L_7);
		__this->___RemapOrthographicSizeZero = (5.0f);
		__this->___RemapOrthographicSizeOne = (10.0f);
		MMShaker__ctor_mF8C6BFF676BA0F272791D3B64B0E5EB2E598A709(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMCinemachinePriorityBrainListener_GetTime_mA27B7A8759E39A4F324918EDDCB469922BBE2795 (MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___TimescaleMode;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMCinemachinePriorityBrainListener_GetDeltaTime_m8ED920CFF126036A6F04D4ABA7C35243B7736914 (MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___TimescaleMode;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityBrainListener_Awake_m6E8DD8FCFC75E6EE08E2B21019F4DB645D17BD6F (MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9_mC1162BCB892B08F7E1B985427405E11FA407A3CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* L_1;
		L_1 = GameObject_GetComponent_TisCinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9_mC1162BCB892B08F7E1B985427405E11FA407A3CE(L_0, GameObject_GetComponent_TisCinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9_mC1162BCB892B08F7E1B985427405E11FA407A3CE_RuntimeMethod_var);
		__this->____brain = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____brain), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityBrainListener_OnMMCinemachinePriorityEvent_m1B3D25BF2949A5DFE46133148E8FECD8B4FF377B (MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A* __this, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_channelData, bool ___1_forceMaxPriority, int32_t ___2_newPriority, bool ___3_forceTransition, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___4_blendDefinition, bool ___5_resetValuesAfterTransition, int32_t ___6_timescaleMode, bool ___7_restore, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___3_forceTransition;
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->____coroutine;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2 = __this->____coroutine;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_2, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* L_3 = __this->____brain;
		NullCheck(L_3);
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B L_4 = L_3->___m_DefaultBlend;
		__this->____initialDefinition = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____initialDefinition))->___m_CustomCurve), (void*)NULL);
	}

IL_002b:
	{
		CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* L_5 = __this->____brain;
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B L_6 = ___4_blendDefinition;
		NullCheck(L_5);
		L_5->___m_DefaultBlend = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_5->___m_DefaultBlend))->___m_CustomCurve), (void*)NULL);
		int32_t L_7 = ___6_timescaleMode;
		__this->___TimescaleMode = L_7;
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B L_8 = ___4_blendDefinition;
		float L_9 = L_8.___m_Time;
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker1< RuntimeObject*, float >::Invoke(8, __this, L_9);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_10, NULL);
		__this->____coroutine = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coroutine), (void*)L_11);
	}

IL_0059:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MMCinemachinePriorityBrainListener_ResetBlendDefinition_mA150DCC540BD1CBE33751A41C20BB280E1C7AD51 (MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A* __this, float ___0_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CResetBlendDefinitionU3Ed__8_t970EC43B233ACC0456765A17D202202B7079A1DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CResetBlendDefinitionU3Ed__8_t970EC43B233ACC0456765A17D202202B7079A1DC* L_0 = (U3CResetBlendDefinitionU3Ed__8_t970EC43B233ACC0456765A17D202202B7079A1DC*)il2cpp_codegen_object_new(U3CResetBlendDefinitionU3Ed__8_t970EC43B233ACC0456765A17D202202B7079A1DC_il2cpp_TypeInfo_var);
		U3CResetBlendDefinitionU3Ed__8__ctor_mCD7D7BDADF94634CC7BB73B670390E1F290CC99D(L_0, 0, NULL);
		U3CResetBlendDefinitionU3Ed__8_t970EC43B233ACC0456765A17D202202B7079A1DC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CResetBlendDefinitionU3Ed__8_t970EC43B233ACC0456765A17D202202B7079A1DC* L_2 = L_1;
		float L_3 = ___0_delay;
		NullCheck(L_2);
		L_2->___delay = L_3;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityBrainListener_OnEnable_m7653F212F57EEEEB836B227EAF3DE36D27C1A2CA (MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____coroutine = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coroutine), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_0 = (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D*)il2cpp_codegen_object_new(Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D_il2cpp_TypeInfo_var);
		Delegate__ctor_m102966351BDF3F711589A2E9A2E52F8C9EABE54E(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 7)), NULL);
		MMCinemachinePriorityEvent_Register_mA41B0E167E2ED763E8E1BA74E316A99CE097C582(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityBrainListener_OnDisable_m0C27D69DE368DF573F54828B6B7D45FC8DDC0BBE (MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->____coroutine;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->____coroutine;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_1, NULL);
	}

IL_0014:
	{
		__this->____coroutine = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coroutine), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_2 = (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D*)il2cpp_codegen_object_new(Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D_il2cpp_TypeInfo_var);
		Delegate__ctor_m102966351BDF3F711589A2E9A2E52F8C9EABE54E(L_2, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 7)), NULL);
		MMCinemachinePriorityEvent_Unregister_mF6CDB945CAAFC6C09F0296A156D4FA1608FD761D(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityBrainListener__ctor_mECC2F85F880C4BE7665BCABC3B1BB4BB2537B473 (MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetBlendDefinitionU3Ed__8__ctor_mCD7D7BDADF94634CC7BB73B670390E1F290CC99D (U3CResetBlendDefinitionU3Ed__8_t970EC43B233ACC0456765A17D202202B7079A1DC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetBlendDefinitionU3Ed__8_System_IDisposable_Dispose_m0B871ACFEB503085AEC099A1FDACF1309DB188E1 (U3CResetBlendDefinitionU3Ed__8_t970EC43B233ACC0456765A17D202202B7079A1DC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResetBlendDefinitionU3Ed__8_MoveNext_m7082239513487DE0B2A432F5E07FFF74010DAD42 (U3CResetBlendDefinitionU3Ed__8_t970EC43B233ACC0456765A17D202202B7079A1DC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state = (-1);
		__this->___U3CtimerU3E5__2 = (0.0f);
		goto IL_0055;
	}

IL_002b:
	{
		__this->___U3CU3E2__current = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)NULL);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_003b:
	{
		__this->___U3CU3E1__state = (-1);
		float L_4 = __this->___U3CtimerU3E5__2;
		MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A* L_5 = V_1;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(5, L_5);
		__this->___U3CtimerU3E5__2 = ((float)il2cpp_codegen_add(L_4, L_6));
	}

IL_0055:
	{
		float L_7 = __this->___U3CtimerU3E5__2;
		float L_8 = __this->___delay;
		if ((((float)L_7) < ((float)L_8)))
		{
			goto IL_002b;
		}
	}
	{
		MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A* L_9 = V_1;
		NullCheck(L_9);
		CinemachineBrain_tA44C6B1C4F0BD2B34EFCD06EE4C4AFE46685CBE9* L_10 = L_9->____brain;
		MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A* L_11 = V_1;
		NullCheck(L_11);
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B L_12 = L_11->____initialDefinition;
		NullCheck(L_10);
		L_10->___m_DefaultBlend = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_10->___m_DefaultBlend))->___m_CustomCurve), (void*)NULL);
		MMCinemachinePriorityBrainListener_t1EAF821E7E0F7C672716F9DA1E639F23DF709D3A* L_13 = V_1;
		NullCheck(L_13);
		L_13->____coroutine = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____coroutine), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResetBlendDefinitionU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6C38DC491690604C54EB4C6F5D93F29184244958 (U3CResetBlendDefinitionU3Ed__8_t970EC43B233ACC0456765A17D202202B7079A1DC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetBlendDefinitionU3Ed__8_System_Collections_IEnumerator_Reset_m643CB5C475512A99ABB6530903238B2DABB0BC10 (U3CResetBlendDefinitionU3Ed__8_t970EC43B233ACC0456765A17D202202B7079A1DC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResetBlendDefinitionU3Ed__8_System_Collections_IEnumerator_Reset_m643CB5C475512A99ABB6530903238B2DABB0BC10_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CResetBlendDefinitionU3Ed__8_System_Collections_IEnumerator_get_Current_mE078A4F3FA4740A0D50C5050B2635AA209E24C75 (U3CResetBlendDefinitionU3Ed__8_t970EC43B233ACC0456765A17D202202B7079A1DC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMCinemachinePriorityListener_GetTime_m6FFB449E6B4503BAB1CE782A663EEAE8B531F21E (MMCinemachinePriorityListener_tEE3ED7BDA2BD945CC38862163B4A793F89E6158A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___TimescaleMode;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMCinemachinePriorityListener_GetDeltaTime_m843F571A7D3E510FF2B343414A2038C43D018EE5 (MMCinemachinePriorityListener_tEE3ED7BDA2BD945CC38862163B4A793F89E6158A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___TimescaleMode;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityListener_Awake_m2EF780FFAE46F97617DA497793B32FBA64A17B14 (MMCinemachinePriorityListener_tEE3ED7BDA2BD945CC38862163B4A793F89E6158A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE_m24E4FA934917769BC3E78C1CE434B56A2B0346C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* L_1;
		L_1 = GameObject_GetComponent_TisCinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE_m24E4FA934917769BC3E78C1CE434B56A2B0346C5(L_0, GameObject_GetComponent_TisCinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE_m24E4FA934917769BC3E78C1CE434B56A2B0346C5_RuntimeMethod_var);
		__this->____camera = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camera), (void*)L_1);
		CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* L_2 = __this->____camera;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = CinemachineVirtualCameraBase_get_Priority_m273769ED137982DE43BB658BBE704BCAA55E5246_inline(L_2, NULL);
		__this->____initialPriority = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityListener_OnMMCinemachinePriorityEvent_m5630FA083D3CC35FD0DA9852118532AFF05757EF (MMCinemachinePriorityListener_tEE3ED7BDA2BD945CC38862163B4A793F89E6158A* __this, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_channelData, bool ___1_forceMaxPriority, int32_t ___2_newPriority, bool ___3_forceTransition, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___4_blendDefinition, bool ___5_resetValuesAfterTransition, int32_t ___6_timescaleMode, bool ___7_restore, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___6_timescaleMode;
		__this->___TimescaleMode = L_0;
		MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* L_1 = ___0_channelData;
		int32_t L_2 = __this->___ChannelMode;
		int32_t L_3 = __this->___Channel;
		MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E* L_4 = __this->___MMChannelDefinition;
		bool L_5;
		L_5 = MMChannel_Match_m7AF32E7EAEA308801EE2A56B63407D8EF8209312(L_1, L_2, L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		bool L_6 = ___7_restore;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* L_7 = __this->____camera;
		int32_t L_8 = __this->____initialPriority;
		NullCheck(L_7);
		CinemachineVirtualCameraBase_set_Priority_m233ED0376CE0BD1244CCA52DF4532C8988DC05AC_inline(L_7, L_8, NULL);
		return;
	}

IL_0038:
	{
		CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* L_9 = __this->____camera;
		int32_t L_10 = ___2_newPriority;
		NullCheck(L_9);
		CinemachineVirtualCameraBase_set_Priority_m233ED0376CE0BD1244CCA52DF4532C8988DC05AC_inline(L_9, L_10, NULL);
		return;
	}

IL_0045:
	{
		bool L_11 = ___1_forceMaxPriority;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		bool L_12 = ___7_restore;
		if (!L_12)
		{
			goto IL_005e;
		}
	}
	{
		CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* L_13 = __this->____camera;
		int32_t L_14 = __this->____initialPriority;
		NullCheck(L_13);
		CinemachineVirtualCameraBase_set_Priority_m233ED0376CE0BD1244CCA52DF4532C8988DC05AC_inline(L_13, L_14, NULL);
		return;
	}

IL_005e:
	{
		CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* L_15 = __this->____camera;
		NullCheck(L_15);
		CinemachineVirtualCameraBase_set_Priority_m233ED0376CE0BD1244CCA52DF4532C8988DC05AC_inline(L_15, 0, NULL);
	}

IL_006a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityListener_OnEnable_m4A933A7ABC71769D48FB2FC4BE3043051FB498B9 (MMCinemachinePriorityListener_tEE3ED7BDA2BD945CC38862163B4A793F89E6158A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_0 = (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D*)il2cpp_codegen_object_new(Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D_il2cpp_TypeInfo_var);
		Delegate__ctor_m102966351BDF3F711589A2E9A2E52F8C9EABE54E(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 7)), NULL);
		MMCinemachinePriorityEvent_Register_mA41B0E167E2ED763E8E1BA74E316A99CE097C582(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityListener_OnDisable_m577A6680866BF8B7E30CC652D08638171DE8AD58 (MMCinemachinePriorityListener_tEE3ED7BDA2BD945CC38862163B4A793F89E6158A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_0 = (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D*)il2cpp_codegen_object_new(Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D_il2cpp_TypeInfo_var);
		Delegate__ctor_m102966351BDF3F711589A2E9A2E52F8C9EABE54E(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 7)), NULL);
		MMCinemachinePriorityEvent_Unregister_mF6CDB945CAAFC6C09F0296A156D4FA1608FD761D(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityListener__ctor_m49D8A8A09506A9B819E9E54D958FE7C26E1B62F5 (MMCinemachinePriorityListener_tEE3ED7BDA2BD945CC38862163B4A793F89E6158A* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_add_OnEvent_mC495EF756CD4D57D51DDBD60DF005DB2A7995769 (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* V_0 = NULL;
	Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* V_1 = NULL;
	Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* V_2 = NULL;
	{
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_0 = ((MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_StaticFields*)il2cpp_codegen_static_fields_for(MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_il2cpp_TypeInfo_var))->___OnEvent;
		V_0 = L_0;
	}

IL_0006:
	{
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_1 = V_0;
		V_1 = L_1;
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_2 = V_1;
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D*)CastclassSealed((RuntimeObject*)L_4, Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D_il2cpp_TypeInfo_var));
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_5 = V_2;
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_6 = V_1;
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_7;
		L_7 = InterlockedCompareExchangeImpl<Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D*>((&((MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_StaticFields*)il2cpp_codegen_static_fields_for(MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_il2cpp_TypeInfo_var))->___OnEvent), L_5, L_6);
		V_0 = L_7;
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_8 = V_0;
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_9 = V_1;
		if ((!(((RuntimeObject*)(Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D*)L_8) == ((RuntimeObject*)(Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_remove_OnEvent_m7125AA477BD05BA55997BAA712E5171318487ED7 (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* V_0 = NULL;
	Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* V_1 = NULL;
	Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* V_2 = NULL;
	{
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_0 = ((MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_StaticFields*)il2cpp_codegen_static_fields_for(MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_il2cpp_TypeInfo_var))->___OnEvent;
		V_0 = L_0;
	}

IL_0006:
	{
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_1 = V_0;
		V_1 = L_1;
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_2 = V_1;
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D*)CastclassSealed((RuntimeObject*)L_4, Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D_il2cpp_TypeInfo_var));
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_5 = V_2;
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_6 = V_1;
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_7;
		L_7 = InterlockedCompareExchangeImpl<Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D*>((&((MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_StaticFields*)il2cpp_codegen_static_fields_for(MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_il2cpp_TypeInfo_var))->___OnEvent), L_5, L_6);
		V_0 = L_7;
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_8 = V_0;
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_9 = V_1;
		if ((!(((RuntimeObject*)(Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D*)L_8) == ((RuntimeObject*)(Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_RuntimeInitialization_m2A26D0E330C28CC8152AD49F289218AB043FC8F4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_StaticFields*)il2cpp_codegen_static_fields_for(MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_il2cpp_TypeInfo_var))->___OnEvent = (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_StaticFields*)il2cpp_codegen_static_fields_for(MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_il2cpp_TypeInfo_var))->___OnEvent), (void*)(Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_Register_mA41B0E167E2ED763E8E1BA74E316A99CE097C582 (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* ___0_callback, const RuntimeMethod* method) 
{
	{
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_0 = ___0_callback;
		MMCinemachinePriorityEvent_add_OnEvent_mC495EF756CD4D57D51DDBD60DF005DB2A7995769(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_Unregister_mF6CDB945CAAFC6C09F0296A156D4FA1608FD761D (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* ___0_callback, const RuntimeMethod* method) 
{
	{
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_0 = ___0_callback;
		MMCinemachinePriorityEvent_remove_OnEvent_m7125AA477BD05BA55997BAA712E5171318487ED7(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachinePriorityEvent_Trigger_m2FB6D7EAFA26DD95124E06B2888170839145F59D (MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_channelData, bool ___1_forceMaxPriority, int32_t ___2_newPriority, bool ___3_forceTransition, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___4_blendDefinition, bool ___5_resetValuesAfterTransition, int32_t ___6_timescaleMode, bool ___7_restore, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* G_B2_0 = NULL;
	Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* G_B1_0 = NULL;
	{
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_0 = ((MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_StaticFields*)il2cpp_codegen_static_fields_for(MMCinemachinePriorityEvent_t171D76AEBB1D62D1F95FA9594669EA08940AA0E9_il2cpp_TypeInfo_var))->___OnEvent;
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
		G_B1_0 = L_1;
	}
	{
		return;
	}

IL_000a:
	{
		MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* L_2 = ___0_channelData;
		bool L_3 = ___1_forceMaxPriority;
		int32_t L_4 = ___2_newPriority;
		bool L_5 = ___3_forceTransition;
		CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B L_6 = ___4_blendDefinition;
		bool L_7 = ___5_resetValuesAfterTransition;
		int32_t L_8 = ___6_timescaleMode;
		bool L_9 = ___7_restore;
		NullCheck(G_B2_0);
		Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_inline(G_B2_0, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, NULL);
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
void Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_Multicast(Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* __this, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_channelData, bool ___1_forceMaxPriority, int32_t ___2_newPriority, bool ___3_forceTransition, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___4_blendDefinition, bool ___5_resetValuesAfterTransition, int32_t ___6_timescaleMode, bool ___7_restore, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* currentDelegate = reinterpret_cast<Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888*, bool, int32_t, bool, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B, bool, int32_t, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_channelData, ___1_forceMaxPriority, ___2_newPriority, ___3_forceTransition, ___4_blendDefinition, ___5_resetValuesAfterTransition, ___6_timescaleMode, ___7_restore, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_OpenInst(Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* __this, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_channelData, bool ___1_forceMaxPriority, int32_t ___2_newPriority, bool ___3_forceTransition, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___4_blendDefinition, bool ___5_resetValuesAfterTransition, int32_t ___6_timescaleMode, bool ___7_restore, const RuntimeMethod* method)
{
	NullCheck(___0_channelData);
	typedef void (*FunctionPointerType) (MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888*, bool, int32_t, bool, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B, bool, int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_channelData, ___1_forceMaxPriority, ___2_newPriority, ___3_forceTransition, ___4_blendDefinition, ___5_resetValuesAfterTransition, ___6_timescaleMode, ___7_restore, method);
}
void Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_OpenStatic(Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* __this, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_channelData, bool ___1_forceMaxPriority, int32_t ___2_newPriority, bool ___3_forceTransition, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___4_blendDefinition, bool ___5_resetValuesAfterTransition, int32_t ___6_timescaleMode, bool ___7_restore, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888*, bool, int32_t, bool, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B, bool, int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_channelData, ___1_forceMaxPriority, ___2_newPriority, ___3_forceTransition, ___4_blendDefinition, ___5_resetValuesAfterTransition, ___6_timescaleMode, ___7_restore, method);
}
void Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_OpenVirtual(Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* __this, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_channelData, bool ___1_forceMaxPriority, int32_t ___2_newPriority, bool ___3_forceTransition, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___4_blendDefinition, bool ___5_resetValuesAfterTransition, int32_t ___6_timescaleMode, bool ___7_restore, const RuntimeMethod* method)
{
	NullCheck(___0_channelData);
	VirtualActionInvoker7< bool, int32_t, bool, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B, bool, int32_t, bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_channelData, ___1_forceMaxPriority, ___2_newPriority, ___3_forceTransition, ___4_blendDefinition, ___5_resetValuesAfterTransition, ___6_timescaleMode, ___7_restore);
}
void Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_OpenInterface(Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* __this, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_channelData, bool ___1_forceMaxPriority, int32_t ___2_newPriority, bool ___3_forceTransition, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___4_blendDefinition, bool ___5_resetValuesAfterTransition, int32_t ___6_timescaleMode, bool ___7_restore, const RuntimeMethod* method)
{
	NullCheck(___0_channelData);
	InterfaceActionInvoker7< bool, int32_t, bool, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B, bool, int32_t, bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_channelData, ___1_forceMaxPriority, ___2_newPriority, ___3_forceTransition, ___4_blendDefinition, ___5_resetValuesAfterTransition, ___6_timescaleMode, ___7_restore);
}
void Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_OpenGenericVirtual(Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* __this, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_channelData, bool ___1_forceMaxPriority, int32_t ___2_newPriority, bool ___3_forceTransition, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___4_blendDefinition, bool ___5_resetValuesAfterTransition, int32_t ___6_timescaleMode, bool ___7_restore, const RuntimeMethod* method)
{
	NullCheck(___0_channelData);
	GenericVirtualActionInvoker7< bool, int32_t, bool, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B, bool, int32_t, bool >::Invoke(method, ___0_channelData, ___1_forceMaxPriority, ___2_newPriority, ___3_forceTransition, ___4_blendDefinition, ___5_resetValuesAfterTransition, ___6_timescaleMode, ___7_restore);
}
void Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_OpenGenericInterface(Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* __this, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_channelData, bool ___1_forceMaxPriority, int32_t ___2_newPriority, bool ___3_forceTransition, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___4_blendDefinition, bool ___5_resetValuesAfterTransition, int32_t ___6_timescaleMode, bool ___7_restore, const RuntimeMethod* method)
{
	NullCheck(___0_channelData);
	GenericInterfaceActionInvoker7< bool, int32_t, bool, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B, bool, int32_t, bool >::Invoke(method, ___0_channelData, ___1_forceMaxPriority, ___2_newPriority, ___3_forceTransition, ___4_blendDefinition, ___5_resetValuesAfterTransition, ___6_timescaleMode, ___7_restore);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m102966351BDF3F711589A2E9A2E52F8C9EABE54E (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 8;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 7;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* __this, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_channelData, bool ___1_forceMaxPriority, int32_t ___2_newPriority, bool ___3_forceTransition, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___4_blendDefinition, bool ___5_resetValuesAfterTransition, int32_t ___6_timescaleMode, bool ___7_restore, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888*, bool, int32_t, bool, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B, bool, int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_channelData, ___1_forceMaxPriority, ___2_newPriority, ___3_forceTransition, ___4_blendDefinition, ___5_resetValuesAfterTransition, ___6_timescaleMode, ___7_restore, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Delegate_BeginInvoke_mA01504DAB74F66461172B4A6B74828396FD5160F (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* __this, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_channelData, bool ___1_forceMaxPriority, int32_t ___2_newPriority, bool ___3_forceTransition, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___4_blendDefinition, bool ___5_resetValuesAfterTransition, int32_t ___6_timescaleMode, bool ___7_restore, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___8_callback, RuntimeObject* ___9_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimescaleModes_t567213DC39EEE1AA073F8E8473E19F2B71FC9A68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[9] = {0};
	__d_args[0] = ___0_channelData;
	__d_args[1] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___1_forceMaxPriority);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_newPriority);
	__d_args[3] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___3_forceTransition);
	__d_args[4] = Box(CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B_il2cpp_TypeInfo_var, &___4_blendDefinition);
	__d_args[5] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___5_resetValuesAfterTransition);
	__d_args[6] = Box(TimescaleModes_t567213DC39EEE1AA073F8E8473E19F2B71FC9A68_il2cpp_TypeInfo_var, &___6_timescaleMode);
	__d_args[7] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___7_restore);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___8_callback, (RuntimeObject*)___9_object);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate_EndInvoke_m6D1DEA66CE92232CBD0B438837DD170B8112A488 (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMCinemachineZoom_GetTime_m13D43F45B941D2EFACB89D0FAFFC18E618384F79 (MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = MMCinemachineZoom_get_TimescaleMode_m011368B7AAC7340E11480854F9FCF8DF02DCDF14_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMCinemachineZoom_GetDeltaTime_m144C0593548EE27DF3E4AEEF092BDD4910987BFC (MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = MMCinemachineZoom_get_TimescaleMode_m011368B7AAC7340E11480854F9FCF8DF02DCDF14_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MMCinemachineZoom_get_TimescaleMode_m011368B7AAC7340E11480854F9FCF8DF02DCDF14 (MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTimescaleModeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom_set_TimescaleMode_m31C347EEC2E268FA9BC4824C78891EED9796E08F (MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CTimescaleModeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom_Awake_mCA12A9B756478507042A2371EFA1F5B573C5B5F0 (MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_1;
		L_1 = GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D(L_0, GameObject_GetComponent_TisCinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50_m1A2DDA6B545C821D4E79E784051FDF79464CAD2D_RuntimeMethod_var);
		__this->____virtualCamera = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____virtualCamera), (void*)L_1);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_2 = __this->____virtualCamera;
		NullCheck(L_2);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_3 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_2->___m_Lens);
		float L_4 = L_3->___FieldOfView;
		__this->____initialFieldOfView = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom_Update_mB2499E263B8FDC4CBB4124978320CCF6F1C54774 (MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____zooming;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_1 = __this->____virtualCamera;
		NullCheck(L_1);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_2 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_1->___m_Lens);
		float L_3 = L_2->___FieldOfView;
		float L_4 = __this->____targetFieldOfView;
		if ((((float)L_3) == ((float)L_4)))
		{
			goto IL_006e;
		}
	}
	{
		float L_5 = __this->____delta;
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(5, __this);
		float L_7 = __this->____transitionDuration;
		__this->____delta = ((float)il2cpp_codegen_add(L_5, ((float)(L_6/L_7))));
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_8 = __this->____virtualCamera;
		NullCheck(L_8);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_9 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_8->___m_Lens);
		float L_10 = __this->____startFieldOfView;
		float L_11 = __this->____targetFieldOfView;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = __this->___ZoomCurve;
		float L_13 = __this->____delta;
		NullCheck(L_12);
		float L_14;
		L_14 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_12, L_13, NULL);
		float L_15;
		L_15 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_10, L_11, L_14, NULL);
		L_9->___FieldOfView = L_15;
		return;
	}

IL_006e:
	{
		bool L_16 = __this->____destinationReached;
		if (L_16)
		{
			goto IL_0089;
		}
	}
	{
		float L_17;
		L_17 = VirtualFuncInvoker0< float >::Invoke(4, __this);
		__this->____reachedDestinationTimestamp = L_17;
		__this->____destinationReached = (bool)1;
	}

IL_0089:
	{
		int32_t L_18 = __this->____mode;
		if (L_18)
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_19 = __this->____direction;
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00da;
		}
	}
	{
		float L_20;
		L_20 = VirtualFuncInvoker0< float >::Invoke(4, __this);
		float L_21 = __this->____reachedDestinationTimestamp;
		float L_22 = __this->____duration;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_20, L_21))) > ((float)L_22))))
		{
			goto IL_00e1;
		}
	}
	{
		__this->____direction = (-1);
		float L_23 = __this->____targetFieldOfView;
		__this->____startFieldOfView = L_23;
		float L_24 = __this->____initialFieldOfView;
		__this->____targetFieldOfView = L_24;
		__this->____delta = (0.0f);
		return;
	}

IL_00da:
	{
		__this->____zooming = (bool)0;
	}

IL_00e1:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom_Zoom_m5A3A56975137A728278F68F7412757409A2F2140 (MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* __this, int32_t ___0_mode, float ___1_newFieldOfView, float ___2_transitionDuration, float ___3_duration, bool ___4_useUnscaledTime, bool ___5_relative, const RuntimeMethod* method) 
{
	MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* G_B4_0 = NULL;
	MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* G_B5_1 = NULL;
	{
		bool L_0 = __this->____zooming;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->____zooming = (bool)1;
		__this->____delta = (0.0f);
		int32_t L_1 = ___0_mode;
		__this->____mode = L_1;
		bool L_2 = ___4_useUnscaledTime;
		if (L_2)
		{
			G_B4_0 = __this;
			goto IL_002a;
		}
		G_B3_0 = __this;
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_002b:
	{
		NullCheck(G_B5_1);
		MMCinemachineZoom_set_TimescaleMode_m31C347EEC2E268FA9BC4824C78891EED9796E08F_inline(G_B5_1, G_B5_0, NULL);
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_3 = __this->____virtualCamera;
		NullCheck(L_3);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_4 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_3->___m_Lens);
		float L_5 = L_4->___FieldOfView;
		__this->____startFieldOfView = L_5;
		float L_6 = ___2_transitionDuration;
		__this->____transitionDuration = L_6;
		float L_7 = ___3_duration;
		__this->____duration = L_7;
		float L_8 = ___2_transitionDuration;
		__this->____transitionDuration = L_8;
		__this->____direction = 1;
		__this->____destinationReached = (bool)0;
		int32_t L_9 = ___0_mode;
		switch (L_9)
		{
			case 0:
			{
				goto IL_007e;
			}
			case 1:
			{
				goto IL_0087;
			}
			case 2:
			{
				goto IL_0090;
			}
		}
	}
	{
		goto IL_009c;
	}

IL_007e:
	{
		float L_10 = ___1_newFieldOfView;
		__this->____targetFieldOfView = L_10;
		goto IL_009c;
	}

IL_0087:
	{
		float L_11 = ___1_newFieldOfView;
		__this->____targetFieldOfView = L_11;
		goto IL_009c;
	}

IL_0090:
	{
		float L_12 = __this->____initialFieldOfView;
		__this->____targetFieldOfView = L_12;
	}

IL_009c:
	{
		bool L_13 = ___5_relative;
		if (!L_13)
		{
			goto IL_00b3;
		}
	}
	{
		float L_14 = __this->____targetFieldOfView;
		float L_15 = __this->____initialFieldOfView;
		__this->____targetFieldOfView = ((float)il2cpp_codegen_add(L_14, L_15));
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom_TestZoom_m61A06D4F072C05CE4B26C861E00476C64C062752 (MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___TestMode;
		float L_1 = __this->___TestFieldOfView;
		float L_2 = __this->___TestTransitionDuration;
		float L_3 = __this->___TestDuration;
		VirtualActionInvoker6< int32_t, float, float, float, bool, bool >::Invoke(8, __this, L_0, L_1, L_2, L_3, (bool)0, (bool)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom_OnCameraZoomEvent_mA55DDA91EECE76422964B2CE10452BAF135FA4EE (MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* __this, int32_t ___0_mode, float ___1_newFieldOfView, float ___2_transitionDuration, float ___3_duration, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___4_channelData, bool ___5_useUnscaledTime, bool ___6_stop, bool ___7_relative, bool ___8_restore, const RuntimeMethod* method) 
{
	{
		MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* L_0 = ___4_channelData;
		int32_t L_1 = __this->___ChannelMode;
		int32_t L_2 = __this->___Channel;
		MMChannel_t41A00347D90C9D5FD2851A8E78FB9580D401485E* L_3 = __this->___MMChannelDefinition;
		bool L_4;
		L_4 = MMChannel_Match_m7AF32E7EAEA308801EE2A56B63407D8EF8209312(L_0, L_1, L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		bool L_5 = ___6_stop;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		__this->____zooming = (bool)0;
		return;
	}

IL_0028:
	{
		bool L_6 = ___8_restore;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		CinemachineVirtualCamera_t7BAD867E24FA315D28917EE318CE7D7258C4CD50* L_7 = __this->____virtualCamera;
		NullCheck(L_7);
		LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE* L_8 = (LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE*)(&L_7->___m_Lens);
		float L_9 = __this->____initialFieldOfView;
		L_8->___FieldOfView = L_9;
		return;
	}

IL_0043:
	{
		int32_t L_10 = ___0_mode;
		float L_11 = ___1_newFieldOfView;
		float L_12 = ___2_transitionDuration;
		float L_13 = ___3_duration;
		bool L_14 = ___5_useUnscaledTime;
		bool L_15 = ___7_relative;
		VirtualActionInvoker6< int32_t, float, float, float, bool, bool >::Invoke(8, __this, L_10, L_11, L_12, L_13, L_14, L_15);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom_OnEnable_m3E204719867DD4CA406653C044C2B243495FE778 (MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260* L_0 = (Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260*)il2cpp_codegen_object_new(Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260_il2cpp_TypeInfo_var);
		Delegate__ctor_m8D1004BCEFC6D845CBCB8EA17EF4FDBB819D808C(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 10)), NULL);
		MMCameraZoomEvent_Register_m3BA025FD8AB4CDCE718D0FEEAB365B0E49EE94A0(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom_OnDisable_m61F1170B65770EA68D258283A4B3E3682638F3A3 (MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260* L_0 = (Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260*)il2cpp_codegen_object_new(Delegate_tA4CF453D6F49220E972ED8A4794892E9E1017260_il2cpp_TypeInfo_var);
		Delegate__ctor_m8D1004BCEFC6D845CBCB8EA17EF4FDBB819D808C(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 10)), NULL);
		MMCameraZoomEvent_Unregister_m4A7B1DFA4E416AE9FEFD017466C03E5B18B1EF45(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMCinemachineZoom__ctor_mCD282CB742CD8C0EEB795BDB354D7AEBDA89C946 (MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (1.0f), (1.0f), NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_5, L_3, NULL);
		__this->___ZoomCurve = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ZoomCurve), (void*)L_5);
		__this->___TestFieldOfView = (30.0f);
		__this->___TestTransitionDuration = (0.100000001f);
		__this->___TestDuration = (0.0500000007f);
		__this->____direction = 1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_Priority_m233ED0376CE0BD1244CCA52DF4532C8988DC05AC_inline (CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_Priority = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_3))));
		goto IL_000b;
	}

IL_000b:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CinemachineVirtualCameraBase_get_Priority_m273769ED137982DE43BB658BBE704BCAA55E5246_inline (CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Priority;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Delegate_Invoke_mFA304FBC9F729A71EB1F9338745927115A736EEB_inline (Delegate_tCFB2DEC2BDD896115C5E195E37FA1C71102C549D* __this, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888* ___0_channelData, bool ___1_forceMaxPriority, int32_t ___2_newPriority, bool ___3_forceTransition, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B ___4_blendDefinition, bool ___5_resetValuesAfterTransition, int32_t ___6_timescaleMode, bool ___7_restore, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MMChannelData_t0D630F2AEBD95C5314E2DE6B0A9E0782E8DE5888*, bool, int32_t, bool, CinemachineBlendDefinition_t6A16D5B51D440E317D413EC8612647EDA0A6580B, bool, int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_channelData, ___1_forceMaxPriority, ___2_newPriority, ___3_forceTransition, ___4_blendDefinition, ___5_resetValuesAfterTransition, ___6_timescaleMode, ___7_restore, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MMCinemachineZoom_get_TimescaleMode_m011368B7AAC7340E11480854F9FCF8DF02DCDF14_inline (MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTimescaleModeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MMCinemachineZoom_set_TimescaleMode_m31C347EEC2E268FA9BC4824C78891EED9796E08F_inline (MMCinemachineZoom_t270C67D5C8B1AC74F711331A3953C83F4E27E61A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CTimescaleModeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
