// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameLife/Game.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGame() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GAMELIFE_API UClass* Z_Construct_UClass_AGame();
	GAMELIFE_API UClass* Z_Construct_UClass_AGame_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameLife();
// End Cross Module References
	DEFINE_FUNCTION(AGame::execCountLiveNeighbors)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_Row);
		P_GET_PROPERTY(FUInt32Property,Z_Param_Col);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint32*)Z_Param__Result=P_THIS->CountLiveNeighbors(Z_Param_Row,Z_Param_Col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGame::execStepGameField)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_Row);
		P_GET_PROPERTY(FUInt32Property,Z_Param_Col);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StepGameField(Z_Param_Row,Z_Param_Col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGame::execCopyGameField)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_Row);
		P_GET_PROPERTY(FUInt32Property,Z_Param_Col);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyGameField(Z_Param_Row,Z_Param_Col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGame::execInitializationCopyActorGrid)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_Row);
		P_GET_PROPERTY(FUInt32Property,Z_Param_Col);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializationCopyActorGrid(Z_Param_Row,Z_Param_Col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGame::execInitializationActorGrid)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_Row);
		P_GET_PROPERTY(FUInt32Property,Z_Param_Col);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializationActorGrid(Z_Param_Row,Z_Param_Col);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGame::execCreateGameField)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_Row);
		P_GET_PROPERTY(FUInt32Property,Z_Param_Col);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGameField(Z_Param_Row,Z_Param_Col);
		P_NATIVE_END;
	}
	void AGame::StaticRegisterNativesAGame()
	{
		UClass* Class = AGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyGameField", &AGame::execCopyGameField },
			{ "CountLiveNeighbors", &AGame::execCountLiveNeighbors },
			{ "CreateGameField", &AGame::execCreateGameField },
			{ "InitializationActorGrid", &AGame::execInitializationActorGrid },
			{ "InitializationCopyActorGrid", &AGame::execInitializationCopyActorGrid },
			{ "StepGameField", &AGame::execStepGameField },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGame_CopyGameField_Statics
	{
		struct Game_eventCopyGameField_Parms
		{
			uint32 Row;
			uint32 Col;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Row;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Col_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Col;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_CopyGameField_Statics::NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AGame_CopyGameField_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Game_eventCopyGameField_Parms, Row), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_CopyGameField_Statics::NewProp_Row_MetaData), Z_Construct_UFunction_AGame_CopyGameField_Statics::NewProp_Row_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_CopyGameField_Statics::NewProp_Col_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AGame_CopyGameField_Statics::NewProp_Col = { "Col", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Game_eventCopyGameField_Parms, Col), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_CopyGameField_Statics::NewProp_Col_MetaData), Z_Construct_UFunction_AGame_CopyGameField_Statics::NewProp_Col_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGame_CopyGameField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGame_CopyGameField_Statics::NewProp_Row,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGame_CopyGameField_Statics::NewProp_Col,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_CopyGameField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGame_CopyGameField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGame, nullptr, "CopyGameField", nullptr, nullptr, Z_Construct_UFunction_AGame_CopyGameField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_CopyGameField_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGame_CopyGameField_Statics::Game_eventCopyGameField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_CopyGameField_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGame_CopyGameField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_CopyGameField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGame_CopyGameField_Statics::Game_eventCopyGameField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGame_CopyGameField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGame_CopyGameField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics
	{
		struct Game_eventCountLiveNeighbors_Parms
		{
			uint32 Row;
			uint32 Col;
			uint32 ReturnValue;
		};
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Row;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Col;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Game_eventCountLiveNeighbors_Parms, Row), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::NewProp_Col = { "Col", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Game_eventCountLiveNeighbors_Parms, Col), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Game_eventCountLiveNeighbors_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::NewProp_Row,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::NewProp_Col,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGame, nullptr, "CountLiveNeighbors", nullptr, nullptr, Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::Game_eventCountLiveNeighbors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::Game_eventCountLiveNeighbors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGame_CountLiveNeighbors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGame_CountLiveNeighbors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGame_CreateGameField_Statics
	{
		struct Game_eventCreateGameField_Parms
		{
			uint32 Row;
			uint32 Col;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Row;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Col_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Col;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_CreateGameField_Statics::NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AGame_CreateGameField_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Game_eventCreateGameField_Parms, Row), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_CreateGameField_Statics::NewProp_Row_MetaData), Z_Construct_UFunction_AGame_CreateGameField_Statics::NewProp_Row_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_CreateGameField_Statics::NewProp_Col_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AGame_CreateGameField_Statics::NewProp_Col = { "Col", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Game_eventCreateGameField_Parms, Col), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_CreateGameField_Statics::NewProp_Col_MetaData), Z_Construct_UFunction_AGame_CreateGameField_Statics::NewProp_Col_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGame_CreateGameField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGame_CreateGameField_Statics::NewProp_Row,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGame_CreateGameField_Statics::NewProp_Col,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_CreateGameField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGame_CreateGameField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGame, nullptr, "CreateGameField", nullptr, nullptr, Z_Construct_UFunction_AGame_CreateGameField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_CreateGameField_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGame_CreateGameField_Statics::Game_eventCreateGameField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_CreateGameField_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGame_CreateGameField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_CreateGameField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGame_CreateGameField_Statics::Game_eventCreateGameField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGame_CreateGameField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGame_CreateGameField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGame_InitializationActorGrid_Statics
	{
		struct Game_eventInitializationActorGrid_Parms
		{
			uint32 Row;
			uint32 Col;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Row;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Col_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Col;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Game_eventInitializationActorGrid_Parms, Row), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::NewProp_Row_MetaData), Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::NewProp_Row_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::NewProp_Col_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::NewProp_Col = { "Col", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Game_eventInitializationActorGrid_Parms, Col), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::NewProp_Col_MetaData), Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::NewProp_Col_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::NewProp_Row,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::NewProp_Col,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGame, nullptr, "InitializationActorGrid", nullptr, nullptr, Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::Game_eventInitializationActorGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::Game_eventInitializationActorGrid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGame_InitializationActorGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGame_InitializationActorGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics
	{
		struct Game_eventInitializationCopyActorGrid_Parms
		{
			uint32 Row;
			uint32 Col;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Row;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Col_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Col;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Game_eventInitializationCopyActorGrid_Parms, Row), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::NewProp_Row_MetaData), Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::NewProp_Row_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::NewProp_Col_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::NewProp_Col = { "Col", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Game_eventInitializationCopyActorGrid_Parms, Col), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::NewProp_Col_MetaData), Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::NewProp_Col_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::NewProp_Row,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::NewProp_Col,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGame, nullptr, "InitializationCopyActorGrid", nullptr, nullptr, Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::Game_eventInitializationCopyActorGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::Game_eventInitializationCopyActorGrid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGame_InitializationCopyActorGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGame_InitializationCopyActorGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGame_StepGameField_Statics
	{
		struct Game_eventStepGameField_Parms
		{
			uint32 Row;
			uint32 Col;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Row;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Col_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Col;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_StepGameField_Statics::NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AGame_StepGameField_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Game_eventStepGameField_Parms, Row), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_StepGameField_Statics::NewProp_Row_MetaData), Z_Construct_UFunction_AGame_StepGameField_Statics::NewProp_Row_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_StepGameField_Statics::NewProp_Col_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AGame_StepGameField_Statics::NewProp_Col = { "Col", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Game_eventStepGameField_Parms, Col), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_StepGameField_Statics::NewProp_Col_MetaData), Z_Construct_UFunction_AGame_StepGameField_Statics::NewProp_Col_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGame_StepGameField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGame_StepGameField_Statics::NewProp_Row,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGame_StepGameField_Statics::NewProp_Col,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGame_StepGameField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGame_StepGameField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGame, nullptr, "StepGameField", nullptr, nullptr, Z_Construct_UFunction_AGame_StepGameField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_StepGameField_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGame_StepGameField_Statics::Game_eventStepGameField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_StepGameField_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGame_StepGameField_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGame_StepGameField_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGame_StepGameField_Statics::Game_eventStepGameField_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGame_StepGameField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGame_StepGameField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGame);
	UClass* Z_Construct_UClass_AGame_NoRegister()
	{
		return AGame::StaticClass();
	}
	struct Z_Construct_UClass_AGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material0_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material1;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameLife,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGame_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGame_CopyGameField, "CopyGameField" }, // 3442946008
		{ &Z_Construct_UFunction_AGame_CountLiveNeighbors, "CountLiveNeighbors" }, // 520628896
		{ &Z_Construct_UFunction_AGame_CreateGameField, "CreateGameField" }, // 3558741214
		{ &Z_Construct_UFunction_AGame_InitializationActorGrid, "InitializationActorGrid" }, // 362348039
		{ &Z_Construct_UFunction_AGame_InitializationCopyActorGrid, "InitializationCopyActorGrid" }, // 3456633621
		{ &Z_Construct_UFunction_AGame_StepGameField, "StepGameField" }, // 3379965971
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGame_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Game.h" },
		{ "ModuleRelativePath", "Game.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGame_Statics::NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Game.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGame_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGame, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGame_Statics::NewProp_StartLocation_MetaData), Z_Construct_UClass_AGame_Statics::NewProp_StartLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGame_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "ModuleRelativePath", "Game.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGame_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGame, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGame_Statics::NewProp_SpawnLocation_MetaData), Z_Construct_UClass_AGame_Statics::NewProp_SpawnLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGame_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Game.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGame_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGame, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGame_Statics::NewProp_Rotation_MetaData), Z_Construct_UClass_AGame_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGame_Statics::NewProp_SpawnActor_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Game.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGame_Statics::NewProp_SpawnActor = { "SpawnActor", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGame, SpawnActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGame_Statics::NewProp_SpawnActor_MetaData), Z_Construct_UClass_AGame_Statics::NewProp_SpawnActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGame_Statics::NewProp_Material0_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Game.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGame_Statics::NewProp_Material0 = { "Material0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGame, Material0), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGame_Statics::NewProp_Material0_MetaData), Z_Construct_UClass_AGame_Statics::NewProp_Material0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGame_Statics::NewProp_Material1_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Game.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGame_Statics::NewProp_Material1 = { "Material1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGame, Material1), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGame_Statics::NewProp_Material1_MetaData), Z_Construct_UClass_AGame_Statics::NewProp_Material1_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGame_Statics::NewProp_StartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGame_Statics::NewProp_SpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGame_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGame_Statics::NewProp_SpawnActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGame_Statics::NewProp_Material0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGame_Statics::NewProp_Material1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGame_Statics::ClassParams = {
		&AGame::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGame_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGame_Statics::Class_MetaDataParams), Z_Construct_UClass_AGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGame()
	{
		if (!Z_Registration_Info_UClass_AGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGame.OuterSingleton, Z_Construct_UClass_AGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGame.OuterSingleton;
	}
	template<> GAMELIFE_API UClass* StaticClass<AGame>()
	{
		return AGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGame);
	AGame::~AGame() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Project_GameLife_Source_GameLife_Game_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_GameLife_Source_GameLife_Game_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGame, AGame::StaticClass, TEXT("AGame"), &Z_Registration_Info_UClass_AGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGame), 2710391842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_GameLife_Source_GameLife_Game_h_2936360222(TEXT("/Script/GameLife"),
		Z_CompiledInDeferFile_FID_Unreal_Project_GameLife_Source_GameLife_Game_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_GameLife_Source_GameLife_Game_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
