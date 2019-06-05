#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	//颇老积己
	FILE* fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);
	//颇老俺规
	fp = fopen("text.txt", "rt");

	//SEE_END test
	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));

	//SEEK_SET test
	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));
	//SEEK_CUR test
	fseek(fp, 2, SEEK_CUR);	
	putchar(fgetc(fp));

	fclose(fp);
}