// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WandererGame/ThiefCatcherGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThiefCatcherGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_WandererGame();
WANDERERGAME_API UClass* Z_Construct_UClass_AThiefCatcherGameMode();
WANDERERGAME_API UClass* Z_Construct_UClass_AThiefCatcherGameMode_NoRegister();
// End Cross Module References

// Begin Class AThiefCatcherGameMode
void AThiefCatcherGameMode::StaticRegisterNativesAThiefCatcherGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThiefCatcherGameMode);
UClass* Z_Construct_UClass_AThiefCatcherGameMode_NoRegister()
{
	return AThiefCatcherGameMode::StaticClass();
}
struct Z_Construct_UClass_AThiefCatcherGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ThiefCatcherGameMode.h" },
		{ "ModuleRelativePath", "ThiefCatcherGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThiefCatcherGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AThiefCatcherGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WandererGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThiefCatcherGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThiefCatcherGameMode_Statics::ClassParams = {
	&AThiefCatcherGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThiefCatcherGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AThiefCatcherGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThiefCatcherGameMode()
{
	if (!Z_Registration_Info_UClass_AThiefCatcherGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThiefCatcherGameMode.OuterSingleton, Z_Construct_UClass_AThiefCatcherGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThiefCatcherGameMode.OuterSingleton;
}
template<> WANDERERGAME_API UClass* StaticClass<AThiefCatcherGameMode>()
{
	return AThiefCatcherGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThiefCatcherGameMode);
AThiefCatcherGameMode::~AThiefCatcherGameMode() {}
// End Class AThiefCatcherGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Admin_source_reKFU_WandererGame0_WandererGame_Source_WandererGame_ThiefCatcherGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThiefCatcherGameMode, AThiefCatcherGameMode::StaticClass, TEXT("AThiefCatcherGameMode"), &Z_Registration_Info_UClass_AThiefCatcherGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThiefCatcherGameMode), 881328033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Admin_source_reKFU_WandererGame0_WandererGame_Source_WandererGame_ThiefCatcherGameMode_h_2419171961(TEXT("/Script/WandererGame"),
	Z_CompiledInDeferFile_FID_Users_Admin_source_reKFU_WandererGame0_WandererGame_Source_WandererGame_ThiefCatcherGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Admin_source_reKFU_WandererGame0_WandererGame_Source_WandererGame_ThiefCatcherGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
