#include <stdio.h>

void main(){
	int input_num;
	int repetition = 0;

	printf("���� ������ �ϳ� �Է��ϼ���: ");
	scanf("%d", &input_num);

	while(repetition < input_num)
		{
			printf("Hello Wolrd!\n");
			repetition++;
		}
}
