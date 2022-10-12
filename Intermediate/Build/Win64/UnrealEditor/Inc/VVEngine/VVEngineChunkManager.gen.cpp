// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VVEngine/Public/VVEngineChunkManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVVEngineChunkManager() {}
// Cross Module References
	VVENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChunkManagerInfo();
	UPackage* Z_Construct_UPackage__Script_VVEngine();
	VVENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVVEngineChunkManager();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChunkManagerInfo;
class UScriptStruct* FChunkManagerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkManagerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChunkManagerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkManagerInfo, Z_Construct_UPackage__Script_VVEngine(), TEXT("ChunkManagerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ChunkManagerInfo.OuterSingleton;
}
template<> VVENGINE_API UScriptStruct* StaticStruct<FChunkManagerInfo>()
{
	return FChunkManagerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChunkManagerInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkManagerInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/VVEngineChunkManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChunkManagerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkManagerInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkManagerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VVEngine,
		nullptr,
		&NewStructOps,
		"ChunkManagerInfo",
		sizeof(FChunkManagerInfo),
		alignof(FChunkManagerInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkManagerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkManagerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChunkManagerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ChunkManagerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChunkManagerInfo.InnerSingleton, Z_Construct_UScriptStruct_FChunkManagerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChunkManagerInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VVEngineChunkManager;
class UScriptStruct* FVVEngineChunkManager::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VVEngineChunkManager.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VVEngineChunkManager.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVVEngineChunkManager, Z_Construct_UPackage__Script_VVEngine(), TEXT("VVEngineChunkManager"));
	}
	return Z_Registration_Info_UScriptStruct_VVEngineChunkManager.OuterSingleton;
}
template<> VVENGINE_API UScriptStruct* StaticStruct<FVVEngineChunkManager>()
{
	return FVVEngineChunkManager::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVVEngineChunkManager_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVVEngineChunkManager_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VVEngineChunkManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVVEngineChunkManager_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVVEngineChunkManager>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVVEngineChunkManager_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VVEngine,
		nullptr,
		&NewStructOps,
		"VVEngineChunkManager",
		sizeof(FVVEngineChunkManager),
		alignof(FVVEngineChunkManager),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVVEngineChunkManager_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVVEngineChunkManager_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVVEngineChunkManager()
	{
		if (!Z_Registration_Info_UScriptStruct_VVEngineChunkManager.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VVEngineChunkManager.InnerSingleton, Z_Construct_UScriptStruct_FVVEngineChunkManager_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VVEngineChunkManager.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineChunkManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineChunkManager_h_Statics::ScriptStructInfo[] = {
		{ FChunkManagerInfo::StaticStruct, Z_Construct_UScriptStruct_FChunkManagerInfo_Statics::NewStructOps, TEXT("ChunkManagerInfo"), &Z_Registration_Info_UScriptStruct_ChunkManagerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkManagerInfo), 2454072951U) },
		{ FVVEngineChunkManager::StaticStruct, Z_Construct_UScriptStruct_FVVEngineChunkManager_Statics::NewStructOps, TEXT("VVEngineChunkManager"), &Z_Registration_Info_UScriptStruct_VVEngineChunkManager, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVVEngineChunkManager), 1593823847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineChunkManager_h_373174534(TEXT("/Script/VVEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineChunkManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineChunkManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
