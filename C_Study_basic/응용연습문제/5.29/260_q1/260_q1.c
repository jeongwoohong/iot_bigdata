#include <stdio.h>
#pragma warning (disable:4996)


void main() {
	int input_arr[5];
	int max, min, sum, i;

	printf("5���� ������ �Է��ϼ���");
	for(i = 0; i < 5; i++) {
		printf("�Է� : ");
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


	printf("�Էµ� ���� �߿��� �ִ� : %d\n", max);
	printf("�Էµ� ���� �߿��� �ּڰ� : %d\n", min);
	printf("�Էµ� ������ �� �� : %d\n",sum);
}
