#include <stdio.h>

// �Լ� ���� ��
// ��ȯŸ�� X , ���� X
// void : ����
// ��ȯ���� �������ڰ� ���� ��� ���� ����
// BUT, �������� �ʰ� ���� ������ ���� ��.

void my_add(void){ // �Լ� ����(function definition)
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

void main(void){ // ()�ȿ� void�� �־��ִ°� ��Ģ.
				 // main�Լ� : C���� �ۼ��ϸ� ���α׷� ����� �ڵ����� ȣ��Ǵ� �Լ�
				 // ���� C ���α׷��� ������(Entry Point)
	my_add(); // �Լ� ȣ��(function call)
	my_add();
	printf("������ ���ᰡ �Ǿ����ϴ�. �����մϴ�. \n");
}
