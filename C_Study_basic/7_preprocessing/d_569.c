#include <stdio.h>
#define HIT_NUM 5
#pragma warning (disable:4996)

void main() {
#if HIT_NUM==8
	puts("매크로 상수 HIT_NUM은 현재 5입니다.");
#else
	puts("매크로 상수 HIT_NUM은 현재 5가 아닙니다.");
#endif
}