#include <stdio.h>

void main(){
	int num = 0;
	int sum = 0;

	do
	{
		sum = sum + num;
		num = num + 2;
	}while(num <= 100);
	printf("0부터 100이하의 짝수의 합: %d", sum);
}
