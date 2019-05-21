#include <stdio.h>

void main(){
	int input_num;

	printf("정수를 하나 입력하세요(단, 65~90 / 97~122 사이의 값): ");
	scanf("%d", &input_num);

	printf("당신이 입력한 정수의 아스키코드상 문자값: %c", input_num);
}
