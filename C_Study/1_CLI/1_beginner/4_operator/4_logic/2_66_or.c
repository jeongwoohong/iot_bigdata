#include <stdio.h>
/* �� || ����ǥ
 * A����	B����	���
 * ����		����	����
 * ��		����	��
 * ����		��		��
 * ��		��		��
 */

void main(){
	int num1=10;
	int num2=12;
	int result;

	printf("num1:%d, num2:%d\n",num1,num2);
	
	// ���� || ����
	result = (num1 == 5 || num2==2);
	printf("(num1 == 5 || num2==2) => �򰡰��: %d\n",result);

	//���� || ��
	result = (num1 == 5 || num2==12);
	printf("(num1 == 5 || num2==12) => �򰡰��: %d\n",result);
	
	//�� || ����
	result = (num1 == 10 || num2==10);
	printf("(num1 == 10 || num2==10) => �򰡰��: %d\n",result);
	
	//�� || ��
	result = (num1 == 10 || num2==12);
	printf("(num1 == 10 || num2==12) => �򰡰��: %d\n",result);

}
