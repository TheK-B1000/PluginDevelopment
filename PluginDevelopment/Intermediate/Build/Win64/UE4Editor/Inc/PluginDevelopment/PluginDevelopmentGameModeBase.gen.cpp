// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PluginDevelopment/PluginDevelopmentGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePluginDevelopmentGameModeBase() {}
// Cross Module References
	PLUGINDEVELOPMENT_API UClass* Z_Construct_UClass_APluginDevelopmentGameModeBase_NoRegister();
	PLUGINDEVELOPMENT_API UClass* Z_Construct_UClass_APluginDevelopmentGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PluginDevelopment();
// End Cross Module References
	void APluginDevelopmentGameModeBase::StaticRegisterNativesAPluginDevelopmentGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APluginDevelopmentGameModeBase_NoRegister()
	{
		return APluginDevelopmentGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APluginDevelopmentGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APluginDevelopmentGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PluginDevelopment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APluginDevelopmentGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PluginDevelopmentGameModeBase.h" },
		{ "ModuleRelativePath", "PluginDevelopmentGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APluginDevelopmentGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APluginDevelopmentGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APluginDevelopmentGameModeBase_Statics::ClassParams = {
		&APluginDevelopmentGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APluginDevelopmentGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APluginDevelopmentGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APluginDevelopmentGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APluginDevelopmentGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APluginDevelopmentGameModeBase, 1934545399);
	template<> PLUGINDEVELOPMENT_API UClass* StaticClass<APluginDevelopmentGameModeBase>()
	{
		return APluginDevelopmentGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APluginDevelopmentGameModeBase(Z_Construct_UClass_APluginDevelopmentGameModeBase, &APluginDevelopmentGameModeBase::StaticClass, TEXT("/Script/PluginDevelopment"), TEXT("APluginDevelopmentGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APluginDevelopmentGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
