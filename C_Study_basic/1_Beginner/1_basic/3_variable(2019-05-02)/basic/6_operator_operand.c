#include <stdio.h> // STanDard Input Output

void main(){
	int result = 0;
	int second_result = 0;
	int input_number1 = 8;
	int input_number2 = 2;

	printf("%d + %d = %d\n", input_number1, input_number2, input_number1 + input_number2);

	// 변수에 상수값을 할당
	// = 대입연산자 (assingment operator)
	input_number1 = 3;
	input_number2 = 4;

	// 변수에 표현식(expression)이 할당
	result = input_number1 + input_number2;
	// 코드실행순서
	// Cf. = : 대입연산자(수학에서의 개념과는 다르다.)
	// ㄱ. 우변(= 기준)의 수식(expression)을 평가 / 상수, 변수, 수식(우변에 올 수 있는 것.)
	// ㄴ. 우측항목은 왼쪽에서 오른쪽으로 순서대로 진행.
	// ㄷ. 우측항목에서 평가된 최종값이 좌측 변수에 저장된다.
	// 산술연산자 : + - * /
	// 연산자를 제외한 값(상수, 변수)를 '피연산자(operand)'라고 한다.
	
	printf("%d + %d = %d\n", input_number1, input_number2, result);

	// 변수에 변수값을 할당
	second_result = result;	
}
