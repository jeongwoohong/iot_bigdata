#include <stdio.h>

void main(){
	int world=7;
	int number=1;
	printf("World sector : %d",world);
	/*
	 * while ���Ŀ� 1�� ������ ��쿡�� {}�� ������ �� �ִ�.
	while(number<=50){ 
		printf("Hello guest!\n",number++);
	*/

	// {} ������ ���� �ʴ� ���� ����.
	// �Ʒ��� ���� ������ indentation�� �ϰ� statment block����
	// �����ڰ� �����Ͽ� ���α׷��� ������ �� �� �ֱ� �����̴�.
	while(number<=50)
		printf("Hello guest!\n",number);
		number++;
	
}
