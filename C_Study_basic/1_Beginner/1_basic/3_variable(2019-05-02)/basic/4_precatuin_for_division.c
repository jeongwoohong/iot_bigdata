#include <stdio.h>

// int의 사용 예시  int num1 = 1;
// int : 데이터타입(中 정수형 타입) / num1 : 변수명 / = 1 : 변수초기화
// => '변수선언(variable declaration)'이라 한다.
// Cf. 변수명을 지정할 때 정확하게 하는 것이 중요하다.(코드의 가독성)

void main(){
	int numerator = 2;
	int denominator = 1;

	float float_numerator = 23;
	float float_denominator = 47;
// 	int num1; <= 변수명으로서 가독성(readability)가 떨어진다.
// 	int num2;
// 	나눗셈의 결과가 정수형으로 출력된다.
	printf("%d/%d=%d\n",numerator,denominator, numerator/denominator);

	// 한 번 선언한 변수의 값을 변경할 때에는 변수명 앞에
	// 타입을 지정할 필요가 없다.(아래 코드를 보고 이해하세요.)
	// '=' 기준으로 오른쪽 값이 왼쪽으로 '할당(assignment)'된다고 한다.
	numerator = 1;
	denominator = 2;
	// %d 인 경우 visual studio C 컴파일러는 소수점 이하를 무시한다.
	printf("%d/%d=%d\n",numerator,denominator, numerator/denominator);

	// 아래 코드는 %f이지만 나눗셈 결과가 정수이기 때문에 컴파일시 아래
	// warning 메세지를 출력한다.
	// 출력은 실수로 출력되지만 정수연산을 한 결과와 동일하다.
	// warning C4477: 'printf' : 서식 문자열 '%f'에 'double' 형식의 인수가 필요하지만 variadic 인수 3의 형식이 'int'입니다.
	// printf("%d/%d=%f\n",numerator,denominator, numerator/denominator);
	
	// 정수 연산 결과를 float로 타입캐스팅 시도(float 값으로 변환을 시켰다는 의미)
	// 컴파일러에 따라 warning, compile error 또는 runtime error을 피할 수
	// 있으나 정수형 결과를 단순히 변환했으므로 손실되는 값이 존재한다.(0.000000으로 출력)
	printf("%d/%d=%f\n",numerator,denominator, (float)(numerator/denominator));

	// 분자, 분모의 값을 float로 형변환했기 때문에 연산의 결과도 float이다.
	// 따라서 손실되는 값은 없다.
	printf("%d/%d=%f\n",numerator,denominator, (float)numerator/(float)denominator);

	// 분자, 분모 모두 float형 변수를 사용했기 때문에 형변화도 필요없고
	// 손실되는 값도 없습니다.
	printf("%f/%f=%f\n",float_numerator,float_denominator, float_numerator/float_denominator);

}
// 좋은 변수명 작명예 ex) 단어_단어 , 단어_단어_단어
