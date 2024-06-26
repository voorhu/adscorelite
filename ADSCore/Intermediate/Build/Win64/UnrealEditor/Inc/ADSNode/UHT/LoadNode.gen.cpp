// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ADSNode/Public/LoadNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadNode() {}

// Begin Cross Module References
ADSNODE_API UClass* Z_Construct_UClass_ULoadNode();
ADSNODE_API UClass* Z_Construct_UClass_ULoadNode_NoRegister();
ADSNODE_API UFunction* Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_ADSNode();
// End Cross Module References

// Begin Delegate FADdownloadStatus
struct Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature_Statics
{
	struct _Script_ADSNode_eventADdownloadStatus_Parms
	{
		int32 Status;
		FString errorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd \"F\"\n" },
		{ "ModuleRelativePath", "Public/LoadNode.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd \"F\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Status;
	static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ADSNode_eventADdownloadStatus_Parms, Status), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ADSNode_eventADdownloadStatus_Parms, errorMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature_Statics::NewProp_errorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ADSNode, nullptr, "ADdownloadStatus__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature_Statics::_Script_ADSNode_eventADdownloadStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature_Statics::_Script_ADSNode_eventADdownloadStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FADdownloadStatus_DelegateWrapper(const FMulticastScriptDelegate& ADdownloadStatus, int32 Status, const FString& errorMessage)
{
	struct _Script_ADSNode_eventADdownloadStatus_Parms
	{
		int32 Status;
		FString errorMessage;
	};
	_Script_ADSNode_eventADdownloadStatus_Parms Parms;
	Parms.Status=Status;
	Parms.errorMessage=errorMessage;
	ADdownloadStatus.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FADdownloadStatus

// Begin Class ULoadNode Function loadInterstitial
struct Z_Construct_UFunction_ULoadNode_loadInterstitial_Statics
{
	struct LoadNode_eventloadInterstitial_Parms
	{
		ULoadNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "ADS Core" },
		{ "ModuleRelativePath", "Public/LoadNode.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadNode_loadInterstitial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadNode_eventloadInterstitial_Parms, ReturnValue), Z_Construct_UClass_ULoadNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadNode_loadInterstitial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadNode_loadInterstitial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadNode_loadInterstitial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadNode_loadInterstitial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadNode, nullptr, "loadInterstitial", nullptr, nullptr, Z_Construct_UFunction_ULoadNode_loadInterstitial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadNode_loadInterstitial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoadNode_loadInterstitial_Statics::LoadNode_eventloadInterstitial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadNode_loadInterstitial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadNode_loadInterstitial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULoadNode_loadInterstitial_Statics::LoadNode_eventloadInterstitial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULoadNode_loadInterstitial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadNode_loadInterstitial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoadNode::execloadInterstitial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULoadNode**)Z_Param__Result=ULoadNode::loadInterstitial();
	P_NATIVE_END;
}
// End Class ULoadNode Function loadInterstitial

// Begin Class ULoadNode Function OnAdDownloadFailure
struct Z_Construct_UFunction_ULoadNode_OnAdDownloadFailure_Statics
{
	struct LoadNode_eventOnAdDownloadFailure_Parms
	{
		int32 status;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_status;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoadNode_OnAdDownloadFailure_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadNode_eventOnAdDownloadFailure_Parms, status), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadNode_OnAdDownloadFailure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadNode_OnAdDownloadFailure_Statics::NewProp_status,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadNode_OnAdDownloadFailure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadNode_OnAdDownloadFailure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadNode, nullptr, "OnAdDownloadFailure", nullptr, nullptr, Z_Construct_UFunction_ULoadNode_OnAdDownloadFailure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadNode_OnAdDownloadFailure_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoadNode_OnAdDownloadFailure_Statics::LoadNode_eventOnAdDownloadFailure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadNode_OnAdDownloadFailure_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadNode_OnAdDownloadFailure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULoadNode_OnAdDownloadFailure_Statics::LoadNode_eventOnAdDownloadFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULoadNode_OnAdDownloadFailure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadNode_OnAdDownloadFailure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoadNode::execOnAdDownloadFailure)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_status);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAdDownloadFailure(Z_Param_status);
	P_NATIVE_END;
}
// End Class ULoadNode Function OnAdDownloadFailure

// Begin Class ULoadNode Function OnAdDownloadSuccess
struct Z_Construct_UFunction_ULoadNode_OnAdDownloadSuccess_Statics
{
	struct LoadNode_eventOnAdDownloadSuccess_Parms
	{
		int32 status;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//FShowInterstitialOutputPin OnShowDelegate;\n//FDelegateHandle OnShowDelegateHandle;\n" },
		{ "ModuleRelativePath", "Public/LoadNode.h" },
		{ "ToolTip", "FShowInterstitialOutputPin OnShowDelegate;\nFDelegateHandle OnShowDelegateHandle;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_status;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoadNode_OnAdDownloadSuccess_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadNode_eventOnAdDownloadSuccess_Parms, status), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadNode_OnAdDownloadSuccess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadNode_OnAdDownloadSuccess_Statics::NewProp_status,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadNode_OnAdDownloadSuccess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadNode_OnAdDownloadSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadNode, nullptr, "OnAdDownloadSuccess", nullptr, nullptr, Z_Construct_UFunction_ULoadNode_OnAdDownloadSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadNode_OnAdDownloadSuccess_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoadNode_OnAdDownloadSuccess_Statics::LoadNode_eventOnAdDownloadSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadNode_OnAdDownloadSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadNode_OnAdDownloadSuccess_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULoadNode_OnAdDownloadSuccess_Statics::LoadNode_eventOnAdDownloadSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULoadNode_OnAdDownloadSuccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadNode_OnAdDownloadSuccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULoadNode::execOnAdDownloadSuccess)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_status);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAdDownloadSuccess(Z_Param_status);
	P_NATIVE_END;
}
// End Class ULoadNode Function OnAdDownloadSuccess

// Begin Class ULoadNode
void ULoadNode::StaticRegisterNativesULoadNode()
{
	UClass* Class = ULoadNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "loadInterstitial", &ULoadNode::execloadInterstitial },
		{ "OnAdDownloadFailure", &ULoadNode::execOnAdDownloadFailure },
		{ "OnAdDownloadSuccess", &ULoadNode::execOnAdDownloadSuccess },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadNode);
UClass* Z_Construct_UClass_ULoadNode_NoRegister()
{
	return ULoadNode::StaticClass();
}
struct Z_Construct_UClass_ULoadNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LoadNode.h" },
		{ "ModuleRelativePath", "Public/LoadNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LoadSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LoadFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadNode_loadInterstitial, "loadInterstitial" }, // 3182981403
		{ &Z_Construct_UFunction_ULoadNode_OnAdDownloadFailure, "OnAdDownloadFailure" }, // 4015580036
		{ &Z_Construct_UFunction_ULoadNode_OnAdDownloadSuccess, "OnAdDownloadSuccess" }, // 4193953227
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadNode_Statics::NewProp_LoadSuccess = { "LoadSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadNode, LoadSuccess), Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadSuccess_MetaData), NewProp_LoadSuccess_MetaData) }; // 3032944301
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadNode_Statics::NewProp_LoadFailure = { "LoadFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadNode, LoadFailure), Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadFailure_MetaData), NewProp_LoadFailure_MetaData) }; // 3032944301
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadNode_Statics::NewProp_LoadSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadNode_Statics::NewProp_LoadFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULoadNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ADSNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadNode_Statics::ClassParams = {
	&ULoadNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULoadNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULoadNode_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadNode_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoadNode()
{
	if (!Z_Registration_Info_UClass_ULoadNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadNode.OuterSingleton, Z_Construct_UClass_ULoadNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoadNode.OuterSingleton;
}
template<> ADSNODE_API UClass* StaticClass<ULoadNode>()
{
	return ULoadNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadNode);
ULoadNode::~ULoadNode() {}
// End Class ULoadNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoadNode, ULoadNode::StaticClass, TEXT("ULoadNode"), &Z_Registration_Info_UClass_ULoadNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadNode), 756096409U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_2762272105(TEXT("/Script/ADSNode"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_LoadNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
