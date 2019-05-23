#include <stdio.h>

void main(){
	int arr[6] = {1,2,3,4,5,6};
	int *ptr1;
	int *ptr2;
	int i, temp;
	
	ptr1=&arr[0];
	ptr2=&arr[5];
	
	for(i=0;i<3;i++){
		temp=*ptr1;
		*ptr1=*ptr2;
		*ptr2=temp;
		ptr1++;
		ptr2--;
	}
	for(i=0;i<6;i++){
		printf("%d\n",arr[i]);
	}
}
