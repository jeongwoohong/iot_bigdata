#include <stdio.h>
// ��ɾ� ���̿� �ٹٲ� ���� ��� �Ǵ��� 
// �����ϴµ����� ������ ��ġ�� �ʴ´�.
//
//int AbsoCompare(int num1, int num2);	
// �Լ��� ����Ÿ��, ������ ����Ÿ��, ���ڸ� ������ ����(�� ����)�� �� ���� �͵�
// ���࿡ ������ ���� �ʴ´�.
int 		AbsoCompare(int num1,int num2);	
int GetAbsoValue(int num);	

void main(){
// ���� Ÿ��, ������ ������ ����(�� ����)�� ���࿡ ������ ��ġ�� �ʴ´�.
// �Լ��� ���� ���̿� ���鵵 ���࿡ ������ ��ġ�� �ʴ´�.
// ��, ���ڿ������� ������ �״�� ���ڿ��� ���뿡 �ݿ��ȴ�.
	int num1, num2;
	printf("�� ���� ���� �Է� : ");
	scanf("%d %d",&num1, &num2);
	printf("%d�� %d�� ������ ū ���� : %d\n", num1, num2, AbsoCompare(num1,num2));
}

int AbsoCompare(int num1, int num2){
// ���� ������ ���� ���׵� �����ڿ� ������ �ϱ� ���Ͽ� ������ �ִ� ����
// �������� ����
// ()�� �������� ��ø�Ǿ��� ���� �������� ���Ͽ� ������ �ִ� ���� ����.
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


