// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableObject.generated.h"

UCLASS()
class PROJETLEVIATHAN_API AInteractableObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ObjectIdentity")
	FString id;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActiveModifiers")
	bool isSizeable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActiveModifiers")
	bool isHideable;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FString getId();
	bool getIsSizeable();
	bool getIsHideable();

	void setId(FString newId);
	void setIsSizeable(bool state);
	void setIsHideable(bool state);
};
