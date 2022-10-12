// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VVEngine/Public/VVEngineVoxelArray.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVVEngineVoxelArray() {}
// Cross Module References
	VVENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVVEngineVoxelArray();
	UPackage* Z_Construct_UPackage__Script_VVEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VVEngineVoxelArray;
class UScriptStruct* FVVEngineVoxelArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VVEngineVoxelArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VVEngineVoxelArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVVEngineVoxelArray, Z_Construct_UPackage__Script_VVEngine(), TEXT("VVEngineVoxelArray"));
	}
	return Z_Registration_Info_UScriptStruct_VVEngineVoxelArray.OuterSingleton;
}
template<> VVENGINE_API UScriptStruct* StaticStruct<FVVEngineVoxelArray>()
{
	return FVVEngineVoxelArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVVEngineVoxelArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVVEngineVoxelArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VVEngineVoxelArray" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/VVEngineVoxelArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVVEngineVoxelArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVVEngineVoxelArray>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVVEngineVoxelArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VVEngine,
		nullptr,
		&NewStructOps,
		"VVEngineVoxelArray",
		sizeof(FVVEngineVoxelArray),
		alignof(FVVEngineVoxelArray),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVVEngineVoxelArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVVEngineVoxelArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVVEngineVoxelArray()
	{
		if (!Z_Registration_Info_UScriptStruct_VVEngineVoxelArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VVEngineVoxelArray.InnerSingleton, Z_Construct_UScriptStruct_FVVEngineVoxelArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VVEngineVoxelArray.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineVoxelArray_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineVoxelArray_h_Statics::ScriptStructInfo[] = {
		{ FVVEngineVoxelArray::StaticStruct, Z_Construct_UScriptStruct_FVVEngineVoxelArray_Statics::NewStructOps, TEXT("VVEngineVoxelArray"), &Z_Registration_Info_UScriptStruct_VVEngineVoxelArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVVEngineVoxelArray), 3675528918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineVoxelArray_h_1126801953(TEXT("/Script/VVEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineVoxelArray_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineVoxelArray_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
