#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int language;
	int english;
	int math;
	int average;

	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &language);
	
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &english);
	
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &math);
	
	average = (language + english + math) / 3;
	if (90 <= average) {
		printf("A");
	}
	else if (80 <= average) {
		printf("B");
	}
	else if (70 < average) {
		printf("C");
	}
	else if (50 < average) {
		printf("D");
	}
	else {
		printf("F");
	}
}