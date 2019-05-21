#include <stdio.h>

// 함수 유형 ㄱ
// 반환타입 X , 인자 X
// void : 없다
// 반환값과 전달인자가 없는 경우 생략 가능
// BUT, 생략하지 않고 쓰는 습관을 가질 것.

void my_add(void){ // 함수 정의(function definition)
	int number1;
	int number2;
	int result;

	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &number1, &number2);

	printf("\n- 간단한 덧셈 연산 ver1 \n");
	printf("첫 번째 입력 : %d \n", number1);
	printf("두 번째 입력 : %d \n", number2);
	
	result = number1 + number2;
	printf("%d + %d = %d \n", number1, number2, result);

}

void main(void){ // ()안에 void를 넣어주는게 원칙.
				 // main함수 : C언어로 작성하면 프로그램 실행시 자동으로 호출되는 함수
				 // 따라서 C 프로그램의 시작점(Entry Point)
	my_add(); // 함수 호출(function call)
	my_add();
	printf("연산이 종료가 되었습니다. 감사합니다. \n");
}
