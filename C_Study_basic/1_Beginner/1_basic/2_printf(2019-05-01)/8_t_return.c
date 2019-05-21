#include <stdio.h>
// printf 함수의 프로토타입(Proto Type)
// int printf( const char *format [, argument]...);
// 리턴 값을 사용하지 않을 경우에는 무시해도 사용하는데는 문제가 없다.
void main(){
	int result = 0;

	// printf 함수의 반환값은 문자열의 길이
	result = printf("1234567 \n");
	printf("%d \n", result);
	

	result = printf("abCD \n");
	printf("%d \n", result);

	result = printf("!@#$ \n");
	printf("%d \n", result);

	result = printf("가나다라 \n"); //한글은 한자당 2바이트 차지
	printf("%d \n", result);
}
