#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number=0;
	int i = 9;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &input_number);
	while (i>0) {
		printf("%d * %d = %d\n",input_number, i, input_number * i);
		i--;
	}
}