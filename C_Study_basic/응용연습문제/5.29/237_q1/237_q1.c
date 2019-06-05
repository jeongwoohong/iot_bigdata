#include <stdio.h>
#pragma warning (disable:4996)

int AddToTotal(int num) {
	static int total = 0;
	total += num;
	return total;
}
int main() {
	int num, i;
	for (i = 0; i < 3; i++) {
		printf("입력%d : ", i + 1);
		scanf("%d", &num);
		printf("누적 : %d\n", AddToTotal(num));
	}
	return;
}