#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int index = 1;

 	for (; index < 100; index++) {
		if (index % 7 == 0) {
			printf("%d\t", index);
		}
		else if (index % 9 == 0)
			printf("%d\t", index);
	}
}