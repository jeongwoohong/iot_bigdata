#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number;
	int i = 1;

	printf("�ϳ��� ���������� �Է��ϼ��� : ");
	scanf("%d", &input_number);

		while (i < input_number+1) {
			printf("%d * %d = %d\n" ,i , 3 ,i * 3);
			i++;
		}
}