#include <stdio.h>

void main(){
	int input_number_1;
	int input_number_2;

	printf("ù��° ���� �Է��ϼ��� : ");
	scanf("%d", &input_number_1);

	printf("�ι���° ���� �Է��ϼ��� : ");
	scanf("%d", &input_number_2);

	printf("%d+%d=%d\n",input_number_1,input_number_2,input_number_1+input_number_2);
	printf("%d-%d=%d\n",input_number_1,input_number_2,input_number_1-input_number_2);
	printf("%d*%d=%d\n",input_number_1,input_number_2,input_number_1*input_number_2);
	printf("%d/%d=%d\n",input_number_1,input_number_2,input_number_1/input_number_2);
	printf("%d%%%d=%d\n",input_number_1,input_number_2,input_number_1%input_number_2);

}
