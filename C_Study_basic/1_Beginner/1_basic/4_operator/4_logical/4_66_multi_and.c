#include <stdio.h>
/* �� AND ����ǥ
 * A����	B����	C����	���
 * ����     ����    ����	����
 * ����		����	��		����
 * ����		��		����	����
 * ����		��		��		����
 * ��		����	����	����
 * ��		����	��		����
 * ��		��		����	����
 * ��		��		��		��
 *
*/

void main(){
	int num1=10, num2=12, num3=14, result;

	printf("num1: %d, num2: %d, num3: %d\n", num1, num2, num3);

	// ���� && ���� && ����
	result = (num1 == 11 && num2 == 11 && num3 == 11);
	printf("(num1 == 11 && num2 == 11 && num3 == 11) => �򰡰��: %d\n", result);

	// ���� && ���� && ��
	result = (num1 == 11 && num2 == 11 && num3 == 14);
	printf("(num1 == 11 && num2 == 11 && num3 == 14) => �򰡰��: %d\n", result);
	
	// ���� && �� && ����
	result = (num1 == 11 && num2 == 12 && num3 == 11);
	printf("(num1 == 11 && num2 == 12 && num3 == 11) => �򰡰��: %d\n", result);

	// ���� && �� && ��
	result = (num1 == 11 && num2 == 12 && num3 == 14);
	printf("(num1 == 11 && num2 == 12 && num3 == 14) => �򰡰��: %d\n", result);

	// �� && ���� && ����
	result = (num1 == 10 && num2 == 11 && num3 == 11);
	printf("(num1 == 10 && num2 == 11 && num3 == 11) => �򰡰��: %d\n", result);

	// �� && ���� && ��
	result = (num1 == 10 && num2 == 11 && num3 == 14);
	printf("(num1 == 10 && num2 == 11 && num3 == 14) => �򰡰��: %d\n", result);
	
	// �� && �� && ����
	result = (num1 == 10 && num2 == 12 && num3 == 11);
	printf("(num1 == 10 && num2 == 12 && num3 == 11) => �򰡰��: %d\n", result);

	// �� && �� && ��
	result = (num1 == 10 && num2 == 12 && num3 == 14);
	printf("(num1 == 10 && num2 == 12 && num3 == 14) => �򰡰��: %d\n", result);
}
