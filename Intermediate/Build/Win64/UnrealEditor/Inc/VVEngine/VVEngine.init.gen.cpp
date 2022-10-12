// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVVEngine_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VVEngine;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VVEngine()
	{
		if (!Z_Registration_Info_UPackage__Script_VVEngine.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VVEngine",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x27E441CC,
				0xA9DB8AA8,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VVEngine.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VVEngine.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VVEngine(Z_Construct_UPackage__Script_VVEngine, TEXT("/Script/VVEngine"), Z_Registration_Info_UPackage__Script_VVEngine, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x27E441CC, 0xA9DB8AA8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
