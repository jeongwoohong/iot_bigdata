#include <stdio.h>

// sizeof ������: ����� ���� �Ǵ� �������� byte��
// typedef char LG_char <= ����� ���� Ÿ��
// typedef char LG_small_num <= ����� ���� Ÿ��

void main(){
	// int, char, short <= ���� Ÿ��(Native type)
	// 
	char c_number = 9; // c_ <= �ش� ������ Ÿ���� ������ �� �ִ� ���λ��̴�.
	int i_number = 1052;
	double d_number = 3.1415;

	// ������ size ���ϱ�
	printf("=========   ������ size ���ϱ�    =========\n");
	printf("���� c_number�� ũ��: %d \n", sizeof(c_number));
	printf("���� i_number�� ũ��: %d \n", sizeof(i_number));
	printf("���� d_number�� ũ��: %d \n", sizeof(d_number));

	// ���� type�� size ���ϱ�
	printf("\n=======   ���� type�� size ���ϱ�   =======\n");
	printf("char�� ũ��: %d\n", sizeof(char));
	printf("signed char�� ũ��: %d\n", sizeof(signed char));
	printf("unsigned char�� ũ��: %d\n", sizeof(unsigned char));

	printf("int�� ũ��: %d\n", sizeof(int));
	printf("signed int�� ũ��: %d\n", sizeof(signed int));
	printf("unsigned int�� ũ��: %d\n", sizeof(unsigned int));

	printf("short�� ũ��: %d\n", sizeof(short));
	printf("signed short�� ũ��: %d\n", sizeof(signed short));
	printf("unsigned short�� ũ��: %d\n", sizeof(unsigned short));

	printf("long�� ũ��: %d\n", sizeof(long));
	printf("unsigned long�� ũ��: %d\n", sizeof(unsigned long));
	printf("long long�� ũ��: %d\n", sizeof(long long));
	printf("unsigned long long�� ũ��: %d\n", sizeof(unsigned long long));
}
