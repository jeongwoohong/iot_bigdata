#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	int input_number1, input_number2;
	int num, i;

	printf("두개의 정수를 입력하세요 : ");
	scanf("%d %d", &input_number1, &input_number2);

	for (i = 1; i <= input_number2; i++) {
		if(input_number2%i==0){
			if (input_number1 % i == 0) {
				num = i;
			}
		}
	}
		printf("%d", num);
}