#include <stdio.h>

void main(){
	int input_x1, input_y1;
	int input_x2, input_y2;
	int result = 0;

	printf("좌 상단의 x,y좌표 ex) 2 4 : ");
	scanf("%d %d", &input_x1, &input_y1);
	printf("우 하단의 x,y좌표 ex) 4 8 : ");
	scanf("%d %d", &input_x2, &input_y2);

	result = (input_x2-input_x1)*(input_y2-input_y1);
	printf("입력한 좌표가 이루는 직사각형의 합: %d", result);
		
}

