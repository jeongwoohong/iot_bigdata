#include <stdio.h>

int NumberCompare(int num1, int num2);

void main(){
	// printf("문장", N1, N2, N3); <= N1 , N2 , N3를 먼저 평가 -> 포맷스트링과 매칭
	printf("3과 4중에는 큰 수는? %d 이다. \n", NumberCompare(3,4));
	printf("7과 2중에는 큰 수는? %d 이다. \n", NumberCompare(7,2));
}

int NumberCompare(int num1, int num2){
	// 조건에 따라서 다양한 값을 return 할 수 있다.
	if(num1 > num2){
		return num1;
	}else{
		return num2;
	}	
}
