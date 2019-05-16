#include <stdio.h>

void main(){
	double num1, num2;
	
	printf("2개의 실수를 입력 : ");
	scanf("%lf %lf",&num1, &num2);

	printf("두 수의 +결과 : %f+%f=%f \n",num1,num2,num1+num2);
	printf("두 수의 -결과 : %f+%f=%f \n",num1,num2,num1-num2);
	printf("두 수의 *결과 : %f+%f=%f \n",num1,num2,num1*num2);
	printf("두 수의 /결과 : %f+%f=%f \n",num1,num2,num1/num2);
}	
