// Declaration(����) part 1
// include ����, ��ó�� #define, ��������, �Լ� ����(Function prototype)
/
#include <stdio.h>
#pragma warning (disable:4996)
int num=0;


// Function(�Լ�) part 2
// Ư�� ����� �����ϴ� �Լ� ���Ǻ�
// �Լ��� ���(����) �� size�� ���� �������� ���Ϸ� ������ �����ϴ�.
void increment(){
	num++;
}
int getnum(){
	return num;
}
// controller part 3
// main��ü ���α׷��� ���������� ������ ���� ����
// ��Ʈ�ѷ�(controller)�� ������ �����Ѵ�.
int main(){
	printf("num : %d\n", getnum());
	increment();
	printf("num : %d\n", getnum());
	increment();
	printf("num : %d\n", getnum());
	return 0;	
}
