#include <stdio.h>

void main(){
	int input_num;
	int num1 = 0;
	int sum = 0;

	printf("�ټ� ���� ������ �Է��ϼ���. (��, 1 �̻��� ����): \n");
	while(num1 < 5)
	{
		printf("������ �Է��ϼ���: ");
		scanf("%d", &input_num);
		while(input_num < 1)
		{
			printf("������ �ٽ� �Է��ϼ���.");
			input_num = 1;
			sum = sum - input_num;
			num1--;
		}
		sum = sum + input_num;
		num1++;
	}
	printf("����� �Է��� ������ ����: %d", sum);
}
