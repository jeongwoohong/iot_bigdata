#include <stdio.h>

void main(){
	int const_1=0;
	int const_2=1;
	
	printf("양의 정수를 입력 해주세요 : ");
	scanf("%d",&const_1);

	while(const_2<=const_1){
		printf("Hello World\n",const_2);
		const_2++;

	}
}
