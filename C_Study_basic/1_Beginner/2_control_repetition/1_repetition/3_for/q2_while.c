#include <stdio.h>

void main(){
	int input_num;
	int factorial = 1;
	int factorial_value = 1;

	printf("����� ���ϴ� ������ �ϳ� �Է��ϼ���: ");
	scanf("%d", &input_num);

	while(factorial <= input_num)
	{
		factorial_value = factorial_value * factorial;
		factorial++;
	}
	printf("����� �Է��� ������ ��°�: %d", factorial_value);
}
