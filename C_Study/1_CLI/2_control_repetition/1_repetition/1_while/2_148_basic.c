#include <stdio.h>

void main(){
	int world=7;
	int number=1;
	printf("World sector : %d",world);
	//while([���,����, ǥ����]){}
	//1.while () �ȿ� �ִ� ���, ���� �Ǵ� ǥ������ ���Ѵ�
	//2.���� ����� ��(1)�̸� while ������ statement block�� �����Ѵ� ����(0)�̸� statement ���� �������´�.
	//3. 2.���� ���ΰ�� 1.�� �̵��Ѵ�.
	 
	//(opening )closing�Ұ�ȣ(round bracket)
	//{}�߰�ȣ(brace)
	//[]���ȣ(square bracket)
	while(number<=50){ 
		printf("Hello guest!\n",number); //statement block ��ɹ�, ��ɾ� ����
		number++;//(++����������)
	}
}
