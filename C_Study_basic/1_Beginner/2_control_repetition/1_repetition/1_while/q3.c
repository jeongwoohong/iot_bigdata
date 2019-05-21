#include <stdio.h>

void main(){
	int input_num = 1;
	int sum = 0;

	while(input_num != 0)
	{
		printf("정수를 입력하세요(단, 0 입력시 입력된 정수의 합이 출력): ");
		scanf("%d", &input_num);
		sum = sum + input_num;
	}
	printf("당신이 입력한 정수의 총합: %d", sum);
}
