#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	int n;
	int k = 1;
	int i = 2;

	printf("���� ���� �� ���� �Է��ϼ��� : ");
	scanf("%d", &n);

	while (1)
	{
		i = i * 2;
		if (i <= n)
			k++;
		if (i > n)
			break;	
	}
	printf("������ �����ϴ� k�� �ִ� : %d ", k);
}