#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

struct point {
	int xpos;
	int ypos;
};
struct person {
	char name[20];
	char phoneNum[20];
	int age;
};

int main() {
	struct point my_pos = { 10,20 };
	struct person Sungming = {"����","010-4444-4955",19};
	struct person man1, man2;
	// �Ʒ� person�� ������ �ƴ϶� Ÿ���̱� ������ ������ �� ����.
	//strcpy(person.name, "ȫ�浿");
	strcpy(man1.name, "�ȼ���");
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;

	// struct ������ ������ ���� �ּҴ� ����� Ÿ�Կ� ����
	// �����ȴ�.
 	printf("�̸� �Է� : "); scanf("%s", man2.name);
	printf("��ȣ �Է� : "); scanf("%s", man2.phoneNum);
	printf("���� �Է� : "); scanf("%s", &(man2.age));

	printf("�̸� :%s \n",man1.name);
	printf("��ȣ :%s \n",man1.phoneNum);
	printf("���� :%d \n",man1.age);

	printf("�̸� :%s \n",man2.name);
	printf("��ȣ :%s \n",man2.phoneNum);
	printf("���� :%d \n",&(man2.age));
	return 0;
}