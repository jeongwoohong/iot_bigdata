#include <stdio.h>
#pragma warning (disable:4996)

int SimpleFuncOne(void) {
	// �Լ��ȿ� ����� ������ ��������(local variable)�̶�� �Ѵ�.
	// local variable�� �����ֱ�� �Լ��� ����Ǵ� ���� (�Լ� ���� ~ �Լ� ����)
	// ���� �ٸ� �Լ������� �̸��� ������ ������ �ٸ� ���� ����� �����ϴ�.
	// ���������� ������ �ش� �Լ������� �����ϴ�.
	int num = 10;
	num++;
	printf("SimpleFuncOne num : %d \n", num);
	return 0;
}

int SimpleFuncTwo(void) {
	int num1 = 20;
	int num2 = 30;
	num1++ , num2--;
	printf("num1 & num2 : %d %d \n", num1, num2);
	// �Ʒ� num ������ ���� �Լ� {}�� ����� ������ �ƴϱ⿡ ������ ������ �߻��Ѵ�.
//	num++;
	return 0;
}

void main() {
	int num = 17;
	SimpleFuncOne();
	SimpleFuncTwo();
	// ����ġ���� SIm~Two ���������� ���� ����(scope)�� ����ִ�.
//	num1++;   20���� ������ ������ ������ ������ ����Ų��.
//	num2--;
	printf("main num : %d \n", num);
}