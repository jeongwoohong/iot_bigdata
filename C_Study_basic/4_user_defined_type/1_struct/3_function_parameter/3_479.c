#include <stdio.h>
#pragma warning (disable:4996)

typedef struct person {
	char name[20];
	char phonenum[20];
	int age;
}person;

void showpersoninfo(person man) {
	printf("name : %s \n", man.name);
	printf("phone : %s \n", man.phonenum);
	printf("age : %s \n", man.age);
}

//�Լ��� �⺻������ �Ѱ��� ���� ������ �� �ִ�.
//������ �Ʒ��� ���� ����ü�� ����Ѵٸ� ����ü�� ����� Ȱ���Ͽ�
//�������� 2�� �̻��� ���� ���Ͽ� ������ �����ϴ�.
person readpersoninfo() {
	person man;
	printf("name ?"); scanf("%s", man.name);
	printf("phone ?"); scanf("%s", man.phonenum);
	printf("age ?"); scanf("%s", man.age);
	return man;
}
void main() {
	// ����ü�� ���ؼ��� ���� struct ���� ���Ͽ� C���� �����ϴ� ���
	// �⺻���� ���� ���� ������ �����ϰ��ִ�.
	person man = readpersoninfo();
	showpersoninfo(man);
}