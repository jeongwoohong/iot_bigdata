#include <stdio.h>

void SimpleAdder(int , int );
void SimpleSubstraction(int , int );
void ShowString(char*);

int main(void) {
	char* str = "Pointer to Function";
	int num1 = 10, num2 = 20;

//	void (*fptr1)(int, int) = SimpleAdder;
	void (*fptr1)(int, int) = SimpleSubstraction;
	// �����Ͻÿ� Pointer to Fucntion���Լ� ������ ��Ī�̵� �Լ��� ������
	// ��ġ�ϴ����� ���� ���ռ� �˻�� �̷�� �����ʴ´�.
	// ���� �߸��� �Լ��� �̸�(�ּ�)�� ��Ī���� ��쿡�� ��Ÿ�ӿ�����
	// �߻��Ѵ�
	//void(*fptr1)(int, int) = ShowString;
	void(*fptr2)(char * ) = ShowString;

	fptr1(num1,num2);
	fptr2(str);
	return 0;
}
void SimpleAdder(int n1, int n2) {
	printf("%d  + %d = %d\n", n1, n2, n1 + n2);
}
void SimpleSubstraction(int n1, int n2) {
	printf("%d  + %d = %d\n", n1, n2, n1 - n2);
}
void SimpleString(char* str) {
	printf("%s\n", str);
}
