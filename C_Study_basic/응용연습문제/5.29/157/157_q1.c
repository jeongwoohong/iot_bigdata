#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number=0;
	int i = 0;
	int	total = 0;

	printf("5���� ������ �Է��ϼ���\n");
	while (i<5) {
		while (input_number <= 0) {
			printf("0���� ū ���� �Է� (%d��°) : ",i+1);
			scanf("%d",&input_number);
		}
		total += input_number;
		input_number = 0;
		i++;
	}
	printf("5�� ������ ���� : %d", total);
}