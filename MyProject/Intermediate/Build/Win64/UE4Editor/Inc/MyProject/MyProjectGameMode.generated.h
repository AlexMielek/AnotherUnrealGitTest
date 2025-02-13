// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyProjectGameMode_generated_h
#error "MyProjectGameMode.generated.h already included, missing '#pragma once' in MyProjectGameMode.h"
#endif
#define MYPROJECT_MyProjectGameMode_generated_h

#define MyProject_Source_MyProject_MyProjectGameMode_h_9_RPC_WRAPPERS
#define MyProject_Source_MyProject_MyProjectGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_MyProjectGameMode_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAMyProjectGameMode(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectGameMode(); \
	public: \
	DECLARE_CLASS(AMyProjectGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/MyProject"), MYPROJECT_API) \
	DECLARE_SERIALIZER(AMyProjectGameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_MyProjectGameMode_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAMyProjectGameMode(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectGameMode(); \
	public: \
	DECLARE_CLASS(AMyProjectGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/MyProject"), MYPROJECT_API) \
	DECLARE_SERIALIZER(AMyProjectGameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_MyProjectGameMode_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_API AMyProjectGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, AMyProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectGameMode); \
private: \
	/** Private copy-constructor, should never be used */ \
	MYPROJECT_API AMyProjectGameMode(const AMyProjectGameMode& InCopy); \
public:


#define MyProject_Source_MyProject_MyProjectGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	MYPROJECT_API AMyProjectGameMode(const AMyProjectGameMode& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, AMyProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectGameMode)


#define MyProject_Source_MyProject_MyProjectGameMode_h_6_PROLOG
#define MyProject_Source_MyProject_MyProjectGameMode_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectGameMode_h_9_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyProjectGameMode_h_9_INCLASS \
	MyProject_Source_MyProject_MyProjectGameMode_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyProjectGameMode_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectGameMode_h_9_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyProjectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
