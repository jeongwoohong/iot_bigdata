#include <stdio.h>

void main(){
	int total = 0;
	int i, num;

	printf("0���� num������ ����, num��? ");
	scanf("%d", &num);

	for(i=0; i <= num; i++)
	{
		total += i;
	}
	printf("0���� %d���� ���� ���: %d", num, total);
}
