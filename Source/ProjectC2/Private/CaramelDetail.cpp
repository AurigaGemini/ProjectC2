// Fill out your copyright notice in the Description page of Project Settings.

#include "CaramelDetail.h"
#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "Internationalization.h"
#include "DetailWidgetRow.h"
#include "STextBlock.h"
#include "SlateFontInfo.h"

#define LOCTEXT_NAMESPACE "CaramelDetails"

TSharedRef<IDetailCustomization> CaramelDetail::MakeInstance()
{
	return MakeShareable(new CaramelDetail);
}

void CaramelDetail::CustomizeDetails(IDetailLayoutBuilder& layout)
{
	UE_LOG(LogTemp, Warning, TEXT("[[%s: CaramelDetail::CustomizeDetails() was called]]"), __FUNCTIONW__);

	layout.HideCategory("Rendering");
	layout.HideCategory("Input");
	layout.HideCategory("Actor");
	layout.HideCategory("Transform");
	layout.HideCategory("Tick");
	layout.HideCategory("Replication");

/*
	layout.HideCategory("Socket");
	layout.HideCategory("Rendering");
	layout.HideCategory("Tags");
	layout.HideCategory("ComponentReplication");
	layout.HideCategory("Activation");
	layout.HideCategory("Cooking");
	layout.HideCategory("Event");
	layout.HideCategory("Physics");
	layout.HideCategory("LOD");
	layout.HideCategory("Collision");
*/

	IDetailCategoryBuilder& c = layout.EditCategory("Transform", FText::GetEmpty(), ECategoryPriority::Important);


/*
	IDetailCategoryBuilder& c = layout.EditCategory("Size", FText::FromString(FString("Extra info")), ECategoryPriority::Important);

	c.AddCustomRow(LOCTEXT("Extra info", "Width"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("Extra info", "Width"))
			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(500)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("Extra info", "1"))
			.Font(IDetailLayoutBuilder::GetDetailFont())
		];
*/


}

void CaramelDetail::CustomizeHeader(TSharedRef<class IPropertyHandle> handle, class FDetailWidgetRow& row, IPropertyTypeCustomizationUtils& utils)
{
}

void CaramelDetail::CustomizeChildren(TSharedRef<class IPropertyHandle> handle, class IDetailChildrenBuilder& builder, IPropertyTypeCustomizationUtils& utils)
{
	//Create further customization here
}

#undef LOCTEXT_NAMESPACE
