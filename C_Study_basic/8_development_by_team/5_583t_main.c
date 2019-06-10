#include <stdio.h>
#include "8_func.h"
int main(){
	printf("num : %d\n", getnum());
	increment();
	printf("num : %d\n", getnum());
	increment();
	printf("num : %d\n", getnum());
	return 0;	
}
