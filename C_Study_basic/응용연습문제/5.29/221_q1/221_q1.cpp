#include <stdio.h>
#pragma warning (disable:4996)
int max(int, int, int);
int min(int, int, int);
void main() {
	int num1, num2, num3;

	printf("3���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("3���� �� �߿��� ����ū �� :%d ", max(num1, num2, num3));
	printf("3���� �� �߿��� �������� �� :%d ", min(num1, num2, num3));

}

int max(int num1, int num2, int num3) {
	if (num1 >= num2 >= num3 && num1>=num3>=num2) {
		return num1;
	}
	else if (num2 >= num1 >= num3 && num2 >= num3 >= num1) {
		return num2;
	}
	else{
		return num3;
	}
}

int min(int num1, int num2, int num3) {
	if (num1 >= num2 >= num3 && num2>=num1>=num3) {
		return num3;
	}
	else if (num1 >= num3 >= num2 && num3 >= num1 >= num2) {
		return num2;
	}
	else {
		return num1;
	}
}
