#include <stdio.h>
// ��ü ��� : �� ���� �Է� �޾Ƽ� ���� ���� ū ���� �Ǵ��� �ִ� ���α׷�
// �Ʒ� �� ���� Function Prototype(�Լ� ����)
// �Լ� ������ �ۼ��ϴ� ���� : �Լ� ����(Function Declarartion)
// ���α׷��� ����Ǵ� ����(�Լ�) => ���ؽ�Ʈ(context) 
// ������ȯ(context switxhing) �ٸ��Լ��� �ٲ�°�, ���ؽ�Ʈ ����Ī�� ���� �Ͼ�� ���α׷� ����� ������
int AbsoCompare(int num1, int num2);		//���밪�� ū ���� ��ȯ
int GetAbsoValue(int num);					//�������� ������ ��ȯ

void main(){
	int num1, num2;
	printf("�� ���� ���� �Է� : ");
	scanf("%d %d",&num1, &num2);
	printf("%d�� %d�� ������ ū ���� : %d\n", num1, num2, AbsoCompare(num1,num2));
	//�Լ��� ���ڰ� �� ��쿡�� �� �ٲ��� �ص� ������ ����.
	//�ٸ� ������ ������ �� ���� �ִ�.(Ex: Python)
}

int AbsoCompare(int num1, int num2){
	// �Լ��� main �Լ������� ȣ�� �� �� �ִ� ���� �ƴϴ�.
	// �Լ����� �Լ��� ȣ���� �� �ִ�.
	// ���� ������ �ϱ� ���ؼ� ����, ������ �Լ��� ���� ȣ���Ͽ� ���� ����� ������� 
	// �� ������ �Ѵ�.
	if(GetAbsoValue(num1)>GetAbsoValue(num2)){
		return num1;
	}else{
		return num2;
	}
}

int GetAbsoValue(int num){
	if(num<0){
		return num * (-1);
	}else{
		return num;
	}
}

