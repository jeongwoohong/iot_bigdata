#include <stdio.h>
#pragma warning (disable:4996)

void find_odd(int *ptr, int size);
void find_even(int *ptr, int size);

void main(){
	int ipt[10];
	int i;

	printf("�� 10���� ���ڸ� �Է��ϼ���\n");
	for(i=0;i<10;i++){
		printf("�Է� : ");
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

	printf("Ȧ�� ��� : ");
	for (i = 0; i < 10; i++) {
		if (ptr[i] % 2 == 1) {
			printf("%d, ", ptr[i]);

		}
	}
}

void find_even(int* ptr, int size){

	int i;

	printf("¦�� ��� : ");
	for (i = 0; i < 10; i++) {
		if (ptr[i] % 2 == 0) {
			printf("%d, ", ptr[i]);

			}
		}
}