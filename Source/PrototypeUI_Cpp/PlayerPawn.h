// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UCLASS()
class PROTOTYPEUI_CPP_API APlayerPawn : public APawn
{
	GENERATED_BODY()
    
public:
    
    APlayerPawn();

protected:
    
    virtual void BeginPlay() override;
    
public:
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float life;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float maxLife;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int currentAmmun;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int ammunMax;
    
    virtual void Tick (float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    
    

};
