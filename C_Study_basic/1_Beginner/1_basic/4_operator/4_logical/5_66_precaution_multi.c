#include <stdio.h>

void main(){
	int num1 = 10;
	int num2 = 15;
	int num3 = 21;
	int result = 0;

	result = (num1==1 && num2==15 || num3 > 0);
	// step1] (0 && 1 || 1)
	// step2] (0 || 1)
	// step3] (1) - �����
	// ���� �� ���� ������ �������� ��� ������ �� ������ || �� ����
	// �������� ������ �� ���ɼ��� ����.(���� ���ɼ��� ���ٴ� �ǹ�)
	printf("num1 == 1 && num2==15 || num3 > 0	=> ���: %d\n", result); // ��� : 1
	
	// ��쿡 ���� ()�� �̿��� �켱������ �ű� �� �ִ�.
	result = (num1==1 && (num2==15 || num3 > 0));
	printf("num1 == 1 && num2==15 || num3 > 0	=> ���: %d\n", result); // ��� : 0
}
