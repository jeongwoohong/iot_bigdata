#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number1, input_number2;
	int sum = 0;

	printf("2���� ������ �Է��ϼ��� : ");
	scanf("%d %d",&input_number1, &input_number2);
	printf("%d�� %d �����ǿ� �����ϴ� �������� �� : ",input_number1,input_number2);
	for (; input_number1 <= input_number2; input_number1++) {
		sum = input_number1 + sum;
	}
	printf("%d",sum);
 }