extern int num;
static int num2;
//extern int num = 10; extern ������ ������ ���Ͽ����� �ʱ�ȭ�� ����
// �ǹ������� extern�� ������� �ʵ��� �ǰ��ϰ� �ִ�.


void increment(){
	num++;
	num2++;
}
int getnum(){
	return num;
}
