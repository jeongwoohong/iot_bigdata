#include <stdio.h>
// printf �Լ��� ������ Ÿ��(proto type)
// int prinf(const char *format [,argument]...);
// ���� ���� ������� ���� ��쿡�� �����ص� ����ϴµ��� ������ ����.
void main(){
	int result=0;

	// printf �Լ��� ���� ���� ��µ� ��ü ����Ʈ ���� ����
	result = printf("1234567\n");
	printf("\"1234567\\n\"����Ʈ�� ��� %d\n",result);
	
	result = printf("abCD\n");
	printf("\"abCD\\n\"����Ʈ�� ��� %d\n",result);

	result = printf("#$%^@#\n");
	printf("\"#$%^@#\\n\"����Ʈ�� ��� %d\n",result);

	result = printf("�����ٶ�\n");
	printf("\"�����ٶ�\\n\"����Ʈ�� ��� %d\n",result);
}

