#include <stdio.h>

void main(){
	int multiple_7_9; // multiple_7_9 : 배수

	for(multiple_7_9 = 1; multiple_7_9 < 100; multiple_7_9++)
	{
		if(multiple_7_9%7 == 0 || multiple_7_9%9 == 0) // 7혹은 9의 배수 의미
		{
			printf("7혹은 9의 배수 : %d \n", multiple_7_9);
		}
	}
}
