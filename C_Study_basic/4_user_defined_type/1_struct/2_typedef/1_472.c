#include <stdio.h>
#pragma warning (disable:4996)

typedef int INT;
typedef int* PTR_INT;

typedef unsigned int UINT;
typedef unsigned int* PTR_UNIT;
typedef unsigned char UCHAR;
typedef unsigned char* PTR_UCHAR;

void main() {
	INT num1 = 120;			//int num =120;
	PTR_INT pnum1 = &num1;	//int * pnum = &num1;

	UINT num2 = 190;
	PTR_UNIT pnum2 = &num2;

	UCHAR ch = 'Z';
	PTR_UCHAR pch = &ch;

	printf("%d, %u, %c \n", *pnum1, *pnum2, *pch);
}