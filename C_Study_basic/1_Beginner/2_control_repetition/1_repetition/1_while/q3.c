#include <stdio.h>

void main(){
	int input_num = 1;
	int sum = 0;

	while(input_num != 0)
	{
		printf("������ �Է��ϼ���(��, 0 �Է½� �Էµ� ������ ���� ���): ");
		scanf("%d", &input_num);
		sum = sum + input_num;
	}
	printf("����� �Է��� ������ ����: %d", sum);
}
