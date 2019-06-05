#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number1;
	int input_number2;
	int total ;

	printf("2개의 정수를 입력하세요 : ");
	scanf("%d %d", &input_number1, &input_number2);
	
	total = input_number1 > input_number2 ? input_number1-input_number2 : input_number2-input_number1;
	printf("%d", total);
	/*if (input_number1 != input_number2) {
		if (input_number1 > input_number2) {
			printf("%d - %d = %d", input_number1, input_number2, input_number1 - input_number2);
		}
		else {
			printf("%d - %d = %d", input_number2, input_number1, input_number2 - input_number1);
		}
	}
	else {
		printf("0 이상의 정수를 입력하세요");
	}*/
}