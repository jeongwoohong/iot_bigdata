#include <stdio.h>

double CelToFah(double);
double FahToCel(double);

void main(){
	double Cel, Fah;
	
	printf("¼·¾¾ -> È­¾¾ / È­¾¾ -> ¼·¾¾ ÇÁ·Î±×·¥ \n");
	
	printf("¼·¾¾¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
	scanf("%lf", &Cel);
	printf("È­¾¾ : %f \n", CelToFah(Cel));

	printf("È­¾¾¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
	scanf("%lf", &Fah);
	printf("¼·¾¾ : %f \n", FahToCel(Fah));
}

double CelToFah(double Cel)
{	
	return  1.8 * Cel + 32;	
}

double FahToCel(double Fah)
{
	return (Fah - 32) / 1.8;
}
