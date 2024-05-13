// Fill out your copyright notice in the Description page of Project Settings.


#include "MusicSubsystem.h"
/**/
void UMusicSubsystem::BlueprintExtendableFunction_Implementation(UObject* WorldContextObject)
{
	UE_LOG(LogTemp, Warning, TEXT("Hello"));
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1,10.0f,FColor::Red,DebugMessage);
	}
	
}

void UMusicSubsystem::PlayMusic_Implementation()
{
	UAkGameplayStatics::PostEventByName("Play_Music",musicActor);
}
