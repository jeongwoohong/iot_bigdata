#include <stdio.h>
#define ARR_SIZE 3
#pragma warning (disable:4996)
typedef struct student {

	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
}student;

void showstudentinfo(student* sptr) {
	printf("�л��̸� : %s \n", sptr->name);
	printf("�л� ���� ��ȣ : %s \n", sptr->stdnum);
	printf("�б� �̸� : %s \n", sptr->school);
	printf("�л� ���� : %s \n", sptr->major);
	printf("�г� : %d \n", sptr->year);
}
int main() {
	//const int max_size=3;
	student arr[ARR_SIZE];
	//student arr[7];
	int i;

	for (i = 0; i < ARR_SIZE; i++) {
		printf("�̸� : "); scanf("%s", arr[i].name);
		printf("��ȣ : "); scanf("%s", arr[i].stdnum);
		printf("�б� : "); scanf("%s", arr[i].school);
		printf("���� : "); scanf("%s", arr[i].major);
		printf("�г� : "); scanf("%d", arr[i].year);
	}
	for (i = 0; i < ARR_SIZE; i++)
		showstudentinfo(&arr[i]);
	return 0;
}