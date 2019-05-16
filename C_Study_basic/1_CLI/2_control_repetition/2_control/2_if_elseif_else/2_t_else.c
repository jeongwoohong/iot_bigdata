#include <stdio.h>

void main(){
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);

	// if elseif는 위에 있는 if()가 참이면 나머지 elseif 조건을 확인하지
	// 않고 전체 if elseif 구조에서 빠져나온다.
	// if elseif의 조건은 서로 중복이 되지 않아야하며 중복이 되지 않는
	// 조건으로 if elseif로 구성하였을 때 single if로 작성하는 것보다
	// 불필요하게 조건을 점검하는 명령어 수행을 막을 수 있다.
/*	if(num < 0){
		printf("입력 값은 0보다 작다. \n");
	}else if(num > 0){
		printf("입력 값은 0보다 크다. \n");
	// else는 위에 if 또는 else if에서 다루지 않았던 모든 조건을 포함한다.
	// 즉, default(초기값)의 성격을 가지고 있다.
	}else{ 
		printf("입력 값은 0이다. \n");
	}
*/
/*	
	if(num < 0){
	}else if(num == 0){
	}else{ // num > 0
	}
*/
/*	
	if(num > 0){
	}else if(num == 0){
	}else{ // num < 0
	}
*/
	if(num < -7){
		printf("Type A\n");
	}else if(num > -5 && num < -3){
		printf("Type B\n");
	}else if(num == 0){
		printf("Type C\n");
	}else if(num > 2 && num < 10){
		printf("Type D\n");
	}else if(num > 13 && num < 1000){
		printf("Type E\n");
	}else // -7 <= num || num <= -5 || -3 <= num || num < 0 || 0 > num || num <=2 || 10 <= num || num <= 13
		  // || 1000 <= num => -7 -6 -5 -3 -2 -1 1 2 10 11 12 13 1000이상의 모든 정수 
		printf("Default Type Z\n");
}
