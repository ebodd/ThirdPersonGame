// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AiPresets/Public/AiMasterController_Cpp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAiMasterController_Cpp() {}
// Cross Module References
	AIPRESETS_API UClass* Z_Construct_UClass_AAiMasterController_Cpp_NoRegister();
	AIPRESETS_API UClass* Z_Construct_UClass_AAiMasterController_Cpp();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_AiPresets();
// End Cross Module References
	void AAiMasterController_Cpp::StaticRegisterNativesAAiMasterController_Cpp()
	{
	}
	UClass* Z_Construct_UClass_AAiMasterController_Cpp_NoRegister()
	{
		return AAiMasterController_Cpp::StaticClass();
	}
	struct Z_Construct_UClass_AAiMasterController_Cpp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAiMasterController_Cpp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_AiPresets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiMasterController_Cpp_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AiMasterController_Cpp.h" },
		{ "ModuleRelativePath", "Public/AiMasterController_Cpp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAiMasterController_Cpp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAiMasterController_Cpp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAiMasterController_Cpp_Statics::ClassParams = {
		&AAiMasterController_Cpp::StaticClass,
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
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAiMasterController_Cpp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAiMasterController_Cpp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAiMasterController_Cpp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAiMasterController_Cpp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAiMasterController_Cpp, 1999357669);
	template<> AIPRESETS_API UClass* StaticClass<AAiMasterController_Cpp>()
	{
		return AAiMasterController_Cpp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAiMasterController_Cpp(Z_Construct_UClass_AAiMasterController_Cpp, &AAiMasterController_Cpp::StaticClass, TEXT("/Script/AiPresets"), TEXT("AAiMasterController_Cpp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAiMasterController_Cpp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
