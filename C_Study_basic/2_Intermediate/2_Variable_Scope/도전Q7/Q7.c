#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	int n;
	int k = 1;
	int i = 2;

	printf("양의 정수 한 개를 입력하세요 : ");
	scanf("%d", &n);

	while (1)
	{
		i = i * 2;
		if (i <= n)
			k++;
		if (i > n)
			break;	
	}
	printf("공식을 만족하는 k의 최댓값 : %d ", k);
}