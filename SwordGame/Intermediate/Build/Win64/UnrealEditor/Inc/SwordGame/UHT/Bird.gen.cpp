// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwordGame/Public/Pawns/Bird.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBird() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SWORDGAME_API UClass* Z_Construct_UClass_ABird();
SWORDGAME_API UClass* Z_Construct_UClass_ABird_NoRegister();
UPackage* Z_Construct_UPackage__Script_SwordGame();
// End Cross Module References

// Begin Class ABird
void ABird::StaticRegisterNativesABird()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABird);
UClass* Z_Construct_UClass_ABird_NoRegister()
{
	return ABird::StaticClass();
}
struct Z_Construct_UClass_ABird_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/Bird.h" },
		{ "ModuleRelativePath", "Public/Pawns/Bird.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BirdMesh_MetaData[] = {
		{ "Category", "Bird" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/Bird.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Bird" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/Bird.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Bird" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/Bird.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Pawns/Bird.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Pawns/Bird.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Pawns/Bird.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BirdMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABird>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABird_Statics::NewProp_BirdMesh = { "BirdMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABird, BirdMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BirdMesh_MetaData), NewProp_BirdMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABird_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABird, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABird_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABird, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABird_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABird, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABird_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABird, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABird_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABird, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABird_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABird_Statics::NewProp_BirdMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABird_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABird_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABird_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABird_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABird_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABird_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SwordGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABird_Statics::ClassParams = {
	&ABird::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABird_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABird_Statics::Class_MetaDataParams), Z_Construct_UClass_ABird_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABird()
{
	if (!Z_Registration_Info_UClass_ABird.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABird.OuterSingleton, Z_Construct_UClass_ABird_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABird.OuterSingleton;
}
template<> SWORDGAME_API UClass* StaticClass<ABird>()
{
	return ABird::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABird);
ABird::~ABird() {}
// End Class ABird

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sebas_Desktop_Unreal_UnrealGame_SwordGame_Source_SwordGame_Public_Pawns_Bird_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABird, ABird::StaticClass, TEXT("ABird"), &Z_Registration_Info_UClass_ABird, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABird), 4065544321U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sebas_Desktop_Unreal_UnrealGame_SwordGame_Source_SwordGame_Public_Pawns_Bird_h_445482175(TEXT("/Script/SwordGame"),
	Z_CompiledInDeferFile_FID_Users_sebas_Desktop_Unreal_UnrealGame_SwordGame_Source_SwordGame_Public_Pawns_Bird_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sebas_Desktop_Unreal_UnrealGame_SwordGame_Source_SwordGame_Public_Pawns_Bird_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
