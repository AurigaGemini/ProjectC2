// Fill out your copyright notice in the Description page of Project Settings.

#include "CaramelBoxDetail.h"
#include "SlateInputWidgets.h"

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
	c.AddCustomRow(LOCTEXT("BUTTON", "SButton"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("BUTTON", "SButton"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SButton)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("CHECK_BOX", "SCheckBox"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("CHECK_BOX", "SCheckBox"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SCheckBox)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("COMBO_BOX", "SComboBox"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("COMBO_BOX", "SComboBox"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SComboBox)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("COMBO_BUTTON", "SComboButton"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("COMBO_BUTTON", "SComboButton"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SComboButton)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("COMBO_ROW", "SComboRow"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("COMBO_ROW", "SComboRow"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SComboRow)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("EDITABLE_LABEL", "SEditableLabel"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("EDITABLE_LABEL", "SEditableLabel"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SEditableLabel)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("EDITABLE_TEXT", "SEditableText"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("EDITABLE_TEXT", "SEditableText"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SEditableText)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("EDITABLE_TEXTBOX", "SEditableTextBox"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("EDITABLE_TEXTBOX", "SEditableTextBox"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SEditableTextBox)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("EXPANDABLE_BUTTON", "SExpandableButton"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("EXPANDABLE_BUTTON", "SExpandableButton"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SExpandableButton)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("HYPERLINK", "SHyperlink"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("HYPERLINK", "SHyperlink"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SHyperlink)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("INPUTKEY_SELECTOR", "SInputKeySelector"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("INPUTKEY_SELECTOR", "SInputKeySelector"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SInputKeySelector)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("MENU_ANCHOR", "SMenuAnchor"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("MENU_ANCHOR", "SMenuAnchor"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SMenuAnchor)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("MULTILINE_EDITABLE_TEXTBOX", "SMultiLineEditableTextBox"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("MULTILINE_EDITABLE_TEXTBOX", "SMultiLineEditableTextBox"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SMultiLineEditableTextBox)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("NUMERIC_DROPDOWN", "SNumericDropDown"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("NUMERIC_DROPDOWN", "SNumericDropDown"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SNumericDropDown)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("RICHTEXT_HYPERLINK", "SRichTextHyperlink"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("RICHTEXT_HYPERLINK", "SRichTextHyperlink"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SRichTextHyperlink)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("ROTATOR_INPUT_BOX", "SRotatorInputBox"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("ROTATOR_INPUT_BOX", "SRotatorInputBox"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SRotatorInputBox)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("SEARCH_BOX", "SSearchBox"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("SEARCH_BOX", "SSearchBox"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SSearchBox)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("SLIDER", "SSlider"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("SLIDER", "SSlider"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SSlider)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("SPIN_BOX", "SSpinBox"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("SPIN_BOX", "SSpinBox"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SSpinBox)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("SUB_MENU_HANDLER", "SSubMenuHandler"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("SUB_MENU_HANDLER", "SSubMenuHandler"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SSubMenuHandler)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("SUGGESTION_TEXT_BOX", "SSuggestionTextBox"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("SUGGESTION_TEXT_BOX", "SSuggestionTextBox"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SSuggestionTextBox)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("TEXT_COMBO_BOX", "STextComboBox"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("TEXT_COMBO_BOX", "STextComboBox"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(STextComboBox)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("TEXT_COMBO_POPUP", "STextComboPopup"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("TEXT_COMBO_POPUP", "STextComboPopup"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(STextComboPopup)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("TEXT_ENTRY_POPUP", "STextEntryPopup"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("TEXT_ENTRY_POPUP", "STextEntryPopup"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(STextEntryPopup)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("VECTOR_INPUT_BOX", "SVectorInputBox"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("VECTOR_INPUT_BOX", "SVectorInputBox"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SVectorInputBox)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("VIRTUAL_JOYSTICK", "SVirtualJoystick"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("VIRTUAL_JOYSTICK", "SVirtualJoystick"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SVirtualJoystick)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("VIRTUAL_KEYBOARD_ENTRY", "SVirtualKeyboardEntry"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("VIRTUAL_KEYBOARD_ENTRY", "SVirtualKeyboardEntry"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SVirtualKeyboardEntry)
//			.Text(FText::FromString("1"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
	;
	c.AddCustomRow(LOCTEXT("VOLUME_CONTROL", "SVolumeControl"))
		.NameContent()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("VOLUME_CONTROL", "SVolumeControl"))
//			.Font(IDetailLayoutBuilder::GetDetailFont())
		]
		.ValueContent()
		.MinDesiredWidth(50)
		[
			SNew(SVolumeControl)
//			.Text(FText::FromString("1"))
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
