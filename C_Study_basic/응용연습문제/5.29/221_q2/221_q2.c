#include <stdio.h>
#pragma warning (disable:4996)

int celtofah(int cel);
int fahtocel(int fah);
void main() {
	int cel, fah;

	printf("������ �Է��ϼ��� : "); scanf("%d", &cel);
	printf("ȭ���� �Է��ϼ��� : "); scanf("%d", &fah);

	printf("����%d�� => ȭ��%d��\n", cel, celtofah(cel));
	printf("ȭ��%d�� => ����%d��\n", fah, fahtocel(fah));
}

int celtofah(int cel) {
	return (double)(cel * 1.8) + 32;
}
int fahtocel(int fah){
	return (double)(fah - 32) / 1.8;
}