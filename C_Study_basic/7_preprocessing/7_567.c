#include <stdio.h>
#define ADD 0
#define MIN 1

int main(){
	int num1, num2;
	printf("�� ���� ���� �Է� : ");
	scanf("%d %d", &num1, &num2);

#if ADD //ADD�� '��'�̸�
	printf("%d + %d = %d\n",num1,num2, num1+num2);
#endif

#if MIN //ADD�� '��'�̸�
	printf("%d - %d = %d\n",num1,num2, num1-num2);
#endif
	return 0;
}
