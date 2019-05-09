#include <stdio.h>

void main(){
		int input_x, input_y;
		int input_x1, input_y1;
	printf("좌 상단의 x, y 좌표 : ");
	scanf("%d %d", &input_x, &input_y);

	printf("우 상단의 x, y 좌표 : ");
	scanf("%d %d", &input_x1, &input_y1);

	int result=(input_x1-input_x)*(input_y1-input_y);
	printf("두 점이 이루는 직사각형의 넓이는 %d 입니다.",result);

}
