#include <stdio.h>

void main(){
	int num=7;
	double *pnum;
	
	// ����Ʈ ������ ���� Ÿ�Կ� ������ �ּҸ� �Ҵ� ���� �� �ִ�.
	// ��Ȳ�� ���� �پ��� ������ �߻��Ѵ�.
	// ex) int != double
	*pnum = &num;

	printf("num : %d\n", num);
	printf("*pnum : %llf\n", *pnum);
}
