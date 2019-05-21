#include <stdio.h>
#pragma warning (disable:4996)

int SimpleFuncOne(void) {
	// 함수안에 선언된 변수를 지역변수(local variable)이라고 한다.
	// local variable의 생명주기는 함수가 실행되는 동안 (함수 시작 ~ 함수 종료)
	// 서로 다른 함수에서는 이름은 같지만 완전히 다른 변수 사용이 가능하다.
	// 지역변수의 접근은 해당 함수에서만 가능하다.
	int num = 10;
	num++;
	printf("SimpleFuncOne num : %d \n", num);
	return 0;
}

int SimpleFuncTwo(void) {
	int num1 = 20;
	int num2 = 30;
	num1++ , num2--;
	printf("num1 & num2 : %d %d \n", num1, num2);
	// 아래 num 변수는 현재 함수 {}내 선언된 변수가 아니기에 컴파일 에러를 발생한다.
//	num++;
	return 0;
}

void main() {
	int num = 17;
	SimpleFuncOne();
	SimpleFuncTwo();
	// 현위치에서 SIm~Two 지역변수의 접근 범위(scope)를 벗어나있다.
//	num1++;   20번과 동일한 이유로 컴파일 에러를 일으킨다.
//	num2--;
	printf("main num : %d \n", num);
}