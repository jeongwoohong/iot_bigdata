#include <stdio.h>
#pragma warning (disable:4996)

struct  point{
	int xpos;
	int ypos;
} point;

//����ü�� call by value�� ������ ����

void showposition(struct point pos) {
	printf("���� ���� ������[%d %d]\n", pos.xpos, pos.ypos);
	pos.xpos += 10;
	pos.ypos += 10;
	printf("showposition[%d %d]\n", pos.xpos, pos.ypos);
}
struct point Getcurrentposition(){
	struct point cen;
	printf("input current pos : ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}
void main() {
	// ����ü�� ���� ������ �����ϴ�.
	struct point curpos = Getcurrentposition();
	showposition(curpos);

	printf("main�Լ������� ��ǥ Ȯ�� [%d %d]\n", curpos.xpos, curpos.ypos);
}