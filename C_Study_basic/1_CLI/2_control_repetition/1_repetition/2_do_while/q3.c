#include <stdio.h>

void main(){
	int num = 0;
	int sum = 0;

	do
	{
		sum = sum + num;
		num = num + 2;
	}while(num <= 100);
	printf("0���� 100������ ¦���� ��: %d", sum);
}
