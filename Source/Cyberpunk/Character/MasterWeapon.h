// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MainCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "MasterWeapon.generated.h"

UCLASS()
class CYBERPUNK_API AMasterWeapon : public AActor
{
	GENERATED_BODY()
	
	
public:	
	// Sets default values for this actor's properties
	AMasterWeapon();

	//Variables

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Weapon | Stats |")
	bool bCanShoot = false;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Weapon | Stats |")
	bool bHasAmmo;


	//Skeletal Gun Mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent* WeaponModel;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
