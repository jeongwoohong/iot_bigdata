#include <stdio.h>

void main(){
	int input_num;
	int num1 = 0;
	int sum = 0;

	printf("다섯 개의 정수를 입력하세요. (단, 1 이상의 정수): \n");
	while(num1 < 5)
	{
		printf("정수를 입력하세요: ");
		scanf("%d", &input_num);
		while(input_num < 1)
		{
			printf("정수를 다시 입력하세요.");
			input_num = 1;
			sum = sum - input_num;
			num1--;
		}
		sum = sum + input_num;
		num1++;
	}
	printf("당신이 입력한 정수의 총합: %d", sum);
}
