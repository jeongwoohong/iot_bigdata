#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	
	int num;
	printf("start!\n");

	for (num = 1; num < 20; num++) {
		if (num % 2 == 0 || num % 3 == 0)
			continue;
		printf("%d\n", num);
	}
	printf("end! \n");
	return 0;
}
