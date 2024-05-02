// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ADSNode/Public/ShowNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShowNode() {}

// Begin Cross Module References
ADSNODE_API UClass* Z_Construct_UClass_UShowNode();
ADSNODE_API UClass* Z_Construct_UClass_UShowNode_NoRegister();
ADSNODE_API UFunction* Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_ADSNode();
// End Cross Module References

// Begin Delegate FADdisplayStatus
struct Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd \"F\"\n" },
		{ "ModuleRelativePath", "Public/ShowNode.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd \"F\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ADSNode, nullptr, "ADdisplayStatus__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FADdisplayStatus_DelegateWrapper(const FMulticastScriptDelegate& ADdisplayStatus)
{
	ADdisplayStatus.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FADdisplayStatus

// Begin Class UShowNode Function showInterstitial
struct Z_Construct_UFunction_UShowNode_showInterstitial_Statics
{
	struct ShowNode_eventshowInterstitial_Parms
	{
		UShowNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "ADS Core" },
		{ "ModuleRelativePath", "Public/ShowNode.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShowNode_showInterstitial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShowNode_eventshowInterstitial_Parms, ReturnValue), Z_Construct_UClass_UShowNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShowNode_showInterstitial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShowNode_showInterstitial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShowNode_showInterstitial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShowNode_showInterstitial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShowNode, nullptr, "showInterstitial", nullptr, nullptr, Z_Construct_UFunction_UShowNode_showInterstitial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShowNode_showInterstitial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShowNode_showInterstitial_Statics::ShowNode_eventshowInterstitial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShowNode_showInterstitial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShowNode_showInterstitial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UShowNode_showInterstitial_Statics::ShowNode_eventshowInterstitial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShowNode_showInterstitial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShowNode_showInterstitial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShowNode::execshowInterstitial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UShowNode**)Z_Param__Result=UShowNode::showInterstitial();
	P_NATIVE_END;
}
// End Class UShowNode Function showInterstitial

// Begin Class UShowNode
void UShowNode::StaticRegisterNativesUShowNode()
{
	UClass* Class = UShowNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "showInterstitial", &UShowNode::execshowInterstitial },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShowNode);
UClass* Z_Construct_UClass_UShowNode_NoRegister()
{
	return UShowNode::StaticClass();
}
struct Z_Construct_UClass_UShowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ShowNode.h" },
		{ "ModuleRelativePath", "Public/ShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onAdShown_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onAdDismissed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onAdClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onLeftApplication_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onReturnedToApplication_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onAdShown;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onAdDismissed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onAdClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onLeftApplication;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onReturnedToApplication;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UShowNode_showInterstitial, "showInterstitial" }, // 2832012117
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShowNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowNode_Statics::NewProp_onAdShown = { "onAdShown", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShowNode, onAdShown), Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onAdShown_MetaData), NewProp_onAdShown_MetaData) }; // 268714152
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowNode_Statics::NewProp_onAdDismissed = { "onAdDismissed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShowNode, onAdDismissed), Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onAdDismissed_MetaData), NewProp_onAdDismissed_MetaData) }; // 268714152
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowNode_Statics::NewProp_onAdClicked = { "onAdClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShowNode, onAdClicked), Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onAdClicked_MetaData), NewProp_onAdClicked_MetaData) }; // 268714152
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowNode_Statics::NewProp_onLeftApplication = { "onLeftApplication", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShowNode, onLeftApplication), Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onLeftApplication_MetaData), NewProp_onLeftApplication_MetaData) }; // 268714152
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowNode_Statics::NewProp_onReturnedToApplication = { "onReturnedToApplication", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShowNode, onReturnedToApplication), Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onReturnedToApplication_MetaData), NewProp_onReturnedToApplication_MetaData) }; // 268714152
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowNode_Statics::NewProp_onAdShown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowNode_Statics::NewProp_onAdDismissed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowNode_Statics::NewProp_onAdClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowNode_Statics::NewProp_onLeftApplication,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowNode_Statics::NewProp_onReturnedToApplication,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShowNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UShowNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ADSNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShowNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShowNode_Statics::ClassParams = {
	&UShowNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UShowNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UShowNode_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShowNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UShowNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShowNode()
{
	if (!Z_Registration_Info_UClass_UShowNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShowNode.OuterSingleton, Z_Construct_UClass_UShowNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShowNode.OuterSingleton;
}
template<> ADSNODE_API UClass* StaticClass<UShowNode>()
{
	return UShowNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShowNode);
UShowNode::~UShowNode() {}
// End Class UShowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShowNode, UShowNode::StaticClass, TEXT("UShowNode"), &Z_Registration_Info_UClass_UShowNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShowNode), 1528187200U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_1978109993(TEXT("/Script/ADSNode"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSNode_Public_ShowNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
