#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int total=0;
	int	even = 0;

	printf("1 ���� 100������ ������ ¦���� ��\n");

	do {
		total += even;
		even += 2;
	} while (even <= 100);
		printf("%d", total);

}