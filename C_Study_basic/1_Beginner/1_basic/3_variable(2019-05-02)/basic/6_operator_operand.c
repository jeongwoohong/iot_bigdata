#include <stdio.h> // STanDard Input Output

void main(){
	int result = 0;
	int second_result = 0;
	int input_number1 = 8;
	int input_number2 = 2;

	printf("%d + %d = %d\n", input_number1, input_number2, input_number1 + input_number2);

	// ������ ������� �Ҵ�
	// = ���Կ����� (assingment operator)
	input_number1 = 3;
	input_number2 = 4;

	// ������ ǥ����(expression)�� �Ҵ�
	result = input_number1 + input_number2;
	// �ڵ�������
	// Cf. = : ���Կ�����(���п����� ������� �ٸ���.)
	// ��. �캯(= ����)�� ����(expression)�� �� / ���, ����, ����(�캯�� �� �� �ִ� ��.)
	// ��. �����׸��� ���ʿ��� ���������� ������� ����.
	// ��. �����׸񿡼� �򰡵� �������� ���� ������ ����ȴ�.
	// ��������� : + - * /
	// �����ڸ� ������ ��(���, ����)�� '�ǿ�����(operand)'��� �Ѵ�.
	
	printf("%d + %d = %d\n", input_number1, input_number2, result);

	// ������ �������� �Ҵ�
	second_result = result;	
}
