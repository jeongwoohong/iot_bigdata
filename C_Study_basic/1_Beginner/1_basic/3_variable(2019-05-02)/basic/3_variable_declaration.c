#include <stdio.h>

void main(){
	// 변수를 사용하면 노가다를 안해도 됩니다. ('2_'파일과 비교 해보세요.)
	// num1, num2를 변수(variable)라고 한다. 
	// 변수는 값이 바뀔 수 있는 수를 의미한다.
	int num1 = 2;
	int num2 = 1;

	printf("첫 번째 입력: %d, 두 번째 입력: %d 에 대한 사칙연산\n", num1, num2);
    printf("%d+%d=%d\n", num1 ,num2 ,num1 + num2);
    printf("%d-%d=%d\n", num1 ,num2 ,num1 - num2);
    printf("%d*%d=%d\n", num1 ,num2 ,num1 * num2);
    printf("%d/%d=%d\n", num1 ,num2 ,num1 / num2);
	
	num1 = 4;
	num2 = 2;
	printf("첫 번째 입력: %d, 두 번째 입력: %d 에 대한 사칙연산\n", num1, num2);
    printf("%d+%d=%d\n", num1 ,num2 ,num1 + num2);
    printf("%d-%d=%d\n", num1 ,num2 ,num1 - num2);
    printf("%d*%d=%d\n", num1 ,num2 ,num1 * num2);
    printf("%d/%d=%d\n", num1 ,num2 ,num1 / num2);

	num1 = 12;
	num2 = 4;
	printf("첫 번째 입력: %d, 두 번째 입력: %d 에 대한 사칙연산\n", num1, num2);
    printf("%d+%d=%d\n", num1 ,num2 ,num1 + num2);
    printf("%d-%d=%d\n", num1 ,num2 ,num1 - num2);
    printf("%d*%d=%d\n", num1 ,num2 ,num1 * num2);
    printf("%d/%d=%d\n", num1 ,num2 ,num1 / num2);
}
