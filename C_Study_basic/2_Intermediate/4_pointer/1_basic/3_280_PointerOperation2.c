#include <stdio.h>

void main(){
	int num1 = 100, num2=100;
	int *pnum;

	pnum=&num1;

	//소괄호는 생략해도 상관x 
	(*pnum) += 30;

	pnum=&num2;
	(*pnum) -=30;

	printf("num1  %d, num2: %d\n", num1, num2);
}
