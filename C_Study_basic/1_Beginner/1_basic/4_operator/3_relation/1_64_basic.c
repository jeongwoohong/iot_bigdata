#include <stdio.h>
/*
 * ���迬�� ����ǥ => �ݵ�� �ؿ� �ִ� ǥ�⸦ ����� �Ѵ�.(�ؼ����� �ٲ�� �����Ͽ����� �ߴ� ���ǡ�)
 * A < B => A�� B���� ������?
 * A > B => A�� B���� ū��?
 * A == B => A�� B���� ������?
 * A != B => A�� B���� �ٸ���? (���� ������?) !�� Not�� �ǹ�
 * A <= B => A�� B���� �۰ų� ������? (or ���� ����)
 * A >= B => A�� B���� ũ�ų� ������? (or ���� ����)
 *
 * ���̸� '1'�� ��ȯ, �����̸� '0'�� ��ȯ
*/

void main(){
	int num1=10, num2=12, result;

	printf("num1: %d, num2: %d\n", num1, num2);

	result = (num1 < num2);
	printf("(num1 < num2) => �򰡰��: %d\n", result);

	result = (num1 > num2);
	printf("(num1 > num2) => �򰡰��: %d\n", result);
	
	result = (num1 == num2);
	printf("(num1 == num2) => �򰡰��: %d\n", result);

	result = (num1 != num2);
	printf("(num1 != num2) => �򰡰��: %d\n", result);

	result = (num1 <= num2);
	printf("(num1 <= num2) => �򰡰��: %d\n", result);

	result = (num1 >= num2);
	printf("(num1 >= num2) => �򰡰��: %d\n", result);
}
