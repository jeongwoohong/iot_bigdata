#include <stdio.h>

void main(){
	int num1, num2;
	int result;

	printf("�� ������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);

	result = num1%num2;
	printf("�� ������ ��� ������ : %d , %d", num1/num2, result);

}
