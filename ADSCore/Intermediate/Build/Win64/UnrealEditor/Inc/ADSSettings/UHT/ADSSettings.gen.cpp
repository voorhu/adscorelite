// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ADSCore/Public/ADSSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeADSSettings() {}

// Begin Cross Module References
ADSSETTINGS_API UClass* Z_Construct_UClass_UADSSettingsEditor();
ADSSETTINGS_API UClass* Z_Construct_UClass_UADSSettingsEditor_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ADSSettings();
// End Cross Module References

// Begin Class UADSSettingsEditor
void UADSSettingsEditor::StaticRegisterNativesUADSSettingsEditor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UADSSettingsEditor);
UClass* Z_Construct_UClass_UADSSettingsEditor_NoRegister()
{
	return UADSSettingsEditor::StaticClass();
}
struct Z_Construct_UClass_UADSSettingsEditor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ADSSettings.h" },
		{ "ModuleRelativePath", "Public/ADSSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterstitialAdID_MetaData[] = {
		{ "Category", "Android" },
		{ "Comment", "//InterstitialAdID\n" },
		{ "DisplayName", "Yandex InterstitialAd ID" },
		{ "ModuleRelativePath", "Public/ADSSettings.h" },
		{ "ToolTip", "InterstitialAdID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InterstitialAdID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UADSSettingsEditor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UADSSettingsEditor_Statics::NewProp_InterstitialAdID = { "InterstitialAdID", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UADSSettingsEditor, InterstitialAdID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterstitialAdID_MetaData), NewProp_InterstitialAdID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UADSSettingsEditor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UADSSettingsEditor_Statics::NewProp_InterstitialAdID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UADSSettingsEditor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UADSSettingsEditor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ADSSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UADSSettingsEditor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UADSSettingsEditor_Statics::ClassParams = {
	&UADSSettingsEditor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UADSSettingsEditor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UADSSettingsEditor_Statics::PropPointers),
	0,
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UADSSettingsEditor_Statics::Class_MetaDataParams), Z_Construct_UClass_UADSSettingsEditor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UADSSettingsEditor()
{
	if (!Z_Registration_Info_UClass_UADSSettingsEditor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UADSSettingsEditor.OuterSingleton, Z_Construct_UClass_UADSSettingsEditor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UADSSettingsEditor.OuterSingleton;
}
template<> ADSSETTINGS_API UClass* StaticClass<UADSSettingsEditor>()
{
	return UADSSettingsEditor::StaticClass();
}
UADSSettingsEditor::UADSSettingsEditor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UADSSettingsEditor);
UADSSettingsEditor::~UADSSettingsEditor() {}
// End Class UADSSettingsEditor

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSCore_Public_ADSSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UADSSettingsEditor, UADSSettingsEditor::StaticClass, TEXT("UADSSettingsEditor"), &Z_Registration_Info_UClass_UADSSettingsEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UADSSettingsEditor), 238214122U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSCore_Public_ADSSettings_h_3792465487(TEXT("/Script/ADSSettings"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSCore_Public_ADSSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ADSCore_Source_ADSCore_Public_ADSSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
