#include <stdio.h>
#include <string.h>
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

		if (!strcmp(my_password, input_password)) {
			puts("�н����尡 ��ġ�մϴ�.");
			puts("�α��� �ϰڽ��ϴ�.");
			break;
		}
		else {
			printf("�н����尡 %dȸ ����ġ�մϴ�.",index+1);
			if (index == 2) {
				printf("%dȸ ����ġ �Ǿ����Ƿ� ������ �ӽ� ��װڽ��ϴ�.\n");
				puts("���� �߰� ������ ���Ͽ� �н����� �缳���� ���ּ���");
				break;
			}
			puts("�ٽ� �Է��ϼ���");
		}

	}
	
	
}