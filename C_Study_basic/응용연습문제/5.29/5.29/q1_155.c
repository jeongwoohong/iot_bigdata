#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number ;
	int i=0;

	printf("�ϳ��� ����� �Է��ϼ��� : ");
	scanf("%d" ,&input_number);

	while (i < input_number) {
		printf("Hello world!\n");
		i++;
	}
}