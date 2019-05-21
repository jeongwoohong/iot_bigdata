#include <stdio.h>

void main(){
	int input_num;
	int factorial;
	int factorial_value = 1;

	printf("계승을 원하는 정수를 하나 입력하세요: ");
	scanf("%d", &input_num);

	printf("%d! = 1 X 2 X ... X %d\n", input_num, input_num);
	for(factorial = 1; factorial <= input_num; factorial++)
	{
		factorial_value = factorial_value * factorial;
	}
	printf("입력한 정수의 계승값 : %d", factorial_value);
}
