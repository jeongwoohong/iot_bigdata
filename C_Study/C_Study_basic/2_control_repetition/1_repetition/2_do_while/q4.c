#include <stdio.h>

void main(){
	int num_1 = 2;
	int is = 0;

	do
	{
		is = 1;
		do
		{
			printf("%d X %d = %d\n", num_1, is, num_1*is);
			is++;
		}while(is < 10);
		printf("\n");
		num_1++;
	}while(num_1 < 10);
}
