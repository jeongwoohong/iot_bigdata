#include <stdio.h>

// �Լ� ���� ��
// ��ȯŸ�� O , ���� X
// ���� : ȣ�� �ϴ� �ʿ����� �Է¿� ���Ͽ� �Ű澲�� �ʾƵ� �ȴ�.
// 		  ����� �޾Ƽ� ó�� �� �� �ִ�.
// ���� : �Լ����� �Է��� ó���ؾ� �ϴ� �δ��� �߻�

int my_add(void){ 
	int number1;
	int number2;
	int operation_result;

	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d %d", &number1, &number2);

	printf("\n- ������ ���� ���� ver1 \n");
	printf("ù ��° �Է� : %d \n", number1);
	printf("�� ��° �Է� : %d \n", number2);
	
	operation_result = number1 + number2;
	printf("%d + %d = ", number1, number2);

	// return number1 + number2; <= ǥ����(expression)�� �ְ� ���� ���� �����ϴ� ���
	return operation_result; // ������ �����ϴ� ���

}

void main(void){ 
	int result;
	result = my_add();
	// my_add() = result; �������� �������� �ʴ� �߸��� ����� ��
	printf("%d \n", result);
}
