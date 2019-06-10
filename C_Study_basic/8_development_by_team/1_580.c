// Declaration(선언) part 1
// include 파일, 전처리 #define, 전역변수, 함수 원형(Function prototype)
/
#include <stdio.h>
#pragma warning (disable:4996)
int num=0;


// Function(함수) part 2
// 특정 기능을 수행하는 함수 정의부
// 함수의 기능(역할) 및 size에 따라 여러개의 파일로 분할이 가능하다.
void increment(){
	num++;
}
int getnum(){
	return num;
}
// controller part 3
// main전체 프로그램의 상위레벨의 실행을 결정 짓는
// 컨트롤러(controller)의 역할을 수행한다.
int main(){
	printf("num : %d\n", getnum());
	increment();
	printf("num : %d\n", getnum());
	increment();
	printf("num : %d\n", getnum());
	return 0;	
}
