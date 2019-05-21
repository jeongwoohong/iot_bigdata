#include <stdio.h>
#pragma warning (disable:4996)

// for문 3개

void main() {
	int cream, shrimp, cola; // cream : 500 , shrimp : 700 , cola : 400
	int cash = 3500;

	printf("현재 당신이 소유하고 있는 금액 : %d \n", cash);
	for (cream = 1; cream < 7; cream++)
	{
		for (shrimp = 1; shrimp < 5; shrimp++)
		{
			for (cola = 1; cola < 9; cola++)
			{
				if (cash == (cream * 500) + (shrimp * 700) + (cola * 400))
				{
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n", cream, shrimp, cola);
				}
			}
		}
	}
	printf("어떻게 구입하시겠습니까?");
}