#include <stdio.h>
#pragma warning(disable:4996)
//cl /D IOT_DEBUG b_567.c
// IOT_DEBUG ��ũ�� ����� #define �Ӹ� �ƴ϶� ������ �ɼǿ� ���� ����
// ������ ���� �ִ�.
int main(){
	int num1, num2;

#ifdef IOT_DEBUG
	puts("main] debug1");
#endif
	printf("�� ���� ���� �Է� : ");
#ifdef IOT_DEBUG
	puts("main] debug2");
#endif
	scanf("%d %d", &num1, &num2);
#ifdef IOT_DEBUG
	puts("main] debug3");

	puts("main] debug4");
#endif
	printf("%d + %d = %d\n",num1,num2, num1+num2);
#ifdef IOT_DEBUG
	puts("main] debug5");
#endif
	printf("%d - %d = %d\n",num1,num2, num1-num2);
#ifdef IOT_DEBUG
	puts("main] debug6");
#endif
	return 0;
}
