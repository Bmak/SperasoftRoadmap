#pragma once

#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"


UCLASS()
class SPERASOFTROADMAP_API AGameHUD : public AHUD
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;
};
