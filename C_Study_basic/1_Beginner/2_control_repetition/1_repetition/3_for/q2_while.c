#include <stdio.h>

void main(){
	int input_num;
	int factorial = 1;
	int factorial_value = 1;

	printf("계승을 원하는 정수를 하나 입력하세요: ");
	scanf("%d", &input_num);

	while(factorial <= input_num)
	{
		factorial_value = factorial_value * factorial;
		factorial++;
	}
	printf("당신이 입력한 정수의 계승값: %d", factorial_value);
}
