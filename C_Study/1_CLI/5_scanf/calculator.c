#include <stdio.h>

void main(){
	int first_num;
	int second_num;

	printf("ù��° ���� �Է��ϼ��� : ");
	scanf("%d", &first_num);
	printf("�ι�° ���� �Է��ϼ��� : ");
	scanf("%d", &second_num);

	printf("%d + %d = %d\n",first_num, second_num, first_num + second_num);
	printf("%d - %d = %d\n",first_num, second_num, first_num - second_num);
	printf("%d * %d = %d\n",first_num, second_num, first_num * second_num);
	printf("%d / %d = %d\n",first_num, second_num, first_num / second_num);
	printf("%d %% %d = %d\n",first_num, second_num, first_num % second_num);
}
