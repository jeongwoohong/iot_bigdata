#include <stdio.h>
int biggest_number(int num1,int num2, int num3);
int smallest_number(int num1, int num2, int num3);

void main(){
	int num1, num2, num3;
	printf("3���� ���� �Է� : ");
	scanf("%d %d %d",&num1,&num2,&num3);
	printf("%d��%d��%d �� ���� ū ���� : %d\n",num1,num2,num3,biggest_number(num1,num2,num3));
	printf("%d��%d��%d �� ���� ���� ���� : %d\n",num1,num2,num3,smallest_number(num1,num2,num3));
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
