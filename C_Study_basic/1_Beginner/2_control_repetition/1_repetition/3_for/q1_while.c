#include <stdio.h>

void main(){
	int input_num1;
	int input_num2;
	int rep = 1;
	int sum = 0;

	printf("�� ���� ������ �Է��ϵ� �� ��° ������ ù ��° �������� Ŀ���մϴ�.\n");
	
	printf("ù ��° ������ �Է��ϼ���: ");
	scanf("%d", &input_num1);
	printf("�� ��° ������ �Է��ϼ���: ");
	scanf("%d", &input_num2);

	sum = input_num1;
	while(rep < (input_num2 - input_num1 + 1))
	{
		sum = sum + (input_num1 + rep);
		rep++;
		printf("����� �Է��� ������ �� ���� �������� ��: %d\n", sum);
	}
	printf("\n����� �Է��� ������ �� ���� �������� ��: %d", sum);
	
}
