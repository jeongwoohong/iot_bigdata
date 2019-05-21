#include <stdio.h>

void main(){
	int number1=4; 			 //00000000 00000000 00000000 00000100
	int number2=number1 << 2; //00000000 00000000 00000000 00010000
	int number3=number1 << 1; //00000000 00000000 00000000 00001000

	printf("4*16/8 : %d\n", number1*number2/number3);
}
