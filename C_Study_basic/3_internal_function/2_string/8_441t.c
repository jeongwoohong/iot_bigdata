#include <stdio.h>
#pragma warning (disable:4996)
// ����ڷ� ���� �н����带 �Է� �޾Ƽ� ��ġ �ϸ� �α��� �޼��� ���
// ��ġ ���� ������ ���޼����� �Բ� 3ȸ���� �н����带 �Է¹ް� ��
void main() {
	const char* my_password = "wjddn";
	char input_password[30];
	int index;
	const int max_count = 3;

	for (index = 0; index < max_count; index++) {
		//printf("��й�ȣ�� �Է��ϼ���: ");
		fputs("��й�ȣ�� �Է��ϼ���: ", stdout);
		//scanf("%s", input_password);
		gets(input_password);

	}
	
	
}