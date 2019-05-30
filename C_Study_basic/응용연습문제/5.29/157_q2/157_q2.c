#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int i = 0;
	int j = 0;

	while (i < 5) {
		while (j<i) {
			printf("o");
			j++;
		}
		j = 0;
		i++;
		printf("*\n");
	}
}