#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	int input_decimal;

	printf("정수를 하나 입력하세요 : ");
	scanf("%d", &input_decimal);

	printf("당신이 입력한 정수의 16진수 표현 : %x", input_decimal);
}