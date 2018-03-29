// Fill out your copyright notice in the Description page of Project Settings.

#include "CaramelBoxDetail.h"
#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "Internationalization.h"
#include "DetailWidgetRow.h"
#include "STextBlock.h"
#include "SEditableTextBox.h"
#include "SlateFontInfo.h"

#define LOCTEXT_NAMESPACE "CARAMEL_BOX_DETAILS"

TSharedRef<IDetailCustomization> CaramelBoxDetail::MakeInstance()
{
	return MakeShareable(new CaramelBoxDetail);
}

void CaramelBoxDetail::CustomizeDetails(IDetailLayoutBuilder& layout)
{
//	UE_LOG(LogTemp, Warning, TEXT("[[%s: CaramelDetail::CustomizeDetails() was called]]"), __FUNCTIONW__);

	layout.HideCategory("Rendering");
	layout.HideCategory("Input");
	layout.HideCategory("Actor");
	layout.HideCategory("Transform");
	layout.HideCategory("Tick");
	layout.HideCategory("Replication");

	IDetailCategoryBuilder& c = layout.EditCategory("BOX_SIZE", FText::FromString("Box Size"), ECategoryPriority::Important);
	c.AddCustomRow(LOCTEXT("BOX_SIZE_WIDTH", "Width"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("BOX_SIZE_WIDTH", "Width"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SEditableTextBox)
			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("BOX_SIZE_HEIGHT", "Height"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("BOX_SIZE_HEIGHT", "Height"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SEditableTextBox)
			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		;

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

void CaramelBoxDetail::CustomizeHeader(TSharedRef<class IPropertyHandle> handle, class FDetailWidgetRow& row, IPropertyTypeCustomizationUtils& utils)
{
/*
TSharedPtr<IPropertyHandle> TypeHandle;
TSharedPtr<IPropertyHandle> SelectMeshHandle;
TSharedPtr<IPropertyHandle> DefaultScaleHandle;

TSharedRef<IPropertyHandle>      StructPropertyHandle,
class FDetailWidgetRow&          HeaderRow,
IPropertyTypeCustomizationUtils& StructCustomizationUtils

// プロパティハンドル取得
TypeHandle = StructPropertyHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FTestStruct, Type));
SelectMeshHandle = StructPropertyHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FTestStruct, SelectMesh));
DefaultScaleHandle = StructPropertyHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FTestStruct, DefaultScale));

// ハンドルに直接コールバックを指定する場合
if (SelectMeshHandle.IsValid()) {
	SelectMeshHandle->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FTestStructCustomization::OnChangedMesh)
);
}
*/
}

void CaramelBoxDetail::CustomizeChildren(TSharedRef<class IPropertyHandle> handle, class IDetailChildrenBuilder& builder, IPropertyTypeCustomizationUtils& utils)
{
	//Create further customization here
}

#undef LOCTEXT_NAMESPACE
