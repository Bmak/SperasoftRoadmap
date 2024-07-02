#pragma once

#include "SlateBasics.h"
#include "SlateExtras.h"

class SMiniMapWidget : public SCompoundWidget
{
public:

    SLATE_BEGIN_ARGS(SMiniMapWidget) {}

        SLATE_ARGUMENT(TSoftObjectPtr<class UGameWidget_MiniMap>, OwnerWidget)

        /** The label to display on the button */
        //SLATE_ATTRIBUTE(FString, Label)
        /** Called when the button is clicked */
        //SLATE_EVENT(FOnClicked, OnClicked)
        /** Content to put in the button */
        //SLATE_NAMED_SLOT(FArguments, FSimpleSlot, Content)
        /** Whether or not the button should appear in the hovered state */
        //SLATE_ATTRIBUTE(bool, ShouldAppearHovered)
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);

    TSoftObjectPtr<class UGameWidget_MiniMap> OwnerWidget;
};
