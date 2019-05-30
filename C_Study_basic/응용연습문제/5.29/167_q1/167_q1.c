#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number1, input_number2;
	int sum = 0;

	printf("2개의 정수를 입력하세요 : ");
	scanf("%d %d",&input_number1, &input_number2);
	printf("%d와 %d 사이의에 존재하는 정수들의 합 : ",input_number1,input_number2);
	for (; input_number1 <= input_number2; input_number1++) {
		sum = input_number1 + sum;
	}
	printf("%d",sum);
 }