#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char input_str[100];
	int i;

	printf("���ܾ �Է��ϼ��� : ");
	for (i = 0; i < 100; i++) {
		scanf("%c", input_str[i]);
	}
	for (i = 0; i < 100; i++) {
		printf("%c",input_str[i]);
	}

}