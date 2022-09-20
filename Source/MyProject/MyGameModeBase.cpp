// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyCharacter.h"

AMyGameModeBase::AMyGameModeBase()
{
	ConstructorHelpers::FClassFinder<ACharacter> MyCharacter(TEXT("Class'/Script/MyProject.MyCharacter'"));
    DefaultPawnClass = MyCharacter.Class;
	
}