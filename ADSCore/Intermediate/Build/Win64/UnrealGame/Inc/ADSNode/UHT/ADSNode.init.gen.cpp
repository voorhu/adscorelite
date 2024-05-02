// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeADSNode_init() {}
	ADSNODE_API UFunction* Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature();
	ADSNODE_API UFunction* Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ADSNode;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ADSNode()
	{
		if (!Z_Registration_Info_UPackage__Script_ADSNode.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ADSNode_ADdisplayStatus__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ADSNode_ADdownloadStatus__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ADSNode",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD1C1E1B7,
				0x8A917504,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ADSNode.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ADSNode.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ADSNode(Z_Construct_UPackage__Script_ADSNode, TEXT("/Script/ADSNode"), Z_Registration_Info_UPackage__Script_ADSNode, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD1C1E1B7, 0x8A917504));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
