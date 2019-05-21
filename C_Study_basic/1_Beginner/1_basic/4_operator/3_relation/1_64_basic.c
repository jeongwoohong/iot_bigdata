#include <stdio.h>
/*
 * 관계연산 진리표 => 반드시 밑에 있는 표기를 따라야 한다.(※순서가 바뀌면 컴파일에러가 뜨니 주의※)
 * A < B => A가 B보다 작은가?
 * A > B => A가 B보다 큰가?
 * A == B => A가 B보다 같은가?
 * A != B => A가 B보다 다른가? (같지 않은가?) !는 Not의 의미
 * A <= B => A가 B보다 작거나 같은가? (or 관계 주의)
 * A >= B => A가 B보다 크거나 같은가? (or 관계 주의)
 *
 * 참이면 '1'을 반환, 거짓이면 '0'을 반환
*/

void main(){
	int num1=10, num2=12, result;

	printf("num1: %d, num2: %d\n", num1, num2);

	result = (num1 < num2);
	printf("(num1 < num2) => 평가결과: %d\n", result);

	result = (num1 > num2);
	printf("(num1 > num2) => 평가결과: %d\n", result);
	
	result = (num1 == num2);
	printf("(num1 == num2) => 평가결과: %d\n", result);

	result = (num1 != num2);
	printf("(num1 != num2) => 평가결과: %d\n", result);

	result = (num1 <= num2);
	printf("(num1 <= num2) => 평가결과: %d\n", result);

	result = (num1 >= num2);
	printf("(num1 >= num2) => 평가결과: %d\n", result);
}
