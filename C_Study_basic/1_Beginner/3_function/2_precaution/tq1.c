#include <stdio.h>

// 1���� 100 ������ ������ ������ �Է¹޴´�.
// �Է¹��� ���� �� / ��� / ������ ����Ѵ�.
// ��, 0���� ������ ���� ����.
// 100���� ũ�� �� / ��� / �������� ���� �� ���� ������ �Է� �޴´�.

void main(){
	int input_num;
	int sum = 0;
	double avr = 0;
	int count = 0;
	int rep = 0;

	while(1)
	{
		printf("���� ������ �Է��Ͻÿ�(���� : ��) : ");
		scanf("%d", &input_num);

		if(input_num < 0)
			break;
		
		if(input_num > 100)
		{	
			printf("100�� �ʰ��Ͽ����ϴ�. �Է� ������ 1 ~ 100 �Դϴ�. \n");
			continue;
		}
//		else // input_num >= 0 && input_num <= 100 �� ����

		rep++; // �ݺ����� 1�� ���� �� �� ���� 1 -> 2 -> 3 -> 4 ...
		sum = sum + input_num;
		avr = (double)sum / rep;
		count = rep;
	}

	printf("�հ� : %d, ��� : %f, ���� : %d", sum, avr, count);
}
