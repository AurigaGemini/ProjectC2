// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IDetailCustomization.h"
#include "IPropertyTypeCustomization.h"
#include "SlateInputWidgets.h"

class CaramelBoxDetail : public IDetailCustomization, public IPropertyTypeCustomization
{
public:

	static TSharedRef<IDetailCustomization> MakeInstance();

	virtual void CustomizeDetails(IDetailLayoutBuilder&) override;
	virtual void CustomizeHeader(TSharedRef<class IPropertyHandle>, class FDetailWidgetRow&, IPropertyTypeCustomizationUtils&) override;
	virtual void CustomizeChildren(TSharedRef<class IPropertyHandle>, class IDetailChildrenBuilder&, IPropertyTypeCustomizationUtils&) override;

private:

	TSharedPtr<IPropertyHandle> property_handle;

	class MyComboBox : public SCompoundWidget
	{
	public:
		SLATE_BEGIN_ARGS(MyComboBox)
		{}
		SLATE_END_ARGS()

		typedef TSharedPtr<FString> FComboItemType;

		void Construct(const FArguments& args)
		{
			options.Add(MakeShareable(new FString("Option1")));
			options.Add(MakeShareable(new FString("Option2")));
			options.Add(MakeShareable(new FString("LastOption")));

			current_item = options[0];

			ChildSlot
				[
					SNew(SComboBox<FComboItemType>)
					.OptionsSource(&options)
					.OnSelectionChanged(this, &MyComboBox::OnSelectionChanged)
					.OnGenerateWidget(this, &MyComboBox::MakeWidgetForOption)
					.InitiallySelectedItem(current_item)
					[
						SNew(STextBlock)
						.Text(this, &MyComboBox::GetCurrentItemLabel)
					]
				];
		}

		TSharedRef<SWidget> MakeWidgetForOption(FComboItemType _1)
		{
			return SNew(STextBlock).Text(FText::FromString(*_1));
		}

		void OnSelectionChanged(FComboItemType value, ESelectInfo::Type)
		{
			current_item = value;
		}

		FText GetCurrentItemLabel() const
		{
			if (current_item.IsValid())
			{
				return FText::FromString(*current_item);
			}

			return FText::FromString("");
		}

		FComboItemType current_item;
		TArray<FComboItemType> options;
	};
};
