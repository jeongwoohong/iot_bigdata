#include <stdio.h>

// 1에서 100 사이의 정수를 여러개 입력받는다.
// 입력받은 수의 합 / 평균 / 개수를 출력한다.
// 단, 0보다 작으면 루프 종료.
// 100보다 크면 합 / 평균 / 개수에서 제외 후 다음 데이터 입력 받는다.

void main(){
	int input_num;
	int sum = 0;
	double avr = 0;
	int count = 0;
	int rep = 0;

	while(1)
	{
		printf("양의 정수를 입력하시오(음수 : 끝) : ");
		scanf("%d", &input_num);

		if(input_num < 0)
			break;
		
		if(input_num > 100)
		{	
			printf("100을 초과하였습니다. 입력 범위는 1 ~ 100 입니다. \n");
			continue;
		}
//		else // input_num >= 0 && input_num <= 100 의 범위

		rep++; // 반복문이 1번 실행 될 때 마다 1 -> 2 -> 3 -> 4 ...
		sum = sum + input_num;
		avr = (double)sum / rep;
		count = rep;
	}

	printf("합계 : %d, 평균 : %f, 개수 : %d", sum, avr, count);
}
