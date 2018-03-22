// Fill out your copyright notice in the Description page of Project Settings.

#include "CaramelBoxDetail.h"
#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "Internationalization.h"
#include "DetailWidgetRow.h"
#include "STextBlock.h"
#include "SlateFontInfo.h"

#define LOCTEXT_NAMESPACE "CaramelBoxDetails"

TSharedRef<IDetailCustomization> CaramelBoxDetail::MakeInstance()
{
	return MakeShareable(new CaramelBoxDetail);
}

void CaramelBoxDetail::CustomizeDetails(IDetailLayoutBuilder& layout)
{
	UE_LOG(LogTemp, Warning, TEXT("[[%s: CaramelDetail::CustomizeDetails() was called]]"), __FUNCTIONW__);

	layout.HideCategory("Rendering");
	layout.HideCategory("Input");
	layout.HideCategory("Actor");
	layout.HideCategory("Transform");
	layout.HideCategory("Tick");
	layout.HideCategory("Replication");

//	IDetailCategoryBuilder& c = layout.EditCategory("Transform", FText::GetEmpty(), ECategoryPriority::Important);

	IDetailCategoryBuilder& c = layout.EditCategory("Size", FText::FromString(FString("Extra info")), ECategoryPriority::Important);
	c.AddCustomRow(LOCTEXT("Extra info", "Width"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("Extra info", "Width"))
		.Font(IDetailLayoutBuilder::GetDetailFont())
		];

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

// �v���p�e�B�n���h���擾
TypeHandle = StructPropertyHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FTestStruct, Type));
SelectMeshHandle = StructPropertyHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FTestStruct, SelectMesh));
DefaultScaleHandle = StructPropertyHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FTestStruct, DefaultScale));

// �n���h���ɒ��ڃR�[���o�b�N���w�肷��ꍇ
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
