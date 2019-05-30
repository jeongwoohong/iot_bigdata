#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number;
	int i = 1;

	printf("하나의 양의정수를 입력하세요 : ");
	scanf("%d", &input_number);

		while (i < input_number+1) {
			printf("%d * %d = %d\n" ,i , 3 ,i * 3);
			i++;
		}
}