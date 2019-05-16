#include <stdio.h>

void main(){
	int int_max=2147483647;
	unsigned int unsigned_int_max=4294967295;
	char char_max=127;
	unsigned char unsigned_char_max=255;
	short short_max=32767;
	unsigned short unsigned_short_max=65535;
	signed signed_max=2147483647;
	unsigned unsigned_max=4294967295;
	long long long_long_max=9223372036854775807;
	unsigned long long unsigned_long_long_max=18446744073709551615;
	short int short_int_max=32767;
	unsigned short int unsigned_short_int_max=65535;
	long int long_int_max= 2147483647;
	unsigned long int unsigned_long_int_max=4294967295;


	float f_test=1.12345678901234567890;
	long double ld_test=1.12345678901234567890;


	printf("int 최대값 : %d\n", int_max);
	printf("unsigned int 최대값 :%u\n", unsigned_int_max);
	printf("char 최대값 :%d\n",char_max);
	printf("unsigned char 최대값 :%u\n",unsigned_char_max);
	printf("short  최대값 :%d\n",short_max);
	printf("unsigned short 최대값 :%u\n",unsigned_short_max);
	printf("signed 최대값 : %d\n", signed_max);
	printf("unsigned 최대값 : %u\n", unsigned_max);
	printf("long long 최대값 : %lld\n",long_long_max );
	printf("unsigned long long 최대값 : %llu\n",unsigned_long_long_max);
	printf("short int 최대값 : %d\n",short_int_max);
	printf("unsigned short int 최대값 : %u\n",unsigned_short_int_max);
	printf("long int 최대값 : %ld\n",long_int_max);
	printf("unsigned long int 최대값 : %ld\n",unsigned_long_int_max);


	printf("float 정밀도 : %.25f\n", f_test);
	printf("long double 정밀도 : %.25lf\n", ld_test);
	



}

