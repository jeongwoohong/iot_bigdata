#include <stdio.h>
// github�� �ø��� ���� ����

void main(){
	int num1, num2, num3;
	int result;

	printf("�� ���� ������ �Է��ϼ���: ex)3 4 5(Enter)");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = (num1-num2)*(num2+num3)*(num3%num1);
	printf("(%d-%d)X(%d+%d)X(%d%%%d)=%d", num1, num2, num2, num3, num3, num1, result);
}
