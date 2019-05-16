#include <stdio.h>

void main(){
	int numerator=3;
	int denominator=4;
	double result;
	int i_result;

	// R-Value��  ����/���� �� ����� �����̴�.
	// L-Value�� �Ǽ��̴�.
	// �� ��쿡 R-Value�� Implicit Type Casting�� �̷�� ����.
	// ������  �������� ������ ������ �Ҽ��� ���ϰ� ���õȴ�.
	// ���� �������� �����̶� �� ���� ������ �ս��� �������� ����ȯ�� �ʿ��ϴ�.
	//result = numerator/denominator;

	// Explicit Type casting (���� ����ȯ)
	// ����: (���̸�)[���/����]
	// Case1] �Ʒ� ���� numerator ������ ���� ����ȯ �Ǿ����� ���� �Ǽ��� �������� ������ �ǹǷ�
	// ������ ������ denominator�� ������ ����ȯ(Implicit Type Casting)�� �Ͼ��.
	//result= (double) numerator/denominator;
	
	//Case]
	result= numerator/(double)denominator;

	printf ("������ ��� : %f \n", result);
	
	// L-Value�� ���� R-Value�� �Ǽ��� ��쿡�� L-Value���� Implicit Type Casting�� 
	// �̷������ �ʴ´�. ������ Ÿ�� ��ü�� �ٲܼ� ���� �����̴�.
	// �� ���� �������� �ս�(Data loss)�� �����ؾ� �Ѵ�.
	i_result = numerator/(double)denominator;
    printf("������ ��� : %d \n", i_result);
}
