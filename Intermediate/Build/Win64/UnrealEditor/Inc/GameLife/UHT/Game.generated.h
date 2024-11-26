// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMELIFE_Game_generated_h
#error "Game.generated.h already included, missing '#pragma once' in Game.h"
#endif
#define GAMELIFE_Game_generated_h

#define FID_Unreal_Project_GameLife_Source_GameLife_Game_h_11_SPARSE_DATA
#define FID_Unreal_Project_GameLife_Source_GameLife_Game_h_11_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Project_GameLife_Source_GameLife_Game_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Project_GameLife_Source_GameLife_Game_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCountLiveNeighbors); \
	DECLARE_FUNCTION(execStepGameField); \
	DECLARE_FUNCTION(execCopyGameField); \
	DECLARE_FUNCTION(execInitializationCopyActorGrid); \
	DECLARE_FUNCTION(execInitializationActorGrid); \
	DECLARE_FUNCTION(execCreateGameField);


#define FID_Unreal_Project_GameLife_Source_GameLife_Game_h_11_ACCESSORS
#define FID_Unreal_Project_GameLife_Source_GameLife_Game_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGame(); \
	friend struct Z_Construct_UClass_AGame_Statics; \
public: \
	DECLARE_CLASS(AGame, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameLife"), NO_API) \
	DECLARE_SERIALIZER(AGame)


#define FID_Unreal_Project_GameLife_Source_GameLife_Game_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGame(AGame&&); \
	NO_API AGame(const AGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGame) \
	NO_API virtual ~AGame();


#define FID_Unreal_Project_GameLife_Source_GameLife_Game_h_8_PROLOG
#define FID_Unreal_Project_GameLife_Source_GameLife_Game_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_GameLife_Source_GameLife_Game_h_11_SPARSE_DATA \
	FID_Unreal_Project_GameLife_Source_GameLife_Game_h_11_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Project_GameLife_Source_GameLife_Game_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Project_GameLife_Source_GameLife_Game_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_GameLife_Source_GameLife_Game_h_11_ACCESSORS \
	FID_Unreal_Project_GameLife_Source_GameLife_Game_h_11_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_GameLife_Source_GameLife_Game_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMELIFE_API UClass* StaticClass<class AGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_GameLife_Source_GameLife_Game_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
