#include <stdio.h>
#define ADD 0
#define MIN 1

int main(){
	int num1, num2;

	puts("main] debug1");
	printf("�� ���� ���� �Է� : ");
	puts("main] debug2");
	scanf("%d %d", &num1, &num2);
	puts("main] debug3");

	puts("main] debug4");
	printf("%d + %d = %d\n",num1,num2, num1+num2);

	puts("main] debug5");
	printf("%d - %d = %d\n",num1,num2, num1-num2);
	puts("main] debug6");
	return 0;
}
