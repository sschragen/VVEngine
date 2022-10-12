// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VVEngine/Public/VVEngineDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVVEngineDefinitions() {}
// Cross Module References
	VVENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVVEngineDefinitions();
	UPackage* Z_Construct_UPackage__Script_VVEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VVEngineDefinitions;
class UScriptStruct* FVVEngineDefinitions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VVEngineDefinitions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VVEngineDefinitions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVVEngineDefinitions, Z_Construct_UPackage__Script_VVEngine(), TEXT("VVEngineDefinitions"));
	}
	return Z_Registration_Info_UScriptStruct_VVEngineDefinitions.OuterSingleton;
}
template<> VVENGINE_API UScriptStruct* StaticStruct<FVVEngineDefinitions>()
{
	return FVVEngineDefinitions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVVEngineDefinitions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVVEngineDefinitions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VVEngineDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVVEngineDefinitions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVVEngineDefinitions>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVVEngineDefinitions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VVEngine,
		nullptr,
		&NewStructOps,
		"VVEngineDefinitions",
		sizeof(FVVEngineDefinitions),
		alignof(FVVEngineDefinitions),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVVEngineDefinitions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVVEngineDefinitions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVVEngineDefinitions()
	{
		if (!Z_Registration_Info_UScriptStruct_VVEngineDefinitions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VVEngineDefinitions.InnerSingleton, Z_Construct_UScriptStruct_FVVEngineDefinitions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VVEngineDefinitions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineDefinitions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineDefinitions_h_Statics::ScriptStructInfo[] = {
		{ FVVEngineDefinitions::StaticStruct, Z_Construct_UScriptStruct_FVVEngineDefinitions_Statics::NewStructOps, TEXT("VVEngineDefinitions"), &Z_Registration_Info_UScriptStruct_VVEngineDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVVEngineDefinitions), 3324539541U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineDefinitions_h_1104174301(TEXT("/Script/VVEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineDefinitions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
