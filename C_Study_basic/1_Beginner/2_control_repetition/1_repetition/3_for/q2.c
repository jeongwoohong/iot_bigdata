#include <stdio.h>

void main(){
	int input_num;
	int factorial;
	int factorial_value = 1;

	printf("����� ���ϴ� ������ �ϳ� �Է��ϼ���: ");
	scanf("%d", &input_num);

	printf("%d! = 1 X 2 X ... X %d\n", input_num, input_num);
	for(factorial = 1; factorial <= input_num; factorial++)
	{
		factorial_value = factorial_value * factorial;
	}
	printf("�Է��� ������ ��°� : %d", factorial_value);
}
