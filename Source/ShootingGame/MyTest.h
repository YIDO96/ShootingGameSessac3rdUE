// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyTest.generated.h"

//Blueprintable: �������Ʈ���� ��Ŭ������ Ȯ�� �����ϰ���
//BlueprintType: �������Ʈ���� ��Ŭ������ �ν��Ͻ��� ������ ��밡��
UCLASS(Blueprintable,BlueprintType)
class SHOOTINGGAME_API AMyTest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
		


	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category ="Example")
	int32 number1 =10;

	UPROPERTY(VisibleAnywhere)
	float number2 = 1.234f;

	UPROPERTY(EditInstanceOnly)
	FString myName = "YoonJH"; 

	//�������Ʈ�� ȣ�Ⱑ���ϰ� ����
	UFUNCTION(BlueprintCallable, Category = "Example")
	void BlueprintCallableFunction();

	//�������Ʈ���� ���� �Լ��� ȣ�Ⱑ��, ǻ��,���� -> ����(��)�� �������� ���� , ReadOnly
	UFUNCTION(BlueprintPure, Category = "Example")
	int32 GetPureFunction() const; // �̰��� ��� 

	//�������Ʈ���� ����(�Ǵ�X) �̺�Ʈ -> ���� �ʼ�, �ؾ��ϴ�  
	// C++ Ŭ������ , �������Ʈ�� ������ �������̽� ���� ����ʹ� 
	UFUNCTION(BlueprintImplementableEvent, Category = "Example")
	void ImplementableEventFunction();

	// �������Ʈ���� C++ �⺻ ������ �����ϰ�, �������Ʈ���� ������ ����
	// �������Ʈ���� ������ ���ϸ�, C++�������� ����
	UFUNCTION(BlueprintNativeEvent, Category = "Example")
	void NativeEventFunction();
	virtual void NativeEventFunction_Implementation();
};
