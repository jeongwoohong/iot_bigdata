#include <stdio.h>

// �Լ� ���� ��
// ��ȯŸ�� O , ���� O
// ���� : �Լ��� ������ �˰��� ���� ������ �� �ִ� ����

int my_add(int number1, int number2){ 
	int operation_result;

	printf("\n- ������ ���� ���� ver1 \n");
	printf("ù ��° �Է� : %d \n", number1);
	printf("�� ��° �Է� : %d \n", number2);
	
	operation_result = number1 + number2;
	printf("%d + %d = ", number1, number2);

	return operation_result; 

}

void main(void){
	int number1, number2, result;
	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d", &number1, &number2);

	result = my_add(number1, number2);
	printf("%d \n", result);
}
