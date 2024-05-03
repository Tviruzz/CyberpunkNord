// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintSubsystemInitializer.h"

void UGameInstanceSubsystemIntializer::Initialize(FSubsystemCollectionBase& Collection)
{
	const UBlueprintSubsystemInitializer* BlueprintSubsystemInitializer = GetDefault<UBlueprintSubsystemInitializer>();

	if (BlueprintSubsystemInitializer->GameInstanceSubsystems.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("The Game Instance Subsystem Initializer is empty"))
		return;
	}

	for (TSubclassOf<UGameInstanceSubsystem> Subsystem : BlueprintSubsystemInitializer->GameInstanceSubsystems)
	{
		Collection.InitializeDependency(Subsystem);
	}
}
