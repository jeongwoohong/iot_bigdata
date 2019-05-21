#include <stdio.h>

void main(){
	int input_num1, input_num2;
	int result;

	printf("입력한 두 정수의 차이를 구하는 프로그램 \n");
	printf("단, 순서와 상관없이 큰 수에서 작은 수를 뺍니다. \n");
	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &input_num1, &input_num2);

	if(input_num1 > input_num2)
	{
		result = input_num1 - input_num2;
	}
	else
	{
		result = input_num2 - input_num1;
	}
	printf("두 수의 차 : %d", result);
	


}
