//#include <stdio.h> <== Standard IO(ex: printf, scanf �� ����� �� ����.)

void main(){
	int military_serial_number=1576057127; //military_serial_number: ����, 1576057127: ���
	int my_birth_day=961025;
	const int ci_military_serial_number=1576057127; //ci const int�� �ǹ�
	const int ci_my_birth_day=961025; // ci_my_birth_day: const

	// ���� �ٲ��� �ʰ� ������ �ϰ����ϴ� ������ �����ʹ�
	// ���� �ٲٴ� ���� ��ü�� ������ ����ų �� �ִ�.
	military_serial_number=1234567890;
	my_birth_day=961025;
	my_birth_day++;
	
	ci_military_serial_number=1234567891;
	ci_my_birth_day=931025;
	ci_my_birth_day++;
