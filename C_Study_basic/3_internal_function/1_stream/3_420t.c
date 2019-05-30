#include <stdio.h>
#pragma warning (disable:4996)

int main(){
	int ch1, ch2;
	char my_str[100];
	
	printf("문자열을 입력하세요 : ");
	scanf("%s", my_str);
	printf("%s", my_str);
	printf("출력완료");
/*
	ch1=fgetc(stdin);
	ch2=fgetc(stdin);
	ch3=fgetc(stdin);
	ch4=fgetc(stdin);
	ch5=fgetc(stdin);
	ch6=fgetc(stdin);

	fputc(ch1,stdout);
	fputc(ch2,stdout);
	fputc(ch3,stdout);
	fputc(ch4,stdout);
	fputc(ch5,stdout);
	fputc(ch6,stdout);*/
	return 0;
}
