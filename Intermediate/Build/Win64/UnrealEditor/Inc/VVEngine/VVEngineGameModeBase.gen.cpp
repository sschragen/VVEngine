// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VVEngine/VVEngineGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVVEngineGameModeBase() {}
// Cross Module References
	VVENGINE_API UClass* Z_Construct_UClass_AVVEngineGameModeBase_NoRegister();
	VVENGINE_API UClass* Z_Construct_UClass_AVVEngineGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VVEngine();
// End Cross Module References
	void AVVEngineGameModeBase::StaticRegisterNativesAVVEngineGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVVEngineGameModeBase);
	UClass* Z_Construct_UClass_AVVEngineGameModeBase_NoRegister()
	{
		return AVVEngineGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AVVEngineGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVVEngineGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VVEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVVEngineGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VVEngineGameModeBase.h" },
		{ "ModuleRelativePath", "VVEngineGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVVEngineGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVVEngineGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVVEngineGameModeBase_Statics::ClassParams = {
		&AVVEngineGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVVEngineGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVVEngineGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVVEngineGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AVVEngineGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVVEngineGameModeBase.OuterSingleton, Z_Construct_UClass_AVVEngineGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVVEngineGameModeBase.OuterSingleton;
	}
	template<> VVENGINE_API UClass* StaticClass<AVVEngineGameModeBase>()
	{
		return AVVEngineGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVVEngineGameModeBase);
	struct Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_VVEngineGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_VVEngineGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVVEngineGameModeBase, AVVEngineGameModeBase::StaticClass, TEXT("AVVEngineGameModeBase"), &Z_Registration_Info_UClass_AVVEngineGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVVEngineGameModeBase), 2187187876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_VVEngineGameModeBase_h_3252470821(TEXT("/Script/VVEngine"),
		Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_VVEngineGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_VVEngineGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
