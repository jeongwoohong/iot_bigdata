#include <stdio.h>

void main(){
	int num_1 = 0;
	int num_2 = 0;

	while(num_1 < 5)
	{
		while(num_2 > 0&& num_2 <= num_1)
		{
			printf("¡Û");
			num_2++;
		}
		printf("£ª\n");
		num_1++;
		num_2 = 1;
	}
}
