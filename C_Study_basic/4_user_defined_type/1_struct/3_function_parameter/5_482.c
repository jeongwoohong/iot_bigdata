#include <stdio.h>
#pragma warning (disable:4996)

typedef struct point {
	int xpos;
	int ypos;
}point;

typedef struct point {
	char name[20];
	int xpos;
	int ypos;
}point2;
void main() {
	point pos1 = { 1, 2 };
	point pos2;
	point pos3;
	int arr[2] = { 1,2};
	pos2 = pos1;
	// ����ü�� ���� ������ ���� ���� ���ؼ��� �����ϴ�.
	//pos3 = pos1;
	//����ü�� ���� ���길  �����ϰ� ��������� ������ ��Ÿ �ٸ� ������ ���������ʴ´�.
	pos2 = pos2+pos1;

}
