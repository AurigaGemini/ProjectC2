// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectC2GameMode.h"
#include "PropertyEditorModule.h"
#include "CaramelBoxDetail.h"

AProjectC2GameMode::AProjectC2GameMode()
{
//	UE_LOG(LogTemp, Warning, TEXT("[[%s: AProjectC2GameMode was called]]"), __FUNCTIONW__);

	//詳細パネルのカスタマイジング
	FPropertyEditorModule& p = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	p.RegisterCustomClassLayout("CaramelBox_C", FOnGetDetailCustomizationInstance::CreateStatic(&CaramelBoxDetail::MakeInstance));
//	p.RegisterCustomClassLayout("MyActor", FOnGetDetailCustomizationInstance::CreateStatic(&CaramelDetail::MakeInstance));



}
