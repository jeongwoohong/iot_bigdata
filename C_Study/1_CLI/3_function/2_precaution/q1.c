#include <stdio.h>
int biggest_number(int num1,int num2, int num3);
int smallest_number(int num1, int num2, int num3);

void main(){
	int num1, num2, num3;
	printf("3개의 정수 입력 : ");
	scanf("%d %d %d",&num1,&num2,&num3);
	printf("%d와%d와%d 중 가장 큰 수는 : %d\n",num1,num2,num3,biggest_number(num1,num2,num3));
	printf("%d와%d와%d 중 가장 작은 수는 : %d\n",num1,num2,num3,smallest_number(num1,num2,num3));
} 

int biggest_number(int num1, int num2, int num3){
	if(num1>num2&&num1>num3){
		return num1;
	}else if(num2>num1&&num2>num3){
		return num2;
	}else if(num3>num1&&num3>num2){
		return num3;
	}
}

int smallest_number(int num1, int num2, int num3){

	if(num1<num2&&num1<num3){
		return num1;
	}else if(num2<num1&&num2<num3){
		return num2;
	}else if(num3<num1&&num3<num2){
		return num3;
	}
}
