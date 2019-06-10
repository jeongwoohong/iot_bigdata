#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number;
	int j = 2;
	int k;

	printf("상수 n 입력 : ");
	scanf("%d", &input_number);
	for (k=0 ; j <= input_number; k++) {
		j = j * 2;
	}

	printf("공식을 만족하는 k 의 최대값 : %d", k);
 }