#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int ipt[10];
	int front = 0;
	int back = 9;
	int i;
	int input_number;
	printf("정수를 입력하세요\n");

	for (i = 0; i < 10; i++) {
		printf("입력 : ");
		scanf("%d", &input_number);
		if (input_number % 2 == 1) {
			ipt[front] = input_number;
			front++;
		}
		else {
			ipt[back] = input_number;
			back--;
		}


	}

	for (i = 0; i < 10; i++) {
		printf("%d ", ipt[i]);
	
	}
}