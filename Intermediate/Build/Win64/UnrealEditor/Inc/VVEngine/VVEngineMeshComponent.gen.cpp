// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VVEngine/Public/VVEngineMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVVEngineMeshComponent() {}
// Cross Module References
	VVENGINE_API UClass* Z_Construct_UClass_UVVEngineMeshComponent_NoRegister();
	VVENGINE_API UClass* Z_Construct_UClass_UVVEngineMeshComponent();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
	UPackage* Z_Construct_UPackage__Script_VVEngine();
// End Cross Module References
	void UVVEngineMeshComponent::StaticRegisterNativesUVVEngineMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVVEngineMeshComponent);
	UClass* Z_Construct_UClass_UVVEngineMeshComponent_NoRegister()
	{
		return UVVEngineMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVVEngineMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVVEngineMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VVEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVVEngineMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "VVEngineMeshComponent.h" },
		{ "ModuleRelativePath", "Public/VVEngineMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVVEngineMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVVEngineMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVVEngineMeshComponent_Statics::ClassParams = {
		&UVVEngineMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVVEngineMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVVEngineMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVVEngineMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UVVEngineMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVVEngineMeshComponent.OuterSingleton, Z_Construct_UClass_UVVEngineMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVVEngineMeshComponent.OuterSingleton;
	}
	template<> VVENGINE_API UClass* StaticClass<UVVEngineMeshComponent>()
	{
		return UVVEngineMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVVEngineMeshComponent);
	struct Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVVEngineMeshComponent, UVVEngineMeshComponent::StaticClass, TEXT("UVVEngineMeshComponent"), &Z_Registration_Info_UClass_UVVEngineMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVVEngineMeshComponent), 3465443845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineMeshComponent_h_3477693204(TEXT("/Script/VVEngine"),
		Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VVEngine_Source_VVEngine_Public_VVEngineMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
