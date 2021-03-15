// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Engine/DataTable.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NPCCode.generated.h"

USTRUCT(BlueprintType)
struct FNewNpcDialogue : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NPC_ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Conversation_ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Line_ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Dialogue;

};


UCLASS()
class PRUEBA_API ANPCCode : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPCCode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta= (AllowPrivateAccess = "true"))
	class UDataTable* NpcMyDataTable;

	FNewNpcDialogue* MyDialogue;

};
