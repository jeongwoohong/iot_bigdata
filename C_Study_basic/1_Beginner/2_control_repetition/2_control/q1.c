#include <stdio.h>

void main(){
	int multiple_7_9; // multiple_7_9 : ���

	for(multiple_7_9 = 1; multiple_7_9 < 100; multiple_7_9++)
	{
		if(multiple_7_9%7 == 0 || multiple_7_9%9 == 0) // 7Ȥ�� 9�� ��� �ǹ�
		{
			printf("7Ȥ�� 9�� ��� : %d \n", multiple_7_9);
		}
	}
}
