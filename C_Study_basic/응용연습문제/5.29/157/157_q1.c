#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number=0;
	int i = 0;
	int	total = 0;

	printf("5개의 정수를 입력하세요\n");
	while (i<5) {
		while (input_number <= 0) {
			printf("0보다 큰 수를 입력 (%d번째) : ",i+1);
			scanf("%d",&input_number);
		}
		total += input_number;
		input_number = 0;
		i++;
	}
	printf("5개 정수의 총합 : %d", total);
}