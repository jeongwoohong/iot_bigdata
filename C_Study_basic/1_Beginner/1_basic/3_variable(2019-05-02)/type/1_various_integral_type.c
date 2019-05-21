#include <stdio.h>
/* 
  d : 부호가 있는 10진수 정수 (char, short, int 계열)
 ld : long
lld : logn long
  u : 부호 없는 10진수 정수 (unsigned int, char, short 계열)
  f : float, double
 Lf : long double
 */
 

void main(){
	int int_max = 2147483647;
	int int_max_test = 2147483648;
	signed int sint_max = 2147483647;
	unsigned int uint_max = 4294967295;
	unsigned uint_max2 = 4294967295;
	// 흔히 쓰는 'int'는 'signed int'의 줄임표현이다.
	// Cf. signed : 부호가 있다. unsigned : 부호가 없다.

	printf("int 최대값: %d\n", int_max);
	// Visual Studio 2019 컴파일러에서 int를 4byte로 처리하기 때문에
	// int 타입으로는 2,147,483,647 이상의 값을 표현할 수 없다.(카페 자료 참고)
	
	printf("int_max + 1: %d\n", int_max_test);
	printf("signed int 최대값: %d\n", sint_max);
	printf("unsigned int 최대값: %u\n", uint_max);
	printf("unsigned 최대값: %u\n", uint_max2);
}
// _가 있는 형식 이름은 Visual Studio에서만 쓰는 것이고 기타이름이 범용적으로 쓰는 것이다.
// -> '데이터 형식 범위'에서.
// 회사가서 자세하게 익혀라. 사내 전산룰도 따로 있다고 한다.
// 임베디드 개발은 자체 메모리가 PC에 비해 매우 작기 때문에 상황에 맞게 데이터 형식을
// 써줘야 한다.
