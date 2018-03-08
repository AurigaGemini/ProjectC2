// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Editor/PropertyEditor/Public/IDetailCustomization.h"
//#include "Editor/DetailCustomizations/Private/DetailCustomizationsPrivatePCH.h"

//DECLARE_DELEGATE(FShowTeamProperties);

class CaramelDetail : public IDetailCustomization
{
public:

	static TSharedRef<IDetailCustomization> MakeInstance();

	virtual void CustomizeDetails(IDetailLayoutBuilder& layout) override;
};
