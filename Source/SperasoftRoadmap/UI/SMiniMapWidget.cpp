
#include "SMiniMapWidget.h"
#include "Components/Image.h"
#include "GameWidget_MiniMap.h"

#define LOCTEXT_NAMESPACE "GameHUD"

void SMiniMapWidget::Construct(const FArguments& InArgs)
{
	const FMargin ContentPadding = FMargin(100.0f, 50.0f);
	const FText TitleText = LOCTEXT("MiniMapTitle", "Slate MiniMap");

	FSlateFontInfo TitleTextStyle = FCoreStyle::Get().GetFontStyle("EmbossedText");
	TitleTextStyle.Size = 30.0f;

	UImage* MiniMapImage = InArgs._OwnerWidget->GetMiniMapImage();
	const FSlateBrush* SlateImageBrush = &(MiniMapImage->GetBrush());

	ChildSlot
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
			.HAlign(HAlign_Right)
			.VAlign(VAlign_Top)
			.Padding(ContentPadding)
			[
				SNew(SVerticalBox)

				//Title
				+ SVerticalBox::Slot()
				[
					SNew(STextBlock)
					.Font(TitleTextStyle)
					.Text(TitleText)
					.Justification(ETextJustify::Center)
				]
				
				//MinimapImage
				+ SVerticalBox::Slot()
				.Padding(10,10,10,10.0f)
				.AutoHeight()
				[
					SNew(SImage)
					.DesiredSizeOverride(FVector2D(256.0f, 256.0f))
					.Image(SlateImageBrush)
				]
			]


			
		];
}

#undef LOCTEXT_NAMESPACE