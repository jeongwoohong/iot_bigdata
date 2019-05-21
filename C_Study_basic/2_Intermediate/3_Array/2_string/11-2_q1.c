#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	
	char ipt[100];

	printf("영단어를 입력하세요 : ");
	scanf("%s", ipt);
	printf("영단어의 길이 : %d",sizeof(ipt));
}
