#include <stdio.h>

void main(){
	int input_num;
	int repetition = 1;

	printf("���� ������ �ϳ� �Է��ϼ���: ");
	scanf("%d", &input_num);

	while(repetition <= input_num)
	{
		printf("%d ", 3*repetition);
		repetition++;
	}
}
