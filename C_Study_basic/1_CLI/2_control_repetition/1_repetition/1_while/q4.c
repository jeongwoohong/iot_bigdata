#include <stdio.h>

void main(){
	int input_const=0;
	int num_1=9;
	int num_2=1;

	printf("정수를 입력하세요. : ");
	scanf("%d", &input_const);

	while(num_1 >= num_2){
		printf("%d*%d=%d\n",input_const,num_1,(input_const*num_1));
		num_1--;
	}
}
