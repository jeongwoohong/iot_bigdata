#include <stdio.h>
#pragma warning (disable:4996)

// for�� 3��

void main() {
	int cream, shrimp, cola; // cream : 500 , shrimp : 700 , cola : 400
	int cash = 3500;

	printf("���� ����� �����ϰ� �ִ� �ݾ� : %d \n", cash);
	for (cream = 1; cream < 7; cream++)
	{
		for (shrimp = 1; shrimp < 5; shrimp++)
		{
			for (cola = 1; cola < 9; cola++)
			{
				if (cash == (cream * 500) + (shrimp * 700) + (cola * 400))
				{
					printf("ũ���� %d��, ����� %d��, �ݶ� %d�� \n", cream, shrimp, cola);
				}
			}
		}
	}
	printf("��� �����Ͻðڽ��ϱ�?");
}