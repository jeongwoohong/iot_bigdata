#include <stdio.h>

void main(){
	int input_num;
	int rep = 0;
	int sum = 0;

	printf("�ټ� ���� ������ �Է��ϼ���. (��, 1 �̻��� ����) \n");
	while(rep < 5)
	{
		printf("������ �Է��ϼ���: ");
		scanf("%d", &input_num);
		while(input_num < 1)
		{
			printf("������ �ٽ� �Է��ϼ���.\n");
			input_num = 1;
			sum = sum - input_num;
			rep--;
		}
		sum = sum + input_num;
		rep++;
	}
	printf("����� �Է��� ������ ����: %d", sum);
}
