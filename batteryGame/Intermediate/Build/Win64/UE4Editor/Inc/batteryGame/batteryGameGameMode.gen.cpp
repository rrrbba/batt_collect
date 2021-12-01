// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "batteryGame/batteryGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebatteryGameGameMode() {}
// Cross Module References
	BATTERYGAME_API UClass* Z_Construct_UClass_AbatteryGameGameMode_NoRegister();
	BATTERYGAME_API UClass* Z_Construct_UClass_AbatteryGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_batteryGame();
// End Cross Module References
	void AbatteryGameGameMode::StaticRegisterNativesAbatteryGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AbatteryGameGameMode_NoRegister()
	{
		return AbatteryGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AbatteryGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AbatteryGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_batteryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbatteryGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "batteryGameGameMode.h" },
		{ "ModuleRelativePath", "batteryGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AbatteryGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AbatteryGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AbatteryGameGameMode_Statics::ClassParams = {
		&AbatteryGameGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AbatteryGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AbatteryGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AbatteryGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AbatteryGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AbatteryGameGameMode, 3236303469);
	template<> BATTERYGAME_API UClass* StaticClass<AbatteryGameGameMode>()
	{
		return AbatteryGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AbatteryGameGameMode(Z_Construct_UClass_AbatteryGameGameMode, &AbatteryGameGameMode::StaticClass, TEXT("/Script/batteryGame"), TEXT("AbatteryGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AbatteryGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
