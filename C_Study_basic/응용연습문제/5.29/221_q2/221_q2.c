#include <stdio.h>
#pragma warning (disable:4996)

int celtofah(int cel);
int fahtocel(int fah);
void main() {
	int cel, fah;

	printf("¼·¾¾¸¦ ÀÔ·ÂÇÏ¼¼¿ä : "); scanf("%d", &cel);
	printf("È­¾¾¸¦ ÀÔ·ÂÇÏ¼¼¿ä : "); scanf("%d", &fah);

	printf("¼·¾¾%dµµ => È­¾¾%dµµ\n", cel, celtofah(cel));
	printf("È­¾¾%dµµ => ¼·¾¾%dµµ\n", fah, fahtocel(fah));
}

int celtofah(int cel) {
	return (double)(cel * 1.8) + 32;
}
int fahtocel(int fah){
	return (double)(fah - 32) / 1.8;
}