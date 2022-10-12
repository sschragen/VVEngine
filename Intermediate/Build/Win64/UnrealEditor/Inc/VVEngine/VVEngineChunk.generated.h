// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VVENGINE_VVEngineChunk_generated_h
#error "VVEngineChunk.generated.h already included, missing '#pragma once' in VVEngineChunk.h"
#endif
#define VVENGINE_VVEngineChunk_generated_h

#define FID_VVEngine_Source_VVEngine_Public_VVEngineChunk_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChunkDescription_Statics; \
	VVENGINE_API static class UScriptStruct* StaticStruct();


template<> VVENGINE_API UScriptStruct* StaticStruct<struct FChunkDescription>();

#define FID_VVEngine_Source_VVEngine_Public_VVEngineChunk_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVVEngineChunk_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VVENGINE_API UScriptStruct* StaticStruct<struct FVVEngineChunk>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VVEngine_Source_VVEngine_Public_VVEngineChunk_h


#define FOREACH_ENUM_FCHUNKSTATE(op) \
	op(EMPTY) \
	op(LOAD) \
	op(SAVE) \
	op(CREATE) \
	op(READY) \
	op(CHANGED) \
	op(DELETE) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
