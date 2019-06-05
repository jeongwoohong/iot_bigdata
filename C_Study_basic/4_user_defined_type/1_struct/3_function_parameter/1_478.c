#include <stdio.h>
#pragma warning (disable:4996)
/*
typedef struct point {
	int xpos;
	int ypos;
} point;
*/
// typedef [기존의 형] [새로운 형]
typedef struct {
	int xpos;
	int ypos;
} point;

void showposition(point pos) {
	printf("[%d %d]\n", pos.xpos, pos.ypos);
}
point Getcurrentposition(){
	point cen;
	printf("input current pos : ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}
void main() {
	point curpos = Getcurrentposition();
	showposition(curpos);
}