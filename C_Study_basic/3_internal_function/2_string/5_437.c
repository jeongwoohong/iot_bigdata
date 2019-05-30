#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void main(){
	char str1[30] = "1234567890";
	char str2[30];
	char str3[5];

	strncpy(str2, str1,6);
	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);

	strncpy(str3, str1, sizeof(str3));
	printf("str3 : %s\n", str3);

	strncpy(str3, str1, sizeof(str3)-1);
	str3[sizeof(str3) - 1] = 0;
	printf("str3 : %s\n", str3);
}
