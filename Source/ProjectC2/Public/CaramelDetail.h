// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IDetailCustomization.h"
#include "IPropertyTypeCustomization.h"

class CaramelDetail : public IDetailCustomization, public IPropertyTypeCustomization
{
public:

	static TSharedRef<IDetailCustomization> MakeInstance();

	virtual void CustomizeDetails(IDetailLayoutBuilder&) override;
	virtual void CustomizeHeader(TSharedRef<class IPropertyHandle>, class FDetailWidgetRow&, IPropertyTypeCustomizationUtils&) override;
	virtual void CustomizeChildren(TSharedRef<class IPropertyHandle>, class IDetailChildrenBuilder&, IPropertyTypeCustomizationUtils&) override;

private:

	TSharedPtr<IPropertyHandle> property_handle;
};
