#pragma once

#include "CoreMinimal.h"
#include "Elements/Common/TypedElementHandles.h"
#include "GameFramework/Actor.h"
#include "Game.generated.h"

UCLASS()
class GAMELIFE_API AGame : public AActor
{
	GENERATED_BODY()
	
public:	
	AGame();
	uint32 counter;
	uint32 row;
	uint32 col;
	float TimeSinceLastUpdate = 0.0f;
	float UpdateInterval = 0.5f;
	TArray<TArray<AActor*>> ActorGrid;
	TArray<TArray<AActor*>> CopyActorGrid;
	UPROPERTY()
	FVector StartLocation;
	UPROPERTY()
	FVector SpawnLocation;
	UPROPERTY();
	FRotator Rotation;
	UPROPERTY(EditDefaultsOnly,Category = "Spawning")
	TSubclassOf<AActor> SpawnActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
	UMaterialInterface* Material0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
	UMaterialInterface* Material1;
	
protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void CreateGameField(const uint32 Row,const uint32 Col);
	UFUNCTION()
	void InitializationActorGrid(const uint32 Row,const uint32 Col);
	UFUNCTION()
	void InitializationCopyActorGrid(const uint32 Row,const uint32 Col);
	UFUNCTION()
	void CopyGameField(const uint32 Row,const uint32 Col);
	UFUNCTION()
	void StepGameField(const uint32 Row,const uint32 Col);
	UFUNCTION()
	uint32 CountLiveNeighbors(uint32 Row,uint32 Col);
	
public:	
	virtual void Tick(float DeltaTime) override;
	
};
