#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int first_input, second_input;
	int i = 0;
	int temp = 0;

	printf("�� ���� ������ �Է��Ͻðڽ��ϱ�? : ");
	scanf("%d",&first_input);
	
	while (i<first_input){
		printf("���� �Է� : ");
		scanf("%d",&second_input);
		temp = second_input + temp;
		i++;
	}
	printf("�Է¹��� ������ ��� : %f",(double)temp/first_input);
}