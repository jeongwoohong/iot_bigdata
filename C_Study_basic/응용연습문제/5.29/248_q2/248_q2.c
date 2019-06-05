#include <stdio.h>
#pragma warning (disable:4996)

void mulitiplication(int, int);

void main() {
	int input_num1, input_num2;

	printf("2개의 정수를 입력하세요 : ");
	scanf("%d %d", &input_num1, &input_num2);

	return multiplication(input_num1, input_num2);
}

int multiplication(int num1, int num2) {

	int i;

	if (num1 < num2) {
		for (; num1 < num2 + 1; num1++) {
			for (i = 1; i < 10; i++)
				printf("%d * %d = %d\n",num1,i, num1 * i);
		}
	}
	else {
		for (; num2 < num1 + 1; num2++) {
			for (i = 1; i < 10; i++)
				printf("%d * %d = %d\n",num2,i, num2 * i);
		}
	}
	return 0;
}