#include <stdio.h>

double celtofah(double);
double fahtocel(double);

void main(){
	double cel;
	double fah;
	printf("������ ȭ���� ��ȯ �մϴ�. ������ �Է��ϼ��� : ");
	scanf("%lf",&cel);
	printf("ȭ�� : %f\n",celtofah(cel));
	printf("ȭ���� ������ ��ȯ �մϴ�. ȭ���� �Է��ϼ��� : ");
	scanf("%lf",&fah);
	printf("���� : %f\n",fahtocel(fah));
}
double celtofah(double cel){
	return cel*1.8+32;
}

double fahtocel(double fah){
	return (fah-32)/1.8;
}

