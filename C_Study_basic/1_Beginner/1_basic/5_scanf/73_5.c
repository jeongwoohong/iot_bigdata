#include <stdio.h>
// github에 올리기 위한 수정

void main(){
	int num1, num2, num3;
	int result;

	printf("세 개의 정수를 입력하세요: ex)3 4 5(Enter)");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = (num1-num2)*(num2+num3)*(num3%num1);
	printf("(%d-%d)X(%d+%d)X(%d%%%d)=%d", num1, num2, num2, num3, num3, num1, result);
}
