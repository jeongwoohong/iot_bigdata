#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char str[7];

	// gets�� ��ȯ���� �о���� ���ڿ��� ��ȯ�Ѵ�.
	// str�� call by referennce�� ���� ��ȯ�ǹǷ� ���� ����̴�.
	//printf("%s", gets(str));
	gets(str);
	puts(str);
	
	//���� ���1
	//AA BB		<=�Է� : ���� ���ڸ� �����Ͽ� �Է��� �޴´�.
	//AA BB		<=��� 

	// ���� ���2
	// Hello World! <=�Է�
	// ��Ÿ�� ���� �߻� (str�� ������� ū ���ڿ��� �Է¹޴� ����
	//						�õ��Ͽ��� ����)
}