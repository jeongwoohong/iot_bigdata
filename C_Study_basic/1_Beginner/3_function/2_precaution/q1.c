#include <stdio.h>

int MaxValue(int num1, int num2, int num3);
int MinValue(int num1, int num2, int num3);

void main()
{
	int num1, num2, num3;
	
	printf("�� ���� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("����� �Է��� ���� �� ���� ū ���� : %d\n", MaxValue(num1, num2, num3));
	printf("����� �Է��� ���� �� ���� ���� ���� : %d\n", MinValue(num1, num2, num3));
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
	else // num1 < num2 ��Ȳ
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

