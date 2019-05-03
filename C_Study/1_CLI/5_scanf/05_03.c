#include <stdio.h>

void main(){
	int input_number_1;
	int input_number_2;

	printf("첫번째 수를 입력하세요 : ");
	scanf("%d", &input_number_1);

	printf("두번번째 수를 입력하세요 : ");
	scanf("%d", &input_number_2);

	printf("%d+%d=%d\n",input_number_1,input_number_2,input_number_1+input_number_2);
	printf("%d-%d=%d\n",input_number_1,input_number_2,input_number_1-input_number_2);
	printf("%d*%d=%d\n",input_number_1,input_number_2,input_number_1*input_number_2);
	printf("%d/%d=%d\n",input_number_1,input_number_2,input_number_1/input_number_2);
	printf("%d%%%d=%d\n",input_number_1,input_number_2,input_number_1%input_number_2);

}
