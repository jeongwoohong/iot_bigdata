#include <stdio.h>

void main(){
	int total=0;
	int input_num_1=0;
	int input_num_2=0;
	int i_1, i_2;

	printf("�ΰ��� ������ �Է��ϼ���. : ");
	scanf("%d %d", &input_num_1, &input_num_2);

		for(i_1=input_num_1,i_2=input_num_2;i_1<i_2+1;i_1++){
				total+=i_1;
	
	}
			printf("%d����%d������ ���� ��� : %d",input_num_1,input_num_2,total);
		
}

