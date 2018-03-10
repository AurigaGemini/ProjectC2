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
	IDetailCategoryBuilder& c = layout.EditCategory("Size", FText::FromString(FString("Extra info")), ECategoryPriority::Important);

	c.AddCustomRow(LOCTEXT("Extra info", "Custom Header Width"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("Extra info", "Width"))
			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	.ValueContent().MinDesiredWidth(500)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("Extra info", "1"))
			.Font(IDetailLayoutBuilder::GetDetailFont())
		];



}

#undef LOCTEXT_NAMESPACE
