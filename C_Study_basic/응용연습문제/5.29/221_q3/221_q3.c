#include <stdio.h>
#pragma warning (disable:4996)

void fibonacci(int num);

void main() {
	int input_number;

	printf("�ϳ��� ������ �Է��ϼ��� : ");
	scanf("%d", &input_number);

	fibonacci(input_number);
}

void fibonacci(int num) {
	int i;
	int fib = 0;
	int	temp = 0;
	int j = 1;

	for (i = 0; i < num; i++) {
		printf("%d\n",temp);
		fib = j + temp;
		temp = j;
		j = fib;
	}
}