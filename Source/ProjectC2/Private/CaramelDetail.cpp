// Fill out your copyright notice in the Description page of Project Settings.

#include "CaramelDetail.h"

#define LOCTEXT_NAMESPACE "MyClassDetails"

TSharedRef<IDetailCustomization> CaramelDetail::MakeInstance()
{
	return MakeShareable(new CaramelDetail);
}

void CaramelDetail::CustomizeDetails(IDetailLayoutBuilder& layout)
{
	IDetailCategoryBuilder& c = DetailBuilder.EditCategory("Size", TEXT("Extra info"), ECategoryPriority::Important);

	c.AddCustomRow(LOCTEXT("Extra info", "Custom Header Width").ToString())
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
