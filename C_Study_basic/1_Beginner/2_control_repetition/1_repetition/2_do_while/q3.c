#include <stdio.h>

void main(){
	int even_num = 0;
	int sum = 0;

	do
	{
		sum = sum + even_num;
		even_num = even_num + 2;
	}while(even_num <= 100);
	printf("0부터 100이하의 짝수의 합: %d", sum);
}
