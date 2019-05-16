#include <stdio.h>

void main(){
	int const_1=1;
	int one=1;
	int sum=0;
	int num_1=0;
	double num_2;
	
	printf("몇개의 정수를 입력 하시겠습니까? : ");
	scanf("%d",&const_1);
	while(one <= const_1){
		printf("값을 적으세요 : ");
		scanf("%d",&sum);
		num_1=num_1+sum;
		one++;
	}
	num_2=num_1/const_1;
	printf("%f",num_2);
}
