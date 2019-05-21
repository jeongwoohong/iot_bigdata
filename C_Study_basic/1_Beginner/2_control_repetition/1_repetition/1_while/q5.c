#include <stdio.h>

void main(){
	int input_num1;
	double input_num2;
	int repetition=0;
	double input_sum = 0;
	double average;

	printf("몇 개의 정수를 입력하실래요? ");
	scanf("%d", &input_num1);

	while(repetition < input_num1)
	{
		printf("정수를 입력하세요: ");
		scanf("%lf", &input_num2);
		input_sum += input_num2;
		repetition++;
	}
	average = input_sum/input_num1;
	printf("당신이 입력한 정수의 평균: %lf", average);
}
