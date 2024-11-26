// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLife_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GameLife;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GameLife()
	{
		if (!Z_Registration_Info_UPackage__Script_GameLife.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GameLife",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x049F498B,
				0xF3DA9079,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GameLife.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GameLife.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GameLife(Z_Construct_UPackage__Script_GameLife, TEXT("/Script/GameLife"), Z_Registration_Info_UPackage__Script_GameLife, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x049F498B, 0xF3DA9079));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
