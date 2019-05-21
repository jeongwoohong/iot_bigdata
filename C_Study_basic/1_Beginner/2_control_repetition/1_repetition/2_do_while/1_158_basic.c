#include <stdio.h>
// do~while문은 반복영역(Statement block)을 최소한 한 번은 실행하는 구조.
void main(){
	int num = 0;

	do{
		printf("Hello world!\n");
		num++;
//	}while(num<3); // ※ ';'를 실수로 빠뜨리지 않을 것! ※
	}while(num<0); // 반복영역이 최소한 한 번 실행되었을 때 문제가 없는지
		       // 사용하기 전에 고려가 되어야 한다.
}
