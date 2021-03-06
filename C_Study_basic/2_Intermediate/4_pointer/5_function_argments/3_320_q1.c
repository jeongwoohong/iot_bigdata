#include <stdio.h>
// Call By Value
// 연산, 함수 기능의 결과를 인반적으로 return한다.
int SquareByValue(int num){
	return num*num; //연산 결과를 return 값으로 반환
}

// Call By Reference
// - 연산, 함수의 기능이 2개 이상일 때 사용할 수 있다.
// - 함수의 인자 크기가 클 경우에 메모리 효율성을 위해서 사용한다.
// 이러한 경우 리턴 값은 함수 수행이 정상적으로 수행되었는지의 의미로
// 사용할 수 있다.
void SquareByReference(int * ptr){
// int num = *ptr;
// *ptr = num*num;// 연산결과를 직접 주소번지를 통해 변경
	*ptr = *ptr * (*ptr); // *ptr * *ptr;
// step1] *ptr = 10 * (*ptr);
// step2] *ptr = 10* 10;
// step3] *ptr =100;
}

int main(void){
	int num=10;
	printf("%d \n", SquareByValue(num));
	SquareByReference(&num);
	printf("%d \n", num);
	return=0;
}
