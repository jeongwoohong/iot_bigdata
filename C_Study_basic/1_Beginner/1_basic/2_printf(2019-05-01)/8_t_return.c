#include <stdio.h>
// printf �Լ��� ������Ÿ��(Proto Type)
// int printf( const char *format [, argument]...);
// ���� ���� ������� ���� ��쿡�� �����ص� ����ϴµ��� ������ ����.
void main(){
	int result = 0;

	// printf �Լ��� ��ȯ���� ���ڿ��� ����
	result = printf("1234567 \n");
	printf("%d \n", result);
	

	result = printf("abCD \n");
	printf("%d \n", result);

	result = printf("!@#$ \n");
	printf("%d \n", result);

	result = printf("�����ٶ� \n"); //�ѱ��� ���ڴ� 2����Ʈ ����
	printf("%d \n", result);
}
