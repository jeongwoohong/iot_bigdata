#include <stdio.h>
#pragma warning (disable:4996)
#define CHAR_COUNT 9
int main() {

	int ch, i;
	FILE* fp = fopen("data.txt", "r+");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return ;
	}
	for (i = 0; i < CHAR_COUNT; i++) {
		ch = fgetc(fp);
		printf("%c", ch);
	}

	fputc("X",fp);
	fputc("Y",fp);
	fputc("Z",fp);
	
	//if(fclose(fp))
	if (fclose(fp) == EOF) {
		puts("���� close ����!");
	}
	return 0;

}
