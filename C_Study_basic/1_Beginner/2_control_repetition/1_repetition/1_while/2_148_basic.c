#include <stdio.h>

// while([���/����/ǥ����])
// step1) while ()�ȿ� �ִ� ���.���� �Ǵ� ǥ������ ��
// step2) ���� ���(ǥ����)�� ��(1)�̸� ������ ����� 0�� �ƴ� ���̸� while ������ {}�� �ڵ带 ����
//                              ����(0)�̸�  {} �ڵ� ����
// step3) step2���� ���ΰ�� step1�� �̵�

// Cf. () : �Ұ�ȣ, round bracket
//     {} : �߰�ȣ, brace
//     [] : ���ȣ, square bracket
//     => ������ �κ�(openig -) / ������ �κ�(closing -) / - : �� ��Ī

void main(){
	int world = 7;
	int number = 1;
	while(number <= 50){ // ���迬���� ������� 0 �Ǵ� 1�� ��ȯ�Ѵ�.(����ó��)
		printf("Hello World!\n"); // ��ɹ�, ��ɹ� ���� => statement
		number++;
	} // {���� �ڵ���� ����} => statement block
}
