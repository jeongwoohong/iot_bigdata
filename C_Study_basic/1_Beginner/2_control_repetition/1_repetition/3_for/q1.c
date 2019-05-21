#include <stdio.h>

void main(){
	int input_num1;
	int input_num2;
	int rep;
	int sum = 0;

	printf("두 개의 정수를 입력하되 두 번째 정수가 첫 번째 정수보다 커야합니다.\n");
	
	printf("첫 번째 정수를 입력하세요: ");
	scanf("%d", &input_num1);
	printf("두 번째 정수를 입력하세요: ");
	scanf("%d", &input_num2);

	sum = input_num1;
	for(rep = 1; rep < (input_num2 - input_num1 + 1); rep++)
	{
		sum = sum + (input_num1 + rep);
	}
	printf("당신이 입력한 정수와 그 사이 정수들의 합: %d", sum);
}
