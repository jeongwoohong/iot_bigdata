#include <stdio.h>

void main(){
	int num=0;

	while(num<3){
		printf("Hi~");
		num++;
	}	
	printf("\n");

	// for(초기식; 조건식; 증감식){   초기식-> 조건식->명령문->증감식->조건식....
	// 		statement; // 명령문
	// 		statement; // 명령문
	// 	}
	for(num=0;num<3;num++){
		printf("Hi%d~", num);
	}
}

