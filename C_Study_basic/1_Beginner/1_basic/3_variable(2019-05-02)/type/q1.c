#include <stdio.h>

void main(){
	int input_x1, input_y1;
	int input_x2, input_y2;
	int result = 0;

	printf("�� ����� x,y��ǥ ex) 2 4 : ");
	scanf("%d %d", &input_x1, &input_y1);
	printf("�� �ϴ��� x,y��ǥ ex) 4 8 : ");
	scanf("%d %d", &input_x2, &input_y2);

	result = (input_x2-input_x1)*(input_y2-input_y1);
	printf("�Է��� ��ǥ�� �̷�� ���簢���� ��: %d", result);
		
}

