// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SM_State.generated.h"

UENUM()

enum class EStateMachineCompletionType : uint8
{
	// Implicit failure - this state is not marked as Accept.
	NotAccepted,

	// Success - this state is an accept state.
	Accepted,

	// Explicit failure - this state is specifically marked as failure /not-accept.
	Rejected,

	// Our simulation ran out of steps while the  machien was still running.
	OutOfSteps
};

USTRUCT()
struct FStateMachineResult
{
	GENERATED_BODY()

	UPROPERTY()
	EStateMachineCompletionType CompletionType;

	UPROPERTY()
	USM_State* FinalState;

	UPROPERTY()
	int32 DataIndex;
};

/**
 * 
 */
UCLASS()
class STATEMACHINE_API USM_State : public UDataAsset
{
	GENERATED_BODY()

public:

	
};
