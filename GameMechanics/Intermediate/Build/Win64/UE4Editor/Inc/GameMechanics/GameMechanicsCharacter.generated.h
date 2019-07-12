// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEMECHANICS_GameMechanicsCharacter_generated_h
#error "GameMechanicsCharacter.generated.h already included, missing '#pragma once' in GameMechanicsCharacter.h"
#endif
#define GAMEMECHANICS_GameMechanicsCharacter_generated_h

#define GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_RPC_WRAPPERS
#define GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameMechanicsCharacter(); \
	friend struct Z_Construct_UClass_AGameMechanicsCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameMechanicsCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameMechanics"), NO_API) \
	DECLARE_SERIALIZER(AGameMechanicsCharacter)


#define GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGameMechanicsCharacter(); \
	friend struct Z_Construct_UClass_AGameMechanicsCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameMechanicsCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameMechanics"), NO_API) \
	DECLARE_SERIALIZER(AGameMechanicsCharacter)


#define GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameMechanicsCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameMechanicsCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameMechanicsCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameMechanicsCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameMechanicsCharacter(AGameMechanicsCharacter&&); \
	NO_API AGameMechanicsCharacter(const AGameMechanicsCharacter&); \
public:


#define GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameMechanicsCharacter(AGameMechanicsCharacter&&); \
	NO_API AGameMechanicsCharacter(const AGameMechanicsCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameMechanicsCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameMechanicsCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameMechanicsCharacter)


#define GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGameMechanicsCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AGameMechanicsCharacter, FollowCamera); }


#define GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_9_PROLOG
#define GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_RPC_WRAPPERS \
	GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_INCLASS \
	GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_INCLASS_NO_PURE_DECLS \
	GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEMECHANICS_API UClass* StaticClass<class AGameMechanicsCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameMechanics_Source_GameMechanics_GameMechanicsCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
