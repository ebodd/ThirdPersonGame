// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AiPresets/Public/AiPawnMaster_cpp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAiPawnMaster_cpp() {}
// Cross Module References
	AIPRESETS_API UClass* Z_Construct_UClass_AAiPawnMaster_cpp_NoRegister();
	AIPRESETS_API UClass* Z_Construct_UClass_AAiPawnMaster_cpp();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AiPresets();
// End Cross Module References
	void AAiPawnMaster_cpp::StaticRegisterNativesAAiPawnMaster_cpp()
	{
	}
	UClass* Z_Construct_UClass_AAiPawnMaster_cpp_NoRegister()
	{
		return AAiPawnMaster_cpp::StaticClass();
	}
	struct Z_Construct_UClass_AAiPawnMaster_cpp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAiPawnMaster_cpp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_AiPresets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiPawnMaster_cpp_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AiPawnMaster_cpp.h" },
		{ "ModuleRelativePath", "Public/AiPawnMaster_cpp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAiPawnMaster_cpp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAiPawnMaster_cpp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAiPawnMaster_cpp_Statics::ClassParams = {
		&AAiPawnMaster_cpp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAiPawnMaster_cpp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAiPawnMaster_cpp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAiPawnMaster_cpp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAiPawnMaster_cpp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAiPawnMaster_cpp, 3292592389);
	template<> AIPRESETS_API UClass* StaticClass<AAiPawnMaster_cpp>()
	{
		return AAiPawnMaster_cpp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAiPawnMaster_cpp(Z_Construct_UClass_AAiPawnMaster_cpp, &AAiPawnMaster_cpp::StaticClass, TEXT("/Script/AiPresets"), TEXT("AAiPawnMaster_cpp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAiPawnMaster_cpp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
