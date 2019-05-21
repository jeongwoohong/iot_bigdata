#include <stdio.h>

// while([상수/변수/표현식])
// step1) while ()안에 있는 상수.변수 또는 표현식을 평가
// step2) 평가한 결과(표현식)가 참(1)이면 변수나 상수는 0이 아닌 값이면 while 이하의 {}안 코드를 수행
//                              거짓(0)이면  {} 코드 무시
// step3) step2에서 참인경우 step1로 이동

// Cf. () : 소괄호, round bracket
//     {} : 중괄호, brace
//     [] : 대괄호, square bracket
//     => 열리는 부분(openig -) / 닫히는 부분(closing -) / - : 각 명칭

void main(){
	int world = 7;
	int number = 1;
	while(number <= 50){ // 관계연산의 결과값을 0 또는 1로 반환한다.(내부처리)
		printf("Hello World!\n"); // 명령문, 명령문 라인 => statement
		number++;
	} // {안의 코드까지 포함} => statement block
}
