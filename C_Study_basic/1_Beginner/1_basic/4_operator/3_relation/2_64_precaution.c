#include <stdio.h>

void main(){
	int num1 = 10, num2 = 12, result;

	printf("num1: %d, num2: %d\n", num1, num2);

	// =< ��� ���� �����ڴ� C���� �������� ���� (�Ϲ������� �ٸ� ������ ������)
	// ����, <=�� �ٲ��־�� ��
//	result = (num1 =< num2);
//	printf("(num1 =< num2) => �򰡰��: %d\n", result);

	result = (num1);
	printf("(num1) => �򰡰��: %d\n", result);

	result = (10);
	printf("(10) => �򰡰��: %d\n", result);
}
