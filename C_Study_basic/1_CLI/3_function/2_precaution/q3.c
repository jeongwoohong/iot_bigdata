#include <stdio.h>
void fibonacci(int);

void main(){
	int input_number;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &input_number);
	fibonacci(input_number);

}

void fibonacci(int input_number){
		
	int f0=0;
	int f1=1;
	int var,count;

	if(input_number==1){
		printf("% d",f0);
	}else {
		printf("%d %d",f0,f1);
	}
	for(count=0;input_number-2>count;count++){
		
		var=f0+f1;
		printf(" %d",var);
		f0=f1;
		f1=var;

	}	
}

