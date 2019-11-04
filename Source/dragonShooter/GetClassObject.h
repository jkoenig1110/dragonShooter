// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/ActorComponent.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Engine/SCS_Node.h"
#include "GetClassObject.generated.h"

/**
 * 
 */
UCLASS()
class DRAGONSHOOTER_API UGetClassObject : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Utilities", meta = (DeterminesOutputType = "inClass"))
		static UObject* GetClassObject(UClass* inClass);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Utilities", meta = (DeterminesOutputType = "inComponentClass"))
		static UActorComponent* FindDefaultComponentByClass(const TSubclassOf<AActor> InActorClass,
			const TSubclassOf<UActorComponent> InComponentClass);

	
};
