//#include <stdio.h> <== Stadard IO (ex: printf, scanf �� ����� �� ����.)

void main(){
	int military_serial_number=1576091060; // military_serial_number: ����, 1576091060: ���
	int my_birth_day=950606;
	// const : constant�� �ǹ�
	const int ci_militatry_serial_number=1576091060; // ci : const int�� �ǹ�
	const int ci_my_birth_day=950606; // ci_my_birth_day: const(��� �Ѵ�.)

	// ���� �ٲ��� �ʰ� ������ �ϰ��� �ϴ� ������ �����ʹ�
	// ���� �ٲٴ� ���� ��ü�� ������ ����ų �� �ִ�.
	military_serial_number=1576567890;
	my_birth_day=950606;
	my_birth_day++;

	ci_military_serial_number=1576561234;
	ci_my_birth_day=921213;
	ci_my_birth_day++;
}
