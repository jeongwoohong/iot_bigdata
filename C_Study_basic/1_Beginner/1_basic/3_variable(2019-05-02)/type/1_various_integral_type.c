#include <stdio.h>
/* 
  d : ��ȣ�� �ִ� 10���� ���� (char, short, int �迭)
 ld : long
lld : logn long
  u : ��ȣ ���� 10���� ���� (unsigned int, char, short �迭)
  f : float, double
 Lf : long double
 */
 

void main(){
	int int_max = 2147483647;
	int int_max_test = 2147483648;
	signed int sint_max = 2147483647;
	unsigned int uint_max = 4294967295;
	unsigned uint_max2 = 4294967295;
	// ���� ���� 'int'�� 'signed int'�� ����ǥ���̴�.
	// Cf. signed : ��ȣ�� �ִ�. unsigned : ��ȣ�� ����.

	printf("int �ִ밪: %d\n", int_max);
	// Visual Studio 2019 �����Ϸ����� int�� 4byte�� ó���ϱ� ������
	// int Ÿ�����δ� 2,147,483,647 �̻��� ���� ǥ���� �� ����.(ī�� �ڷ� ����)
	
	printf("int_max + 1: %d\n", int_max_test);
	printf("signed int �ִ밪: %d\n", sint_max);
	printf("unsigned int �ִ밪: %u\n", uint_max);
	printf("unsigned �ִ밪: %u\n", uint_max2);
}
// _�� �ִ� ���� �̸��� Visual Studio������ ���� ���̰� ��Ÿ�̸��� ���������� ���� ���̴�.
// -> '������ ���� ����'����.
// ȸ�簡�� �ڼ��ϰ� ������. �系 ����굵 ���� �ִٰ� �Ѵ�.
// �Ӻ���� ������ ��ü �޸𸮰� PC�� ���� �ſ� �۱� ������ ��Ȳ�� �°� ������ ������
// ����� �Ѵ�.
