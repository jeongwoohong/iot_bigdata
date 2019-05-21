#include <stdio.h.>

void main(){
	int num1=10, num2=20;
	int *ptr1=&num1;
	int *ptr2=&num2;
	int *temp;

	(*ptr1)+=10;
	(*ptr1)-=10;
	
	temp=ptr1;
	ptr1=ptr2;
	ptr2=temp;

	ptrint("%d %d \n", *ptr1, *ptr2);
}
