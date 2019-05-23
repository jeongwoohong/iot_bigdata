#include <stdio.h>
/*<화면 출력>

입력 받을 숫자의 갯수를 입력하세요 : 3

1번째 숫자를 입력하세요 : 5
2번째 숫자를 입력하세요 : 1
3번째 숫자를 입력하세요 : 2

1~3번째 숫자의 총합은 8입니다.
*/
void main(){
	int max_number=10;C:\iot_bigdata\C_Study_basic\2_Intermediate\3_Array\1_basic

	printf("입력 받을 숫자의갯수를 입력하세요 : ");
	scanf("%d",&max_number);
	
	// 배열의 크기는 동적으로 정의할 수 가 없다.
	// 입력받은 변수 다음에 배열을 선언하는 것 부터 ASCI99 스타일이며 컴파일 에러를 발생한다.
	// 따라서 배열의 크기는 처음부터 설계된 크기로 선언하고 사용하여야 한다.
	// 이러한 한계는 포인터를 활용한 동적메모리 할당을 통해 해결할 수 있다.
	int input_number[max_number];
}
