#include <stdio.h>

void main(){
	int first = 0;
	int second = 0;

	while(first < 5)
	{
		while(second > 0 && second <= first)
		{
			printf("¡Û");
			second++;
		}
		printf("£ª\n");
		first++;
		second = 1;
	}
}
