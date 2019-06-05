#include <stdio.h>
#pragma warning (disable:4996)
#define CHAR_COUNT 3

void main() {
	int ch, i;
	FILE* fp = fopen("data.txt", "a+");
	if (fp == NULL) {
		puts("파일오픈 실패!");
	}
	for (i = 0; i < CHAR_COUNT; i++) {
		ch = fgetc(fp);
		printf("%c", ch);
	}

	fputc('D', fp);
	fputc('E', fp);
	fputc('F', fp);
	
	if (fclose(fp) == EOF) {
		puts("파일 close 실패!");
	}

}