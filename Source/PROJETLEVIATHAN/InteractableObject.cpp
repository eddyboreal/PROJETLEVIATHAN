// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractableObject.h"

// Sets default values
AInteractableObject::AInteractableObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractableObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//GETTERS

FString AInteractableObject::getId() {
	return id;
};

bool AInteractableObject::getIsSizeable() {
	return isSizeable;
};
bool AInteractableObject::getIsHideable() {
	return isHideable;
};



//SETTERS

void AInteractableObject::setId(FString newId) {
	id = newId;
};

void AInteractableObject::setIsSizeable(bool state) {
	isSizeable = state;
};

void AInteractableObject::setIsHideable(bool state) {
	isHideable = state;
};

