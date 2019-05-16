#include <stdio.h>

double celtofah(double);
double fahtocel(double);

void main(){
	double cel;
	double fah;
	printf("¼·¾¾¸¦ È­¾¾·Î º¯È¯ ÇÕ´Ï´Ù. ¼·¾¾¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
	scanf("%lf",&cel);
	printf("È­¾¾ : %f\n",celtofah(cel));
	printf("È­¾¾¸¦ ¼·¾¾·Î º¯È¯ ÇÕ´Ï´Ù. È­¾¾¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
	scanf("%lf",&fah);
	printf("¼·¾¾ : %f\n",fahtocel(fah));
}
double celtofah(double cel){
	return cel*1.8+32;
}

double fahtocel(double fah){
	return (fah-32)/1.8;
}

