#include <stdio.h>
#pragma warning (disable:4996)


void main() {
	char input_str[100];
	int length=0;

	printf("���ܾ �Է��ϼ��� : ");
	scanf("%s", input_str);

	while (input_str[length] != 0)
		length++;

	printf("�Է��� ���ܾ��� ���� : %d", length);

}