#include <stdio.h>

void main(){
	char input_char;

	printf("알파벳 문자를 하나 입력하세요(대/소문자 구분): ");
	scanf("%c", &input_char);

	printf("당신이 입력한 알파벳의 아스키코드상 정수값: %d", input_char);
}
