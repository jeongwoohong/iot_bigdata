#include <stdio.h>

void main(){
	double input_num1;
	double input_num2;
	double result;

	printf("두 개의 실수를 입력하세요 ex) 1.255465 3.145128: ");
	scanf("%lf %lf", &input_num1, &input_num2);

	result = input_num1 + input_num2;
	printf("%f + %f = %f\n",	input_num1, input_num2, result);
	result = input_num1 - input_num2;
	printf("%f - %f = %f\n",	input_num1, input_num2, result);
	result = input_num1 * input_num2;
	printf("%f * %f = %f\n",	input_num1, input_num2, result);
	result = input_num1 / input_num2;
	printf("%f / %f = %f\n",	input_num1, input_num2, result);
}
