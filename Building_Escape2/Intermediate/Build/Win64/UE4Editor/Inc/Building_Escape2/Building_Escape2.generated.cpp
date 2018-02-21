// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Building_Escape2.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Building_Escape2() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API class UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();

	BUILDING_ESCAPE2_API class UClass* Z_Construct_UClass_ABuilding_Escape2GameModeBase_NoRegister();
	BUILDING_ESCAPE2_API class UClass* Z_Construct_UClass_ABuilding_Escape2GameModeBase();
	BUILDING_ESCAPE2_API class UClass* Z_Construct_UClass_UGrabber_NoRegister();
	BUILDING_ESCAPE2_API class UClass* Z_Construct_UClass_UGrabber();
	BUILDING_ESCAPE2_API class UFunction* Z_Construct_UDelegateFunction_Building_Escape2_DoorEvent__DelegateSignature();
	BUILDING_ESCAPE2_API class UClass* Z_Construct_UClass_UOpenDoor_NoRegister();
	BUILDING_ESCAPE2_API class UClass* Z_Construct_UClass_UOpenDoor();
	BUILDING_ESCAPE2_API class UClass* Z_Construct_UClass_UPositionReport_NoRegister();
	BUILDING_ESCAPE2_API class UClass* Z_Construct_UClass_UPositionReport();
	BUILDING_ESCAPE2_API class UPackage* Z_Construct_UPackage__Script_Building_Escape2();
	void ABuilding_Escape2GameModeBase::StaticRegisterNativesABuilding_Escape2GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABuilding_Escape2GameModeBase_NoRegister()
	{
		return ABuilding_Escape2GameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABuilding_Escape2GameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Building_Escape2();
			OuterClass = ABuilding_Escape2GameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABuilding_Escape2GameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Building_Escape2GameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Building_Escape2GameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilding_Escape2GameModeBase, 3067152266);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilding_Escape2GameModeBase(Z_Construct_UClass_ABuilding_Escape2GameModeBase, &ABuilding_Escape2GameModeBase::StaticClass, TEXT("/Script/Building_Escape2"), TEXT("ABuilding_Escape2GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilding_Escape2GameModeBase);
	void UGrabber::StaticRegisterNativesUGrabber()
	{
	}
	UClass* Z_Construct_UClass_UGrabber_NoRegister()
	{
		return UGrabber::StaticClass();
	}
	UClass* Z_Construct_UClass_UGrabber()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_Building_Escape2();
			OuterClass = UGrabber::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Reach = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Reach"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Reach, UGrabber), 0x0040000000020001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UGrabber> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Grabber.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Grabber.h"));
				MetaData->SetValue(NewProp_Reach, TEXT("Category"), TEXT("Grabber"));
				MetaData->SetValue(NewProp_Reach, TEXT("ModuleRelativePath"), TEXT("Grabber.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabber, 2673192991);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabber(Z_Construct_UClass_UGrabber, &UGrabber::StaticClass, TEXT("/Script/Building_Escape2"), TEXT("UGrabber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabber);
	UFunction* Z_Construct_UDelegateFunction_Building_Escape2_DoorEvent__DelegateSignature()
	{
		UObject* Outer=Z_Construct_UPackage__Script_Building_Escape2();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DoorEvent__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
#endif
		}
		return ReturnFunction;
	}
	void UOpenDoor::StaticRegisterNativesUOpenDoor()
	{
	}
	UClass* Z_Construct_UClass_UOpenDoor_NoRegister()
	{
		return UOpenDoor::StaticClass();
	}
	UClass* Z_Construct_UClass_UOpenDoor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_Building_Escape2();
			OuterClass = UOpenDoor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_DoorKeyWeight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DoorKeyWeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DoorKeyWeight, UOpenDoor), 0x0040000000000001);
				UProperty* NewProp_PressurePlate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PressurePlate"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PressurePlate, UOpenDoor), 0x0040000000000001, Z_Construct_UClass_ATriggerVolume_NoRegister());
				UProperty* NewProp_OnClose = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnClose"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnClose, UOpenDoor), 0x0010000010080000, Z_Construct_UDelegateFunction_Building_Escape2_DoorEvent__DelegateSignature());
				UProperty* NewProp_OnOpen = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnOpen"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnOpen, UOpenDoor), 0x0010000010080000, Z_Construct_UDelegateFunction_Building_Escape2_DoorEvent__DelegateSignature());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UOpenDoor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_DoorKeyWeight, TEXT("Category"), TEXT("OpenDoor"));
				MetaData->SetValue(NewProp_DoorKeyWeight, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_PressurePlate, TEXT("Category"), TEXT("OpenDoor"));
				MetaData->SetValue(NewProp_PressurePlate, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_OnClose, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
				MetaData->SetValue(NewProp_OnOpen, TEXT("ModuleRelativePath"), TEXT("OpenDoor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenDoor, 2165159922);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenDoor(Z_Construct_UClass_UOpenDoor, &UOpenDoor::StaticClass, TEXT("/Script/Building_Escape2"), TEXT("UOpenDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenDoor);
	void UPositionReport::StaticRegisterNativesUPositionReport()
	{
	}
	UClass* Z_Construct_UClass_UPositionReport_NoRegister()
	{
		return UPositionReport::StaticClass();
	}
	UClass* Z_Construct_UClass_UPositionReport()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_Building_Escape2();
			OuterClass = UPositionReport::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UPositionReport> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PositionReport.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PositionReport.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPositionReport, 2099799389);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPositionReport(Z_Construct_UClass_UPositionReport, &UPositionReport::StaticClass, TEXT("/Script/Building_Escape2"), TEXT("UPositionReport"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPositionReport);
	UPackage* Z_Construct_UPackage__Script_Building_Escape2()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Building_Escape2")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xE68FBB75;
			Guid.B = 0xA285715B;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

			Z_Construct_UDelegateFunction_Building_Escape2_DoorEvent__DelegateSignature();
		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
