#include <stdio.h>
#define HIT_NUM 5
#pragma warning (disable:4996)

void main() {
#if HIT_NUM==8
	puts("��ũ�� ��� HIT_NUM�� ���� 5�Դϴ�.");
#else
	puts("��ũ�� ��� HIT_NUM�� ���� 5�� �ƴմϴ�.");
#endif
}