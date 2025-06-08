// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WandererGame/ThiefCatcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThiefCatcher() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WandererGame();
WANDERERGAME_API UClass* Z_Construct_UClass_AMainCharacter();
WANDERERGAME_API UClass* Z_Construct_UClass_AThiefCatcher();
WANDERERGAME_API UClass* Z_Construct_UClass_AThiefCatcher_NoRegister();
// End Cross Module References

// Begin Class AThiefCatcher
void AThiefCatcher::StaticRegisterNativesAThiefCatcher()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThiefCatcher);
UClass* Z_Construct_UClass_AThiefCatcher_NoRegister()
{
	return AThiefCatcher::StaticClass();
}
struct Z_Construct_UClass_AThiefCatcher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ThiefCatcher.h" },
		{ "ModuleRelativePath", "ThiefCatcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "ThiefCatcher" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThiefCatcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "ThiefCatcher" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThiefCatcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThiefCatcher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThiefCatcher_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThiefCatcher, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThiefCatcher_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThiefCatcher, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThiefCatcher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThiefCatcher_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThiefCatcher_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThiefCatcher_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThiefCatcher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMainCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_WandererGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThiefCatcher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThiefCatcher_Statics::ClassParams = {
	&AThiefCatcher::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AThiefCatcher_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AThiefCatcher_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThiefCatcher_Statics::Class_MetaDataParams), Z_Construct_UClass_AThiefCatcher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThiefCatcher()
{
	if (!Z_Registration_Info_UClass_AThiefCatcher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThiefCatcher.OuterSingleton, Z_Construct_UClass_AThiefCatcher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThiefCatcher.OuterSingleton;
}
template<> WANDERERGAME_API UClass* StaticClass<AThiefCatcher>()
{
	return AThiefCatcher::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThiefCatcher);
AThiefCatcher::~AThiefCatcher() {}
// End Class AThiefCatcher

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Admin_source_reKFU_WandererGame0_WandererGame_Source_WandererGame_ThiefCatcher_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThiefCatcher, AThiefCatcher::StaticClass, TEXT("AThiefCatcher"), &Z_Registration_Info_UClass_AThiefCatcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThiefCatcher), 824875785U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Admin_source_reKFU_WandererGame0_WandererGame_Source_WandererGame_ThiefCatcher_h_1301112254(TEXT("/Script/WandererGame"),
	Z_CompiledInDeferFile_FID_Users_Admin_source_reKFU_WandererGame0_WandererGame_Source_WandererGame_ThiefCatcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Admin_source_reKFU_WandererGame0_WandererGame_Source_WandererGame_ThiefCatcher_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
