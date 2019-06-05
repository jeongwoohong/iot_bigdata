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
	printf("학생이름 : %s \n", sptr->name);
	printf("학생 고유 번호 : %s \n", sptr->stdnum);
	printf("학교 이름 : %s \n", sptr->school);
	printf("학생 전공 : %s \n", sptr->major);
	printf("학년 : %d \n", sptr->year);
}
int main() {
	//const int max_size=3;
	student arr[ARR_SIZE];
	//student arr[7];
	int i;

	for (i = 0; i < ARR_SIZE; i++) {
		printf("이름 : "); scanf("%s", arr[i].name);
		printf("번호 : "); scanf("%s", arr[i].stdnum);
		printf("학교 : "); scanf("%s", arr[i].school);
		printf("전공 : "); scanf("%s", arr[i].major);
		printf("학년 : "); scanf("%d", arr[i].year);
	}
	for (i = 0; i < ARR_SIZE; i++)
		showstudentinfo(&arr[i]);
	return 0;
}