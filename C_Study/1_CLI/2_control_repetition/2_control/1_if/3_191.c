#include <stdio.h>

// 1�̻� 20�̸��� ���� �� 2�� 3�� ����� �ƴ� ������ ���

void main(){
	int num;
	printf("START! \n");

	for(num = 1; num < 20; num++){
		if(num%2==0 || num%3==0)
			// <continue;>
			// �ݺ������� continue�� ������ �Ǹ� continue ������ �ݺ��� ������ ��ɹ��� ��� �����Ѵ�.
			// ����, �ٽ� �ݺ����� ������ -> ���ǽ��� ��ģ �� �ݺ������� ����
			continue;
		printf("%d \n", num);
	}
	printf("END! \n");
}
