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
	// 구조체의 대입 연산은 같은 형에 대해서만 가능하다.
	//pos3 = pos1;
	//구조체는 대입 연산만  가능하고 산술연산을 포함한 기타 다른 연산은 지원하지않는다.
	pos2 = pos2+pos1;

}
