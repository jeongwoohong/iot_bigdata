#include <stdio.h>
// do-while���� �ݺ�����(statement block�� �ּ��� �ѹ��� �����ϴ� �����̴�.
void main(){
	int num=0;

	do{
		printf("Hello world\n");
		num++;
//	}while(num<3); // ; �Ǽ��� ������ ����!
	}while(num<0); // �ݺ������� �ּ��� �� �� ����Ǿ����� ������ ������
				   // ����ϱ� ���� ����� �Ǿ�� �Ѵ�.

}

