#include <stdio.h>
/*
  d: 부호가 있는 10진수 정수(char, short, int 계열)
 ld: long
lld: long long
  u: 부호가 없는 10진수 정수(unsigned int, unsigned short, unsigned char)
  f: float, double
 Lf: long double
 */


void main(){
		int int_max=2147483647;
		int int_max_test=2147483648;
		signed int sint_max=2147483647;	
		unsigned int unit_max=4294967295;
		unsigned unit_max2=4294967295;


		printf("int 최대값: %d\n", int_max);
		// visual studio 2019 컴파일러에서 int를 4byte로 처리하기 때문에
		// 2147483647 이상의 값을 표현할 수 없다.
		printf("int_max + 1 : %d\n", int_max_test);
		printf("signed int 최대값: %d\n", sint_max);
		printf("unsigned int 최대값:%u\n", unit_max);
		printf("unsigned 최대값:%u\n", unit_max2);

}
