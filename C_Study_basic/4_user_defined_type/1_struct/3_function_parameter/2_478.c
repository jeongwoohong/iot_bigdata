#include <stdio.h>
#pragma warning (disable:4996)

struct  point{
	int xpos;
	int ypos;
} point;

//구조체를 call by value로 전달한 형태

void showposition(struct point pos) {
	printf("전달 받은 원본값[%d %d]\n", pos.xpos, pos.ypos);
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
	// 구조체는 대입 연산이 가능하다.
	struct point curpos = Getcurrentposition();
	showposition(curpos);

	printf("main함수에서의 좌표 확인 [%d %d]\n", curpos.xpos, curpos.ypos);
}