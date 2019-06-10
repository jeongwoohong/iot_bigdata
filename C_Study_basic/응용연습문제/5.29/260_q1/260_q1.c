#include <stdio.h>
#pragma warning (disable:4996)


void main() {
	int input_arr[5];
	int max, min, sum, i;

	printf("5개의 정수를 입력하세요");
	for(i = 0; i < 5; i++) {
		printf("입력 : ");
		scanf("%d", &input_arr[i]);
	}
	max = min = sum =input_arr[0];
	for (i = 1; i < 5; i++) {
		if (max < input_arr[i])
			max = input_arr[i];
		if (min > input_arr[i])
			min = input_arr[i];
		sum += input_arr[i];
	}


	printf("입력된 정수 중에서 최댓값 : %d\n", max);
	printf("입력된 정수 중에서 최솟값 : %d\n", min);
	printf("입력된 정수의 총 합 : %d\n",sum);
}
