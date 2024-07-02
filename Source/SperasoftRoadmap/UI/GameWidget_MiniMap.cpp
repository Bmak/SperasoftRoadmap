
#include "GameWidget_MiniMap.h"

#include "Engine/Engine.h"
#include "SMiniMapWidget.h"
#include "Widgets/SWeakWidget.h"
#include <Subsystems/PanelExtensionSubsystem.h>

void UGameWidget_MiniMap::NativeConstruct()
{
	Super::NativeConstruct();

	if (GEngine && GEngine->GameViewport)
	{
		MiniMapSlateWidget = SNew(SMiniMapWidget).OwnerWidget(this);

		GEngine->GameViewport->AddViewportWidgetContent(
			SAssignNew(GameWidgetContainer, SWeakWidget)
			.PossiblyNullContent(MiniMapSlateWidget.ToSharedRef())
		);
	}
}
