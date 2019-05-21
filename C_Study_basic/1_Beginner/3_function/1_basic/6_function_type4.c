#include <stdio.h>

// 함수 유형 ㄹ
// 반환타입 O , 인자 O
// 장점 : 함수의 고유한 알고리즘에 가장 집중할 수 있는 구조

int my_add(int number1, int number2){ 
	int operation_result;

	printf("\n- 간단한 덧셈 연산 ver1 \n");
	printf("첫 번째 입력 : %d \n", number1);
	printf("두 번째 입력 : %d \n", number2);
	
	operation_result = number1 + number2;
	printf("%d + %d = ", number1, number2);

	return operation_result; 

}

void main(void){
	int number1, number2, result;
	printf("두 수를 입력하세요: ");
	scanf("%d %d", &number1, &number2);

	result = my_add(number1, number2);
	printf("%d \n", result);
}
