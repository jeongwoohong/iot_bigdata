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


	printf("int�� �ִ� : %d\n", int_max);
	printf("unsinged int�� �ִ� : %u\n", uint_max);
	printf("char�� �ִ� : %d\n", char_max);
	printf("unsigned char�� �ִ� : %u\n", uc_max);
	printf("short�� �ִ� : %d\n", short_max);
	printf("unsigned short�� �ִ� : %u\n", ushort_max);
	printf("singed�� �ִ� : %d\n", signed_max);
	printf("unsigned�� �ִ� : %u\n", unsigned_max);
	printf("long long�� �ִ� : %lld\n", longlong_max);
	printf("unsigned long long�� �ִ� : %llu\n", ulonglong_max);
	printf("short int�� �ִ� : %d\n", sint_max);
	printf("unsigned short int�� �ִ� : %u\n", usint_max);
	printf("long int�� �ִ� : %ld\n", longint_max);
	printf("unsigned long int�� �ִ� : %u\n", ulint_max);
	printf("long long�� �ִ� : %lld\n", llong_max);
	printf("unsigned long long�� �ִ� : %llu\n\n", ullong_max);

	printf("float ���е� : %.25f\n", f_test);
	// �Ҽ��� 6�ڸ������� ��Ȯ�ϰ� ��µȴ�.
	printf("long double ���е� : %.25Lf\n", ld_test);
	// �Ҽ��� 16�ڸ������� ��Ȯ�ϰ� ��µȴ�.
}
