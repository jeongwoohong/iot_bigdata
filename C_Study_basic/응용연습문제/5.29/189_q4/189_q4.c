#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number1;
	int input_number2;
	int total ;

	printf("2���� ������ �Է��ϼ��� : ");
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
		printf("0 �̻��� ������ �Է��ϼ���");
	}*/
}