#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

	struct student_point //구조체 point의 정의
	{
		int x_position;
		int y_position;
	};

	int main() {

		struct student_point sungmin, sangwoo;
		double distance;
		fputs("point1 pos : ", stdout);
		scanf("%d %d", &sungmin.x_position, &sungmin.y_position);
		
		fputs("point1 pos : ", stdout);
		scanf("%d %d", &sangwoo.x_position, &sangwoo.y_position);

		/*두 점간의 거리 계산 공식*/
		distance = sqrt((double)((sungmin.x_position - sangwoo.x_position) * (sungmin.x_position - sangwoo.x_position) 
					+ (sungmin.y_position - sangwoo.y_position) * (sungmin.y_position - sangwoo.y_position)));
		printf("두 점의 거리는 %g 입니다. \n", distance);
		return 0;
	}
