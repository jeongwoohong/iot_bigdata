#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number;
	int j = 2;
	int k;

	printf("��� n �Է� : ");
	scanf("%d", &input_number);
	for (k=0 ; j <= input_number; k++) {
		j = j * 2;
	}

	printf("������ �����ϴ� k �� �ִ밪 : %d", k);
 }