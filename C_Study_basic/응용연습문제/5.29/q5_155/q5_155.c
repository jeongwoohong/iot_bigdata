#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int first_input, second_input;
	int i = 0;
	int temp = 0;

	printf("몇 개의 정수를 입력하시겠습니까? : ");
	scanf("%d",&first_input);
	
	while (i<first_input){
		printf("정수 입력 : ");
		scanf("%d",&second_input);
		temp = second_input + temp;
		i++;
	}
	printf("입력받은 정수의 평균 : %f",(double)temp/first_input);
}