#include <stdio.h>

void main(){
	int const_1=0;
	int num_1=1;

	printf("���� ���� �ϳ��� �Է����ּ��� : ");
	scanf("%d",&const_1);
	

	while(num_1 <= const_1){
		printf("%d\n",(num_1*3));
		num_1++;

	}
}
