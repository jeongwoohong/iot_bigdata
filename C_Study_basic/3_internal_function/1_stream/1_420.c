#include <stdio.h>

int main(){
	int ch1, ch2;

	ch1=getchar();		//���� �Է�
	ch2=fgetc(stdin);	// ���� Ű �Է�

	putchar(ch1);		//���� ���
	fputc(ch2, stdout);	// ���� Ű ���
	return 0;
}
