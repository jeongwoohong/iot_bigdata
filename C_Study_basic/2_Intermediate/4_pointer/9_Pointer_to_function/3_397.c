#include <stdio.h>

void SoSimpleFunc() {
	printf("I'm so simple");
}

int main() {
	int num = 20;
	void* ptr;

	ptr = &num;
	printf("%p \n", ptr);
	// �Ʒ� �ڵ�� �����Ͻ� ������ �߻��Ѵ�.
	// ponter to void Ÿ���� ���� �����޸𸮿� ���� ���ȴ�.
	//printf("num:%d\n",*(ptr))

	ptr = SoSimpleFunc;
	printf("%p \n", ptr);

	return 0;
}