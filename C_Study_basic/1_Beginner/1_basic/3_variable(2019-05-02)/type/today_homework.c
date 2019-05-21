#include <stdio.h>

void main(){
	int int_max = 2147483647;
	unsigned int uint_max = 4294967295;
	char char_max = 127;
	unsigned char uc_max = 255; 
	short short_max = 32767;
	unsigned short ushort_max = 65535;
	signed signed_max = 2147483647;
	unsigned unsigned_max = 4294967295;
	long long longlong_max = 9223372036854775807;
	unsigned long long ulonglong_max = 18446744073709551615;
	short int sint_max = 32767;
	unsigned short int usint_max = 65535;
	long int longint_max = 2147483647;
	unsigned long int ulint_max = 18446744073709551615;
	long long llong_max = 9223372036854775807;
	unsigned long long ullong_max = 18446744073709551615;
	float f_test= 1.12345678901234567890;
	long double ld_test = 1.12345678901234567890;


	printf("int의 최댓값 : %d\n", int_max);
	printf("unsinged int의 최댓값 : %u\n", uint_max);
	printf("char의 최댓값 : %d\n", char_max);
	printf("unsigned char의 최댓값 : %u\n", uc_max);
	printf("short의 최댓값 : %d\n", short_max);
	printf("unsigned short의 최댓값 : %u\n", ushort_max);
	printf("singed의 최댓값 : %d\n", signed_max);
	printf("unsigned의 최댓값 : %u\n", unsigned_max);
	printf("long long의 최댓값 : %lld\n", longlong_max);
	printf("unsigned long long의 최댓값 : %llu\n", ulonglong_max);
	printf("short int의 최댓값 : %d\n", sint_max);
	printf("unsigned short int의 최댓값 : %u\n", usint_max);
	printf("long int의 최댓값 : %ld\n", longint_max);
	printf("unsigned long int의 최댓값 : %u\n", ulint_max);
	printf("long long의 최댓값 : %lld\n", llong_max);
	printf("unsigned long long의 최댓값 : %llu\n\n", ullong_max);

	printf("float 정밀도 : %.25f\n", f_test);
	// 소수점 6자리까지는 정확하게 출력된다.
	printf("long double 정밀도 : %.25Lf\n", ld_test);
	// 소수점 16자리까지는 정확하게 출력된다.
}
