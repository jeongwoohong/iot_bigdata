#include <stdio.h>
#define IOT_DEBUG 0
#define MIN 1

int main(){
	int num1, num2;

#if IOT_DEBUG
	puts("main] debug1");
#endif
	printf("�� ���� ���� �Է� : ");
#if IOT_DEBUG
	puts("main] debug2");
#endif
	scanf("%d %d", &num1, &num2);
#if IOT_DEBUG
	puts("main] debug3");

	puts("main] debug4");
#endif
	printf("%d + %d = %d\n",num1,num2, num1+num2);
#if IOT_DEBUG
	puts("main] debug5");
#endif
	printf("%d - %d = %d\n",num1,num2, num1-num2);
#if IOT_DEBUG
	puts("main] debug6");
#endif
	return 0;
}
