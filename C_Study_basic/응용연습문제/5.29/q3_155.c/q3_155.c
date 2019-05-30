#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number=1;
	int temp = 0;


	printf("정수를 입력하세요(0이되면 덧셈을 중지합니다.\n");
		while (input_number != 0) {
			printf("정수 입력 : ");
			scanf("%d", &input_number);
			temp = input_number + temp;
		}
		printf("정수의 합 : %d", temp);
}