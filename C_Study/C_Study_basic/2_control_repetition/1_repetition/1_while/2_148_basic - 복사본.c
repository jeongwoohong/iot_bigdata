#include <stdio.h>

void main(){
	int number=0;
	//while([상수,변수, 표현식]){}
	//1.while () 안에 있는 상수, 변수 또는 표현식을 평가한다
	//2.평가한 결과가 참(1)이면 while 이하의 statement block을 수행한다 거짓(0)이면 statement 에서 빠져나온다.
	//3. 2.에서 참인경우 1.로 이동한다.
	 
	//(opening )closing소괄호(round bracket)
	//{}중괄호(brace)
	//[]대괄호(square bracket)
	while(number<50){ 
		printf("Hello World!\n"); //statement block 명령문, 명령어 라인
		number++;//(++증가연산자)
	}
}
