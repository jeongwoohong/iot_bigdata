#include <stdio.h>

void main(){
	int cur = 2;
	int is = 0;

	do
	{
		is = 1;
		do
		{
			printf("%d X %d = %d\n", cur, is, cur*is);
			is++;
		}while(is < 10);
		printf("\n");
		cur++;
	}while(cur < 10);
}
