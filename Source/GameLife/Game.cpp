#include "Game.h"

AGame::AGame()
{
	PrimaryActorTick.bCanEverTick = true;
	row = 10;
	col = 10;
	counter = 0;
	TimeSinceLastUpdate = 0.0f;
	UpdateInterval = 0.5f;
}

void AGame::BeginPlay()
{
	Super::BeginPlay();
	
	InitializationActorGrid(row,col);
	InitializationCopyActorGrid(row, col);
	CreateGameField(row,col);
	StepGameField(row,col);
}

void AGame::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Вызов шага игры с интервалом времени
    TimeSinceLastUpdate += DeltaTime;
    if (TimeSinceLastUpdate > UpdateInterval)
    {
        StepGameField(row, col);
        TimeSinceLastUpdate = 0.0f;
    }
}

void AGame::InitializationActorGrid(const uint32 Row,const uint32 Col)
{
	//Задаем размеры двумерного массива
	ActorGrid.SetNum(Row);
	for (uint32 i = 0; i < Row; ++i)
	{
		ActorGrid[i].SetNum(Col);
	}
}

void AGame::InitializationCopyActorGrid(const uint32 Row, const uint32 Col)
{
	// Задаем размеры двумерного массива для копирования
	CopyActorGrid.SetNum(Row);
	for (uint32 i = 0; i < Row; ++i)
	{
		CopyActorGrid[i].SetNum(Col);
	}
}

void AGame::CreateGameField(const uint32 Row,const uint32 Col)
{
	//Получаем начальные координаты объекта и его поворот
	StartLocation = GetActorLocation();
	Rotation = GetActorRotation();
	
	for (uint32 i = 0; i < Row; ++i)
	{
		for (uint32 j = 0; j < Col; ++j)
		{
			//Назначаем новое расположение каждого объекта на сцене
			SpawnLocation = StartLocation + FVector(i * 200.0f, j * 200.0f, 0.0f);
			
			//Спавним объект
			FActorSpawnParameters SpawnParams;
			AActor* SpawnedActorRef = GetWorld()->SpawnActor<AActor>(SpawnActor,SpawnLocation,Rotation,SpawnParams);

			//Добавляем объект в массив
			if (SpawnedActorRef)
			{
				ActorGrid[i][j] = SpawnedActorRef;
				int32 RandomValue = FMath::RandRange(0,1);
				UStaticMeshComponent* Mesh = SpawnedActorRef->FindComponentByClass<UStaticMeshComponent>();

				if (Mesh)
				{
					if (RandomValue == 0)
					{
						Mesh->SetMaterial(0,Material0);
					}
					else
					{
						Mesh->SetMaterial(0,Material1);
					}
				}
			}
		}
	}
	
}

void AGame::CopyGameField(const uint32 Row, const uint32 Col)
{
	for (uint32 i = 0; i < Row; ++i)
	{
		for (uint32 j = 0; j < Col; ++j)
		{
			CopyActorGrid[i][j] = ActorGrid[i][j];
		}
	}
}

void AGame::StepGameField(const uint32 Row, const uint32 Col)
{
	CopyGameField(row,col);

	for (uint32 i = 0; i < Row; ++i)
	{
		for (uint32 j = 0; j < Col; ++j)
		{
			// Считаем количество живых соседей
			uint32 LiveNeighbors = CountLiveNeighbors(i, j);

			// Получаем ссылку на сетку (копия)
			AActor* Actor = CopyActorGrid[i][j];
			UStaticMeshComponent* Mesh = Actor ? Actor->FindComponentByClass<UStaticMeshComponent>() : nullptr;
			if (Mesh)
			{
				if (Mesh->GetMaterial(0) == Material1) // Клетка живая
				{
					// Применение правил для живой клетки
					if ((LiveNeighbors < 2) || (LiveNeighbors > 3)) // Слишком мало или слишком много соседей — умирает
					{
						ActorGrid[i][j]->FindComponentByClass<UStaticMeshComponent>()->SetMaterial(0, Material0);
					}
				}
				else if (Mesh->GetMaterial(0) == Material0) // Клетка мёртвая
				{
					// Применение правил для мёртвой клетки
					if (LiveNeighbors == 3) // Если ровно 3 живых соседа, клетка оживает
					{
						ActorGrid[i][j]->FindComponentByClass<UStaticMeshComponent>()->SetMaterial(0, Material1);
					}
				}
			}
		}
	}
}

uint32 AGame::CountLiveNeighbors(uint32 Row,  uint32 Col)
{
	uint32 LiveNeighbors = 0;

	// Проверка всех 8 соседей
	for (uint32 i = Row - 1; i <= Row + 1; ++i)
	{
		for (uint32 j = Col - 1; j <= Col + 1; ++j)
		{
			if (i >= 0 && i < row && j >= 0 && j < col && !(i == Row && j == Col)) // Проверяем, что это не сама клетка
			{
				AActor* NeighborActor = CopyActorGrid[i][j];
				UStaticMeshComponent* Mesh = NeighborActor ? NeighborActor->FindComponentByClass<UStaticMeshComponent>() : nullptr;
                
				if (Mesh && Mesh->GetMaterial(0) == Material1) // Если сосед живая клетка
				{
					LiveNeighbors++;
				}
			}
		}
	}

	return LiveNeighbors;
}














