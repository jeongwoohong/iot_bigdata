#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char input_str[100];
	int i;

	printf("영단어를 입력하세요 : ");
	for (i = 0; i < 100; i++) {
		scanf("%c", input_str[i]);
	}
	for (i = 0; i < 100; i++) {
		printf("%c",input_str[i]);
	}

}