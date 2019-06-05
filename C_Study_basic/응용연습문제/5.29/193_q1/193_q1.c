#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int i, j;

	for (i = 1; i < 10; i++) {
		if (i % 2 == 0) {
			for(j=1;j<=i;j++)
			printf("%d * %d = %d \n",i, j,i * j);
		}
	}
}