#include <stdio.h>

void main(){
	int multiplier = 1;
	int times=2;
	
	printf("while���� ���\n");

	while(multiplier < 10){
		printf("%d X %d = %d\n", times, multiplier, times * multiplier);
		multiplier++;
	}	

	multiplier = 1;
	times=2;
	
	printf("\ndo while���� ���\n");

	do{
		printf("%d X %d = %d\n", times, multiplier, times * multiplier);
		multiplier++;
	}while(multiplier<10);
}

