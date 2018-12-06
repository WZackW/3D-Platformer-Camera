// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "NewSpringArm.generated.h"

/**
 * 
 */
UCLASS()
class SM64HD_API UNewSpringArm : public USpringArmComponent
{
	GENERATED_BODY()

	void UpdateDesiredArmLocation(bool bDoTrace, bool bDoLocationLag, bool bDoRotationLag, float DeltaTime) override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Follow on Z"))
	bool FollowZ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "Camera has Collided"))
	bool CameraHasCollided;
	void SetZLookLag(float Val);

};
