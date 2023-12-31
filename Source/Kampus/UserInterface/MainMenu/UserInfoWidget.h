// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UserWidget.h"
#include "UserInfoWidget.generated.h"

/**
 * 
 */

class UTextBlock;

UCLASS()
class KAMPUS_API UUserInfoWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;

private:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* NicknameText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* EmailText;
};
