#include <stdio.h>

void main(){
		int input_x, input_y;
		int input_x1, input_y1;
	printf("�� ����� x, y ��ǥ : ");
	scanf("%d %d", &input_x, &input_y);

	printf("�� ����� x, y ��ǥ : ");
	scanf("%d %d", &input_x1, &input_y1);

	int result=(input_x1-input_x)*(input_y1-input_y);
	printf("�� ���� �̷�� ���簢���� ���̴� %d �Դϴ�.",result);

}
