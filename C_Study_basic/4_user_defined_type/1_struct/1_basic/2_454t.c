#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

	struct student_point //����ü point�� ����
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

		/*�� ������ �Ÿ� ��� ����*/
		distance = sqrt((double)((sungmin.x_position - sangwoo.x_position) * (sungmin.x_position - sangwoo.x_position) 
					+ (sungmin.y_position - sangwoo.y_position) * (sungmin.y_position - sangwoo.y_position)));
		printf("�� ���� �Ÿ��� %g �Դϴ�. \n", distance);
		return 0;
	}
