#include <stdio.h>
int biggest_number(int, int, int, int, int);
int smallest_number(int,int, int, int, int);

void main(){
	int num1, num2, num3, num4, num5;
	printf("5���� ���� �Է� : ");
	scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
	printf("%d��%d��%d��%d��%d �� ���� ū ���� : %d\n",num1,num2,num3,num4,num5,biggest_number(num1,num2,num3,num4,num5));
	printf("%d��%d��%d��%d��%d �� ���� ���� ���� : %d\n",num1,num2,num3,num4,num5,smallest_number(num1,num2,num3,num4,num5));
} 

int biggest_number(int num1, int num2, int num3, int num4, int num5){
	if(num1>num2&&num1>num3&&num1>num4&&num1>num5){
		return num1;
	}else if(num2>num1&&num2>num3&&num2>num4&&num2>num5){
		return num2;
	}else if(num3>num1&&num3>num2&&num3>num4&&num3>num5){
		return num3;
	}else if(num4>num1&&num4>num2&&num4>num3&&num4>num5){
		return num4;
	}else if(num5>num1&&num5>num2&&num5>num3&&num5>num4){
		return num5;
	}
}

int smallest_number(int num1, int num2, int num3, int num4, int num5){

	if(num1<num2&&num1<num3&&num1<num4&&num1<num5){
		return num1;
	}else if(num2<num1&&num2<num3&&num2<num4&&num2<num5){
		return num2;
	}else if(num3<num1&&num3<num2&&num3<num4&&num3<num5){
		return num3;
	}else if(num4<num1&&num4<num2&&num4<num3&&num4<num5){
		return num4;
	}else if(num5<num1&&num5<num2&&num5<num3&&num5<num4){
		return num5;
	}
}


