#include <stdio.h>

void main(){
	int input_num1, input_num2;
	int result;

	printf("�Է��� �� ������ ���̸� ���ϴ� ���α׷� \n");
	printf("��, ������ ������� ū ������ ���� ���� ���ϴ�. \n");
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d", &input_num1, &input_num2);

	if(input_num1 > input_num2)
	{
		result = input_num1 - input_num2;
	}
	else
	{
		result = input_num2 - input_num1;
	}
	printf("�� ���� �� : %d", result);
	


}
