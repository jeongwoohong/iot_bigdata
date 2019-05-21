#include <stdio.h>

int MaxValue(int num1, int num2, int num3);
int MinValue(int num1, int num2, int num3);

void main()
{
	int num1, num2, num3;
	
	printf("세 개의 정수를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("당신이 입력한 정수 중 가장 큰 정수 : %d\n", MaxValue(num1, num2, num3));
	printf("당신이 입력한 정수 중 가장 작은 정수 : %d\n", MinValue(num1, num2, num3));
}

int MaxValue(int num1, int num2, int num3)
{
	if(num1 > num2)
	{
		if(num1 > num3)
			return num1;
		else
			return num3;
	}
	else // num1 < num2 상황
	{
		if(num2 > num3)
			return num2;
		else
			return num3; 
	} 
}

int MinValue(int num1, int num2, int num3)
{
	if(num1 < num2)
	{
		if(num1 < num3)
			return num1;
		else
			return num3;
	}
	else // num1 > num2
	{
		if(num2 < num3)
			return num2;
		else
			return num3;
	}
}

