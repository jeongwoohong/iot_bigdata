#include <stdio.h>

double CelToFah(double);
double FahToCel(double);

void main(){
	double Cel, Fah;
	
	printf("���� -> ȭ�� / ȭ�� -> ���� ���α׷� \n");
	
	printf("������ �Է��ϼ��� : ");
	scanf("%lf", &Cel);
	printf("ȭ�� : %f \n", CelToFah(Cel));

	printf("ȭ���� �Է��ϼ��� : ");
	scanf("%lf", &Fah);
	printf("���� : %f \n", FahToCel(Fah));
}

double CelToFah(double Cel)
{	
	return  1.8 * Cel + 32;	
}

double FahToCel(double Fah)
{
	return (Fah - 32) / 1.8;
}
