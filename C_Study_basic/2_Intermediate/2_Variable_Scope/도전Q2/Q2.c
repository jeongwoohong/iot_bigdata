#include <stdio.h>
#pragma warning (disable:4996)

void times_print(int num1, int num2)
{
	int i;
	
	if (num1 < num2)
	{
		for(; num1 <= num2; num1++)
			for (i = 1; i < 10; i++)
			{
				printf("%d X %d = %d \n", num1, i, num1 * i);
			}
		printf("\n");
	}
	else // num1 >= num2
	{
		for(; num2 <= num1; num2++)
			for (i = 1; i < 10; i++)
			{
				printf("%d X %d = %d \n", num2, i, num2 * i);
			}
		printf("\n");
	}
}

void main(){
	int num1, num2;

	printf("두 개의 정수를 입력하세요 (ex. 1 2) : ");
	scanf("%d %d", &num1, &num2);

	times_print(num1, num2);
}