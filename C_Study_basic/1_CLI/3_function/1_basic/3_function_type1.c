#include <stdio.h>
// �Լ� ���� 1
// ��ȯŸ��X, ����X (��ȯŸ�� ���� ���� ���� ���̽�)
// void�� �ǹ̴� ����(nothing), �������� �ʰڴ�.
// �׸��� ���ڰ� ���� ��쿡�� void�� ������ �� �ִ�.
//void my_add(){
// �Ʒ��� ���� �Լ��� ��ȯ Ÿ���� �����ϸ� �Ϲ������δ� ������ ������ �߻��Ѵ� (Ư�� �Ӻ���� �����Ϸ�)
// �� ���� visual studio c �����Ϸ������� �̸� ����ϰ� �ִ�.
// ���� ���� ������ ���Ͽ� ����� ���� ���� ����!
//my_add(void){
void my_add(void){// �Լ� ����(Function Definition)
	int result;
	int number1;
	int number2;
	
	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d %d",&number1, &number2);

	printf("\n- ������ ���� ���� ver1\n");
	printf("ù ��° �Է�: %d\n", number1);
	printf("�� ��° �Է�: %d\n", number2);

	result = number1 + number2;
	printf("%d + %d = %d\n",number1, number2, result);
}
void main(){ // main�Լ��� C���� �ۼ��ϸ� ���α׷� ����� �ڵ����� ȣ��Ǵ� �Լ�
			 // ���� C ���α׷��� ������(Entry Point)�� �ȴ�.
	printf("--���� ���α׷� ����-- \n");

	my_add();// �Լ� ȣ��(Function Call)
	
	printf("--���� ���α׷� ����--");
}

