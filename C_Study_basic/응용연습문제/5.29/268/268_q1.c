#include <stdio.h>
#pragma warning (disable:4996)


void main() {
	char input_str[100];
	int length=0;

	printf("영단어를 입력하세요 : ");
	scanf("%s", input_str);

	while (input_str[length] != 0)
		length++;

	printf("입력한 영단어의 길이 : %d", length);

}