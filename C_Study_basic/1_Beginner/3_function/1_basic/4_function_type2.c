#include <stdio.h>

// �Լ� ���� ��
// ��ȯŸ�� X , ���� O
// �Լ� ���࿡ �ʿ��� �߿��� input�� ȣ���ϴ� �ʿ��� setting�� �Ͽ� �ѱ��.(main���� �Է¹޴´ٴ� �Ҹ�)
// ���� : �Է� ���� ���Ͽ� �Ű澲�� �ʰ� �Լ��� ���� ��ɿ� ������ �� �ִ�.
// ���� : ȣ���ϴ� �ʿ��� �Է¿� ���� ��Ȯ�� ������ �˾ƾ� ����� �� �ִ�.

void my_add(int input_number1, int input_number2){ 
	int result;

	printf("\n- ������ ���� ���� ver1 \n");
	if(input_number1 > 0 && input_number2 > 0){
		printf("ù ��° �Է� : %d \n", input_number1);
		printf("�� ��° �Է� : %d \n", input_number2);
	
		result = input_number1 + input_number2;
		printf("%d + %d = %d \n", input_number1, input_number2, result);
	}
	else{
		printf("����� ����� ���ؼ��� ������ �����մϴ�. \n");
	}

}

void main(void){ 
	int input_number1, input_number2;

	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d %d", &input_number1, &input_number2);
	
	if(input_number1 < 0 || input_number2 < 0){
		printf("���� ���� ������ ����� �����մϴ�. Ȯ���ϰ� ���Է��ϼ���.");
	}
	my_add(input_number1, input_number2);  // �Լ� ȣ��(�Լ��� ������ ����ϴ� ����)
}
