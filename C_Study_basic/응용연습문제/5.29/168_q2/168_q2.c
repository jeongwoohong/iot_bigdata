#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number;
	int index;
	int total=1;

	printf("하나의 정수를 입력하세요 : ");
	scanf("%d",&input_number );
	for (index = 1; index <= input_number; index++) {
		total = index * total;
		printf(" %d *", index);
	}
	printf("\b= %d", total);
}