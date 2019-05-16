#include <stdio.h>

void main(){
	int number;
	int result;

	printf("제곱하고 싶은 수를 입력하세요: ");
	scanf("%d", &number);

	result = number*number;
	printf("%d의 제곱 결과: %d", number, result);
}
