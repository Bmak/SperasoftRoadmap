#pragma once

#include "Blueprint/UserWidget.h"
#include "GameWidget_MiniMap.generated.h"

UCLASS()
class SPERASOFTROADMAP_API UGameWidget_MiniMap : public UUserWidget
{
	GENERATED_BODY()
	
public:
	class UImage* GetMiniMapImage() { return MiniMapImage; }

protected:

	void NativeConstruct() override;

	TSharedPtr<class SMiniMapWidget> MiniMapSlateWidget;
	TSharedPtr<class SWidget> GameWidgetContainer;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<class UImage> MiniMapImage;
};
