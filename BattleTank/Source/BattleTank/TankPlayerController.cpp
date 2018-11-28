// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"



ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	ATank* tmpTank = GetControlledTank();
	if (tmpTank) {
		UE_LOG(LogTemp, Warning, TEXT("Controlled Tank found %s"), *tmpTank->GetName());
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("No Controlled Tank Found..."));
	}
}
