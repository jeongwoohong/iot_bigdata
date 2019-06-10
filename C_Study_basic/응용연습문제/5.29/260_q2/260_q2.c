#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char str[] = "\"Good time\"";
	int i;
	
	for (i = 0; i < 12; i++) {
		printf("%c", str[i]);
	}
}