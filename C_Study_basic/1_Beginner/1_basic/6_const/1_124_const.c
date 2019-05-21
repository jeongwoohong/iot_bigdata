//#include <stdio.h> <== Stadard IO (ex: printf, scanf 를 사용할 때 쓴다.)

void main(){
	int military_serial_number=1576091060; // military_serial_number: 변수, 1576091060: 상수
	int my_birth_day=950606;
	// const : constant를 의미
	const int ci_militatry_serial_number=1576091060; // ci : const int를 의미
	const int ci_my_birth_day=950606; // ci_my_birth_day: const(라고 한다.)

	// 값이 바뀌지 않고 참조만 하고자 하는 성격의 데이터는
	// 값을 바꾸는 행위 자체가 문제를 일으킬 수 있다.
	military_serial_number=1576567890;
	my_birth_day=950606;
	my_birth_day++;

	ci_military_serial_number=1576561234;
	ci_my_birth_day=921213;
	ci_my_birth_day++;
}
