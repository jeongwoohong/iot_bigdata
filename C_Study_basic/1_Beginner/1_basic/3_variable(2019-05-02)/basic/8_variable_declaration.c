#include <stdio.h>

void main(){
	// 1라인에 1개의 변수 선언
	int number1 = 0;
	
	// 1라인에 2개의 변수 선어
	int number2 = 1, number3 = 3
	// 1라인에 여러개의 변수를 선언하고 싶을 경우에는 같은 타입의 변수만
	// 가능하다. 아래 코드는 타입이 달라서 Compile Error가 발생된다.
	// int number2 = 1, number3 = 3, float number4 = 4.23123;

	printf("number1 = %d\n", number1);
	printf("number2 = %d\n", number2);
	printf("number3 = %d\n", number3);
	// printf("number4 = %f\n", number4);
}

// 수 -> 정수형(Integral Type) int
//              숫자
//    
//    -> 실수형(Floating Type) float . double. long double
//     
//
//    3.141592 와 같은 수 들은 0,1로 저장하는 것이 아니라
//    서식으로 저장을 한다고 한다.
