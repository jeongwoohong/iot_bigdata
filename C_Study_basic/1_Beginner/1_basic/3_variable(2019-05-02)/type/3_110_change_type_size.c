#include <stdio.h>

// 목적: char, short 타입이 산술 연산자시 사이즈의 변화 확인
void main(){
	char num1 = 1, num2 = 2, result1 = 0;
	short num3 = 300, num4 = 400, result2 = 0;
	char test_num1 = 100, test_num2 = 110, result3 = 0;

	result3 = test_num1 + test_num2;
	printf("test_num1(%d) + test_num2(%d) = result3(%d)\n\n", test_num1, test_num2, result3);
	// 10번 행의 마지막 %d의 값이 왜곡되는 이유 : char의 범위를 넘어서는 값이 저장되었기 때문.
	printf("test_num1(%d) + test_num2(%d) = %d\n\n", test_num1, test_num2, test_num1 + test_num2);
	// 12번 행의 마지막 %d에 들어가는 값이 왜곡되지 않는 이유 : 표현식으로 표현되어 있기 때문.

	printf("size of num1: %d, num2: %d\n", sizeof(num1), sizeof(num2));
	printf("size of num3: %d, num4: %d\n", sizeof(num3), sizeof(num4));

	// char, short 계열의 타입의 산술 연산을 표현식(expression)으로만 사용했을 경우에는
	// 해당 타입 보다 더 큰 타입의 임시 변수(temporary variable)이 내부적으로 생성된다.
	// 이 임시 변수는 프로그램에서는 보이지 않고 컴파일러가 연산을 위해 생성한다.
	// 장점 : 연산속도가 상대적으로 빠르다. 연산 결과의 값이 보존된다.
	// 단점 : 메모리 낭비가 초래된다. 가독성이 떨어진다. 디버깅하기 어렵다.
	printf("size of char add: %d \n", sizeof(num1+num2));
	printf("size of short add: %d \n", sizeof(num3+num4));
	
	// 연산 결과를 같은 타입의 변수로 저장할 경우에는 본래의 타입 사이즈를 유지한다.
	// 장점 : 메모리를 최적화 할 수 있다. 가독성이 향상된다. 디버깅이 용이하다.
	// 단점 : 연산속도가 상대적으로 느리다. (반복적으로 수행되는 경우)
	//        연산 결과의 값이 왜곡된다.
	result1 = num1 + num2;
	result2 = num3 + num4;
	printf("size of result1 & result2: %d, %d\n", sizeof(result1) ,sizeof(result2));
}

// 극단적으로 반복의 수가 많아지는 경우 차이는 쌓이고 쌓여 큰 값이 된다.
