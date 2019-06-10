#include <stdio.h>
extern void increment();
extern int getnum();
extern int num2;

int main(){
	printf("num : %d\n", getnum());
	increment();
	printf("num : %d\n", getnum());
	increment();
	printf("num : %d\n", getnum());
//	printf("func->num2 %d\n", num2);
	return 0;	
}
