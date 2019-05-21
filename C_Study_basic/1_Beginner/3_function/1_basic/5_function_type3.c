#include <stdio.h>

// 함수 유형 ㄷ
// 반환타입 O , 인자 X
// 장점 : 호출 하는 쪽에서는 입력에 대하여 신경쓰지 않아도 된다.
// 		  결과만 받아서 처리 할 수 있다.
// 단점 : 함수에서 입력을 처리해야 하는 부담이 발생

int my_add(void){ 
	int number1;
	int number2;
	int operation_result;

	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &number1, &number2);

	printf("\n- 간단한 덧셈 연산 ver1 \n");
	printf("첫 번째 입력 : %d \n", number1);
	printf("두 번째 입력 : %d \n", number2);
	
	operation_result = number1 + number2;
	printf("%d + %d = ", number1, number2);

	// return number1 + number2; <= 표현식(expression)을 주고 평가한 값을 리턴하는 경우
	return operation_result; // 변수를 리턴하는 경우

}

void main(void){ 
	int result;
	result = my_add();
	// my_add() = result; 논리적으로 성립되지 않는 잘못된 사용의 예
	printf("%d \n", result);
}
