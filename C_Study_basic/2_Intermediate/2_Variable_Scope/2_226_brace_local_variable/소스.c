#include <stdio.h>
#pragma warning (disable:4996)

void main() { // �Լ� ���Ǻ�
	// local varialbe ���� ����� (���� �Ǵ� ����/�ʱ�ȭ�� ���� �Ѵ�.)
	// local variable ���� ����ο��� ������ �����ϴ� ����
	// ANSI-89 Style�̴�
//	int cnt;
	int var1;
	// �Ʒ��� ���� ���� scope���� ������ �������� ����� �� ����.
	// int var1;
	
	for (int cnt = 0; cnt < 3; cnt++) {
		// �Լ� �ȿ� {} �ȿ� ����� ������ {} �ȿ����� ������ �����ϴ�.
		// local variable ���� ����� �̿ܿ� �߰����� ������ �����Ӱ�
		// �����ϴ� ���� ANSI-99 Style�̴�
		// ANSI-99 Style�� ������ �����ϴ� ���� ��õ���� �ʽ��ϴ�.
		// Why? ���������� ���� / ������ �Ǽ�����
		int num = 0;
		num++;
		printf("%d��° �ݺ�, �������� num�� %d \n", cnt+1, num);
	}

	// {} scope�� num�� ���� �� �� ���� �����̱� ������
	// �Ʒ� �ڵ�� ������ ������ �߻��մϴ�.
//	printf("���� num�� %d \n", num);
	// cnt�� for�� ���� {} scope�� �ش��Ѵ�.
//	printf("���� cnt�� %d \n", cnt);

	// �̷��� {} Scope�� {}����ϴ� ��� ��ɹ��� �����ϰ� ����˴ϴ�.
	// �Ʒ� cnt�� main �Լ��� �ֻ��� {} scope�� ������.
	// �ݸ� ���� cnt�� main �Լ� �ؿ� for�� {}�� scope�� ������.
    int cnt = 0;
	
	while (1) {
		// �� for���� num�� �ٸ� scope�̱� ������ ������ �̸�����
		// �������� �����ϴ�.
		// ���� {} scope���� ���� scope�� �ִ� ������ ���� ����
		cnt++ , num++;
		if (cnt > 3)
			break;
	}
	// ���� cnt�� ���� Scope�̰� ���� scope���� ���� scope�� ����
	// ������ ����� ��ȿ�ϴ�.
	printf("���� cnt : %d \n", cnt);
	// num�� while ������ scope�̱� ������ ���� �Ұ���
	// printf("���� num�� %d \n", num);
}