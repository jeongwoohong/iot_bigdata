#include <stdio.h>

void main(){
	int first_num;
	int second_num;

	printf("첫번째 수를 입력하세요 : ");
	scanf("%d", &first_num);
	printf("두번째 수를 입력하세요 : ");
	scanf("%d", &second_num);

	printf("%d + %d = %d\n",first_num, second_num, first_num + second_num);
	printf("%d - %d = %d\n",first_num, second_num, first_num - second_num);
	printf("%d * %d = %d\n",first_num, second_num, first_num * second_num);
	printf("%d / %d = %d\n",first_num, second_num, first_num / second_num);
	printf("%d %% %d = %d\n",first_num, second_num, first_num % second_num);
}
