#include <stdio.h>
#pragma warning (disable:4996)

// �Լ� ����(Function Prototype)
void my_add(void);

void main(void){ 
	my_add();
}

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

