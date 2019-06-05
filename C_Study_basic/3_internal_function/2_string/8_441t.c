#include <stdio.h>
#pragma warning (disable:4996)
// 사용자로 부터 패스워드를 입력 받아서 일치 하면 로그인 메세지 출력
// 일치 하지 않으면 경고메세지와 함께 3회까지 패스워드를 입력받게 함
void main() {
	const char* my_password = "wjddn";
	char input_password[30];
	int index;
	const int max_count = 3;

	for (index = 0; index < max_count; index++) {
		//printf("비밀번호를 입력하세요: ");
		fputs("비밀번호를 입력하세요: ", stdout);
		//scanf("%s", input_password);
		gets(input_password);

	}
	
	
}