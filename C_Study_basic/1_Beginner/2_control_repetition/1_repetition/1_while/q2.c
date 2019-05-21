#include <stdio.h>

void main(){
	int input_num;
	int repetition = 1;

	printf("양의 정수를 하나 입력하세요: ");
	scanf("%d", &input_num);

	while(repetition <= input_num)
	{
		printf("%d ", 3*repetition);
		repetition++;
	}
}
