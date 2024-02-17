#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
196,
208,
209,
210,
211,
212,
213,
214,
215,
216,
219,
220,
221,
384,
385,
386,
415,
416,
417,
437,
438,
439,
440,
537,
538,
539,
542,
577,
578,
580,
582,
584,
586,
591,
599,
600,
601,
602,
603,
604,
605,
606,
607,
608,
685,
686,
740,
741,
807,
813,
816,
818,
823,
824,
826,
827,
831,
832,
834,
836,
837,
840,
841,
842,
845,
847,
850,
852,
854,
863,
927,
929,
931,
941,
942,
943,
944,
946,
953,
954,
955,
956,
957,
965,
966,
967,
971,
972,
974,
978,
979,
980,
1259,
1437,
1438,
8263,
8264,
8266,
8267,
8268,
8269,
8270,
8272,
8274,
8276,
8286,
8288,
8293,
8295,
8297,
8299,
8350,
8351,
8353,
8354,
8355,
8356,
8357,
8359,
8361,
9245,
9249,
9251,
9252,
9253,
9254,
9503,
9504,
9505,
9506,
9524,
9525,
9526,
9528,
9568,
9626,
9628,
9630,
9639,
9640,
9641,
9642,
10022,
10025,
10026,
10053,
10071,
10078,
10085,
10096,
10099,
10119,
10193,
10195,
10204,
10206,
10207,
10214,
10228,
10248,
10249,
10257,
10259,
10266,
10267,
10270,
10272,
10277,
10283,
10284,
10291,
10293,
10305,
10308,
10309,
10310,
10321,
10330,
10336,
10337,
10338,
10340,
10341,
10358,
10360,
10374,
10391,
10418,
10448,
10449,
10888,
10980,
10981,
11183,
11184,
11191,
11192,
11193,
11198,
11273,
11654,
11655,
11875,
11885,
12649,
12670,
12672,
12674,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_InitializeInternal_raw (int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 196,
ves_icall_System_Array_InternalCreate,
// token 208,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 209,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 210,
ves_icall_System_Array_CanChangePrimitive,
// token 211,
ves_icall_System_Array_FastCopy,
// token 212,
ves_icall_System_Array_GetLengthInternal_raw,
// token 213,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 214,
ves_icall_System_Array_GetGenericValue_icall,
// token 215,
ves_icall_System_Array_GetValueImpl_raw,
// token 216,
ves_icall_System_Array_SetGenericValue_icall,
// token 219,
ves_icall_System_Array_SetValueImpl_raw,
// token 220,
ves_icall_System_Array_InitializeInternal_raw,
// token 221,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 384,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 385,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 386,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 415,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 416,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 417,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 437,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 438,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 439,
ves_icall_System_Enum_InternalGetCorElementType,
// token 440,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 537,
ves_icall_System_Environment_get_ProcessorCount,
// token 538,
ves_icall_System_Environment_get_TickCount,
// token 539,
ves_icall_System_Environment_get_TickCount64,
// token 542,
ves_icall_System_Environment_FailFast_raw,
// token 577,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 578,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 580,
ves_icall_System_GC_SuppressFinalize_raw,
// token 582,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 584,
ves_icall_System_GC_GetGCMemoryInfo,
// token 586,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 591,
ves_icall_System_Object_MemberwiseClone_raw,
// token 599,
ves_icall_System_Math_Ceiling,
// token 600,
ves_icall_System_Math_Cos,
// token 601,
ves_icall_System_Math_Floor,
// token 602,
ves_icall_System_Math_Log10,
// token 603,
ves_icall_System_Math_Pow,
// token 604,
ves_icall_System_Math_Sin,
// token 605,
ves_icall_System_Math_Sqrt,
// token 606,
ves_icall_System_Math_Tan,
// token 607,
ves_icall_System_Math_Log2,
// token 608,
ves_icall_System_Math_ModF,
// token 685,
ves_icall_System_MathF_Log2,
// token 686,
ves_icall_System_MathF_ModF,
// token 740,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 741,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 807,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 813,
ves_icall_RuntimeType_make_array_type_raw,
// token 816,
ves_icall_RuntimeType_make_byref_type_raw,
// token 818,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 823,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 824,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 826,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 827,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 831,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 832,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 834,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 836,
ves_icall_System_RuntimeType_getFullName_raw,
// token 837,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 840,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 841,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 842,
ves_icall_RuntimeType_GetFields_native_raw,
// token 845,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 847,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 850,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 852,
ves_icall_RuntimeType_GetName_raw,
// token 854,
ves_icall_RuntimeType_GetNamespace_raw,
// token 863,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 927,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 929,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 931,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 941,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 942,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 943,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 944,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 946,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 953,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 954,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 955,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 956,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 957,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 965,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 966,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 967,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 971,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 972,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 974,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 978,
ves_icall_System_String_FastAllocateString_raw,
// token 979,
ves_icall_System_String_InternalIsInterned_raw,
// token 980,
ves_icall_System_String_InternalIntern_raw,
// token 1259,
ves_icall_System_Type_internal_from_handle_raw,
// token 1437,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1438,
ves_icall_System_ValueType_Equals_raw,
// token 8263,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8264,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8266,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8267,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8268,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8269,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8270,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8272,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8274,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8276,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8286,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8288,
mono_monitor_exit_icall_raw,
// token 8293,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8295,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8297,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8299,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8350,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8351,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8353,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8354,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8355,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8356,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8357,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8359,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8361,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9245,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9249,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9251,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9252,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9253,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9254,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9503,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9504,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9505,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9506,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9524,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9525,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9526,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9528,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 9568,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9626,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 9628,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 9630,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9639,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9640,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9641,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 9642,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 10022,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 10025,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 10026,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 10053,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 10071,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 10078,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 10085,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 10096,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 10099,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 10119,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 10193,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 10195,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 10204,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 10206,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 10207,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 10214,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 10228,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 10248,
ves_icall_reflection_get_token_raw,
// token 10249,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 10257,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 10259,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 10266,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 10267,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 10270,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 10272,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 10277,
ves_icall_reflection_get_token_raw,
// token 10283,
ves_icall_get_method_info_raw,
// token 10284,
ves_icall_get_method_attributes,
// token 10291,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10293,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10305,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10308,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10309,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10310,
ves_icall_reflection_get_token_raw,
// token 10321,
ves_icall_InternalInvoke_raw,
// token 10330,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10336,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10337,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10338,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10340,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10341,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10358,
ves_icall_InvokeClassConstructor_raw,
// token 10360,
ves_icall_InternalInvoke_raw,
// token 10374,
ves_icall_reflection_get_token_raw,
// token 10391,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10418,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10448,
ves_icall_reflection_get_token_raw,
// token 10449,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10888,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10980,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10981,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 11183,
ves_icall_ModuleBuilder_basic_init_raw,
// token 11184,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 11191,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 11192,
ves_icall_ModuleBuilder_getToken_raw,
// token 11193,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 11198,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11273,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11654,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11655,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11875,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 11885,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 12649,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12670,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12672,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12674,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
