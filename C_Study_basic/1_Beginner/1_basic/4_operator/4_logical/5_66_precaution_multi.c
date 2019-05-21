#include <stdio.h>

void main(){
	int num1 = 10;
	int num2 = 15;
	int num3 = 21;
	int result = 0;

	result = (num1==1 && num2==15 || num3 > 0);
	// step1] (0 && 1 || 1)
	// step2] (0 || 1)
	// step3] (1) - 결과값
	// 따라서 논리 연산 조건이 여러개인 경우 마지막 논리 연산이 || 일 경우는
	// 관용적인 조건이 될 가능성이 높다.(참일 가능성이 높다는 의미)
	printf("num1 == 1 && num2==15 || num3 > 0	=> 결과: %d\n", result); // 결과 : 1
	
	// 경우에 따라서 ()를 이용해 우선순위를 매길 수 있다.
	result = (num1==1 && (num2==15 || num3 > 0));
	printf("num1 == 1 && num2==15 || num3 > 0	=> 결과: %d\n", result); // 결과 : 0
}
