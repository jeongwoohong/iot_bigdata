#include <stdio.h>
#pragma warning (disable:4996)

void find_odd(int *ptr, int size);
void find_even(int *ptr, int size);

void main(){
	int ipt[10];
	int i;

	printf("총 10개의 숫자를 입력하세요\n");
	for(i=0;i<10;i++){
		printf("입력 : ");
		scanf("%d",&ipt[i]);
	}

	find_odd(ipt, sizeof(ipt) / sizeof(int));
	printf("\b\b");
	printf("\n");
	find_even(ipt, sizeof(ipt) / sizeof(int));
	printf("\b\b ");
}
void find_odd(int* ptr, int size) {

	int i;

	printf("홀수 출력 : ");
	for (i = 0; i < 10; i++) {
		if (ptr[i] % 2 == 1) {
			printf("%d, ", ptr[i]);

		}
	}
}

void find_even(int* ptr, int size){

	int i;

	printf("짝수 출력 : ");
	for (i = 0; i < 10; i++) {
		if (ptr[i] % 2 == 0) {
			printf("%d, ", ptr[i]);

			}
		}
}