// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AkAudio/Classes/AkGameplayStatics.h"
#include "MusicSubsystem.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, Abstract)
class CYBERPUNK_API UMusicSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	FString DebugMessage;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void BlueprintImplementableFunction(UObject* WorldContextObject);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void BlueprintExtendableFunction(UObject* WorldContextObject);
	
};
