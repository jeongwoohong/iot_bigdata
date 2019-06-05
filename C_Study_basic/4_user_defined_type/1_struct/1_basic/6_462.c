#include <stdio.h>
#pragma warning (disable:4996)

struct person {
	char name[20];
	char phoneNum[20];
	int age;
};
void main() {
	struct person arr[3] = {
		{"이승기", "010-9999-4444", 21},
		{"정지영", "010-9323-4444", 22},
		{"한지수", "010-9555-4444", 19}
	};

	int i;
	for (i = 0; i < 3; i++)
		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
}