#include <stdio.h>

void main(){
	int num1, num2, num3;
	int result;
	
	printf("�� ���� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = num1*num2+num3;
	printf("%d X %d + %d = %d", num1, num2, num3, result);
}
