#include <stdio.h>

// int�� ��� ����  int num1 = 1;
// int : ������Ÿ��(�� ������ Ÿ��) / num1 : ������ / = 1 : �����ʱ�ȭ
// => '��������(variable declaration)'�̶� �Ѵ�.
// Cf. �������� ������ �� ��Ȯ�ϰ� �ϴ� ���� �߿��ϴ�.(�ڵ��� ������)

void main(){
	int numerator = 2;
	int denominator = 1;

	float float_numerator = 23;
	float float_denominator = 47;
// 	int num1; <= ���������μ� ������(readability)�� ��������.
// 	int num2;
// 	�������� ����� ���������� ��µȴ�.
	printf("%d/%d=%d\n",numerator,denominator, numerator/denominator);

	// �� �� ������ ������ ���� ������ ������ ������ �տ�
	// Ÿ���� ������ �ʿ䰡 ����.(�Ʒ� �ڵ带 ���� �����ϼ���.)
	// '=' �������� ������ ���� �������� '�Ҵ�(assignment)'�ȴٰ� �Ѵ�.
	numerator = 1;
	denominator = 2;
	// %d �� ��� visual studio C �����Ϸ��� �Ҽ��� ���ϸ� �����Ѵ�.
	printf("%d/%d=%d\n",numerator,denominator, numerator/denominator);

	// �Ʒ� �ڵ�� %f������ ������ ����� �����̱� ������ �����Ͻ� �Ʒ�
	// warning �޼����� ����Ѵ�.
	// ����� �Ǽ��� ��µ����� ���������� �� ����� �����ϴ�.
	// warning C4477: 'printf' : ���� ���ڿ� '%f'�� 'double' ������ �μ��� �ʿ������� variadic �μ� 3�� ������ 'int'�Դϴ�.
	// printf("%d/%d=%f\n",numerator,denominator, numerator/denominator);
	
	// ���� ���� ����� float�� Ÿ��ĳ���� �õ�(float ������ ��ȯ�� ���״ٴ� �ǹ�)
	// �����Ϸ��� ���� warning, compile error �Ǵ� runtime error�� ���� ��
	// ������ ������ ����� �ܼ��� ��ȯ�����Ƿ� �սǵǴ� ���� �����Ѵ�.(0.000000���� ���)
	printf("%d/%d=%f\n",numerator,denominator, (float)(numerator/denominator));

	// ����, �и��� ���� float�� ����ȯ�߱� ������ ������ ����� float�̴�.
	// ���� �սǵǴ� ���� ����.
	printf("%d/%d=%f\n",numerator,denominator, (float)numerator/(float)denominator);

	// ����, �и� ��� float�� ������ ����߱� ������ ����ȭ�� �ʿ����
	// �սǵǴ� ���� �����ϴ�.
	printf("%f/%f=%f\n",float_numerator,float_denominator, float_numerator/float_denominator);

}
// ���� ������ �۸� ex) �ܾ�_�ܾ� , �ܾ�_�ܾ�_�ܾ�
