#include <stdio.h>
#pragma warning (disable:4996)

// �Լ� ����(Function Prototype)
// �Ʒ��� ���� ��쿡�� �Լ� ������ �� �ʿ䰡 �ִ�.
// ���� : Ư�� �Ӻ���� �����Ϸ��� ������ �Լ� ������ �ؾ��� �Լ��� ����� �� �ְ� ����Ǿ� �ִ�.
// ���� Ư�� �����Ϸ����� �Լ� ������ ���� �ʰ� ���� �����ߴ� �ڵ尡 ������������
// ������ �� �ִ�. (�����Ͽ���, ��Ÿ�ӿ���)
// ���� ��ü���� ���α׷��� ������ �����ϴ� ���鿡���� �Լ� ������ �ڵ� ���� �տ� ���ִ� ����
// �ڵ��� ������, ���ؼ��� ���̴µ� ������ �ȴ�.
// �Լ� ������ �Ϲ������� ��� include�� ������ ��ġ�Ѵ�.
void my_add(void);

void my_add(void){ 
	int number1;
	int number2;
	int result;

	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d %d", &number1, &number2);

	printf("\n- ������ ���� ���� ver1 \n");
	printf("ù ��° �Է� : %d \n", number1);
	printf("�� ��° �Է� : %d \n", number2);
	
	result = number1 + number2;
	printf("%d + %d = %d \n", number1, number2, result);
}

void main(void){ 
	my_add();
}
