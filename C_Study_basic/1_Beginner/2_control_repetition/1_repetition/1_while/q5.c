#include <stdio.h>

void main(){
	int input_num1;
	double input_num2;
	int repetition=0;
	double input_sum = 0;
	double average;

	printf("�� ���� ������ �Է��ϽǷ���? ");
	scanf("%d", &input_num1);

	while(repetition < input_num1)
	{
		printf("������ �Է��ϼ���: ");
		scanf("%lf", &input_num2);
		input_sum += input_num2;
		repetition++;
	}
	average = input_sum/input_num1;
	printf("����� �Է��� ������ ���: %lf", average);
}
