// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VVEngine/Public/VVEngineChunk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVVEngineChunk() {}
// Cross Module References
	VVENGINE_API UEnum* Z_Construct_UEnum_VVEngine_FChunkState();
	UPackage* Z_Construct_UPackage__Script_VVEngine();
	VVENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChunkDescription();
	VVENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVVEngineChunk();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FChunkState;
	static UEnum* FChunkState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FChunkState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FChunkState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VVEngine_FChunkState, Z_Construct_UPackage__Script_VVEngine(), TEXT("FChunkState"));
		}
		return Z_Registration_Info_UEnum_FChunkState.OuterSingleton;
	}
	template<> VVENGINE_API UEnum* StaticEnum<FChunkState>()
	{
		return FChunkState_StaticEnum();
	}
	struct Z_Construct_UEnum_VVEngine_FChunkState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VVEngine_FChunkState_Statics::Enumerators[] = {
		{ "EMPTY", (int64)EMPTY },
		{ "LOAD", (int64)LOAD },
		{ "SAVE", (int64)SAVE },
		{ "CREATE", (int64)CREATE },
		{ "READY", (int64)READY },
		{ "CHANGED", (int64)CHANGED },
		{ "DELETE", (int64)DELETE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VVEngine_FChunkState_Statics::Enum_MetaDataParams[] = {
		{ "CHANGED.Comment", "/**\n * \n */" },
		{ "CHANGED.DisplayName", "Changed" },
		{ "CHANGED.Name", "CHANGED" },
		{ "Comment", "/**\n * \n */" },
		{ "CREATE.Comment", "/**\n * \n */" },
		{ "CREATE.DisplayName", "Create" },
		{ "CREATE.Name", "CREATE" },
		{ "DELETE.Comment", "/**\n * \n */" },
		{ "DELETE.DisplayName", "Delete" },
		{ "DELETE.Name", "DELETE" },
		{ "EMPTY.Comment", "/**\n * \n */" },
		{ "EMPTY.DisplayName", "Empty" },
		{ "EMPTY.Name", "EMPTY" },
		{ "LOAD.Comment", "/**\n * \n */" },
		{ "LOAD.DisplayName", "Load" },
		{ "LOAD.Name", "LOAD" },
		{ "ModuleRelativePath", "Public/VVEngineChunk.h" },
		{ "READY.Comment", "/**\n * \n */" },
		{ "READY.DisplayName", "Ready" },
		{ "READY.Name", "READY" },
		{ "SAVE.Comment", "/**\n * \n */" },
		{ "SAVE.DisplayName", "Save" },
		{ "SAVE.Name", "SAVE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VVEngine_FChunkState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VVEngine,
		nullptr,
		"FChunkState",
		"FChunkState",
		Z_Construct_UEnum_VVEngine_FChunkState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VVEngine_FChunkState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_VVEngine_FChunkState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VVEngine_FChunkState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VVEngine_FChunkState()
	{
		if (!Z_Registration_Info_UEnum_FChunkState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FChunkState.InnerSingleton, Z_Construct_UEnum_VVEngine_FChunkState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FChunkState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChunkDescription;
class UScriptStruct* FChunkDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChunkDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkDescription, Z_Construct_UPackage__Script_VVEngine(), TEXT("ChunkDescription"));
	}
	return Z_Registration_Info_UScriptStruct_ChunkDescription.OuterSingleton;
}
template<> VVENGINE_API UScriptStruct* StaticStruct<FChunkDescription>()
{
	return FChunkDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChunkDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VVEngineChunk.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChunkDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkDescription>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VVEngine,
		nullptr,
		&NewStructOps,
		"ChunkDescription",
		sizeof(FChunkDescription),
		alignof(FChunkDescription),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChunkDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_ChunkDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChunkDescription.InnerSingleton, Z_Construct_UScriptStruct_FChunkDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChunkDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VVEngineChunk;
class UScriptStruct* FVVEngineChunk::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VVEngineChunk.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VVEngineChunk.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVVEngineChunk, Z_Construct_UPackage__Script_VVEngine(), TEXT("VVEngineChunk"));
	}
	return Z_Registration_Info_UScriptStruct_VVEngineChunk.OuterSingleton;
}
template<> VVENGINE_API UScriptStruct* StaticStruct<FVVEngineChunk>()
{
	return FVVEngineChunk::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVVEngineChunk_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVVEngineChunk_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VVEngineChunk.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVVEngineChunk_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVVEngineChunk>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVVEngineChunk_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VVEngine,
		nullptr,
		&NewStructOps,
		"VVEngineChunk",
		sizeof(FVVEngineChunk),
		alignof(FVVEngineChunk),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVVEngineChunk_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVVEngineChunk_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVVEngineChunk()
	{
		if (!Z_Registration_Info_UScriptStruct_VVEngineChunk.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VVEngineChunk.InnerSingleton, Z_Construct_UScriptStruct_FVVEngineChunk_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VVEngineChunk.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineChunk_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineChunk_h_Statics::EnumInfo[] = {
		{ FChunkState_StaticEnum, TEXT("FChunkState"), &Z_Registration_Info_UEnum_FChunkState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1501872317U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineChunk_h_Statics::ScriptStructInfo[] = {
		{ FChunkDescription::StaticStruct, Z_Construct_UScriptStruct_FChunkDescription_Statics::NewStructOps, TEXT("ChunkDescription"), &Z_Registration_Info_UScriptStruct_ChunkDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkDescription), 2605571656U) },
		{ FVVEngineChunk::StaticStruct, Z_Construct_UScriptStruct_FVVEngineChunk_Statics::NewStructOps, TEXT("VVEngineChunk"), &Z_Registration_Info_UScriptStruct_VVEngineChunk, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVVEngineChunk), 1038476340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineChunk_h_2749781254(TEXT("/Script/VVEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineChunk_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineChunk_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineChunk_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineChunk_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
