#include <stdio.h>
#define ADD 0
#define MIN 1

int main(){
	int num1, num2;
	printf("두 개의 정수 입력 : ");
	scanf("%d %d", &num1, &num2);

#if ADD //ADD가 '참'이면
	printf("%d + %d = %d\n",num1,num2, num1+num2);
#endif

#if MIN //ADD가 '참'이면
	printf("%d - %d = %d\n",num1,num2, num1-num2);
#endif
	return 0;
}
