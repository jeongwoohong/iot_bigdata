#include <stdio.h>
#pragma warning (disable:4996)

struct point {
	int xpos;
	int ypos;
};
struct person {
	char name[20];
	char phoneNumber[20];
	int age;
};

void main() {
	struct point pos = { 10,20 };
	struct person man = { "ÀÌ½Â±â", "010-1212-0001", 21 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNumber, man.age);
}