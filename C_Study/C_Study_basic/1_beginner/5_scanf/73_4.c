#include <stdio.h>

void main(){
	int num1, num2;
	int result;

	printf("두 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);

	result = num1%num2;
	printf("두 정수의 몫과 나머지 : %d , %d", num1/num2, result);

}
