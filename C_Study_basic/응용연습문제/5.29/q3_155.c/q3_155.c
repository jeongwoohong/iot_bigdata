#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number=1;
	int temp = 0;


	printf("������ �Է��ϼ���(0�̵Ǹ� ������ �����մϴ�.\n");
		while (input_number != 0) {
			printf("���� �Է� : ");
			scanf("%d", &input_number);
			temp = input_number + temp;
		}
		printf("������ �� : %d", temp);
}