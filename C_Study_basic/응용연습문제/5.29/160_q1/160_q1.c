#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int total=0;
	int	even = 0;

	printf("1 부터 100까지의 정수중 짝수의 합\n");

	do {
		total += even;
		even += 2;
	} while (even <= 100);
		printf("%d", total);

}