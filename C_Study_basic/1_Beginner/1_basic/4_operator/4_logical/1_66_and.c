#include <stdio.h>
/* �� AND ����ǥ
 * A����	B����	���
 * ����     ����    ����
 * ��       ����    ����
 * ����     ��      ����
 * ��       ��      ��
*/

void main(){
	int num1=10, num2=12, result;

	printf("num1: %d, num2: %d\n", num1, num2);

	// ���� && ����
	result = (num1 == 11 && num2 == 11);
	printf("(num1 == 11 && num2 == 11) => �򰡰��: %d\n", result);

	// �� && ����
	result = (num1 == 10 && num2 == 11);
	printf("(num1 == 10 && num2 == 11) => �򰡰��: %d\n", result);
	
	// ���� && ��
	result = (num1 == 11 && num2 == 12);
	printf("(num1 == 11 && num2 == 12) => �򰡰��: %d\n", result);
	
	// �� && ��
	result = (num1 == 10 && num2 == 12);
	printf("(num1 == 10 && num2 == 12) => �򰡰��: %d\n", result);

}
