#include <stdio.h>
// 들여쓰기(Indentation)
// 들여쓰기는 함수, while, for, if 이하의 Statement Block을 구분하기 위하여
// C 문법과 무관하게 준수하여야 한다.
void main(){
int world = 7;
int number = 1;
while(number <= 50){ 
printf("Hello World!%d\n", number); 
number++;
} 
}

// 치명적 단점 : 가독성이 떨어진다.
