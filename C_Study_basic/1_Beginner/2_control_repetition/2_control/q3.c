#include <stdio.h>

void main(){
	int korean_score, english_score, math_score;
	int average;
	char grade;

	printf("����, ����, ���� ������ ������� �Է��ϼ��� : ");
	scanf("%d %d %d", &korean_score, &english_score, &math_score);
	average = (korean_score + english_score + math_score)/3;

	if(average >= 90)
		grade = 'A';
	else if(average >= 80)
		grade = 'B';
	else if(average >= 70)
		grade = 'C';
	else if(average >= 50)
		grade = 'D';
	else
		grade = 'F';

	printf("����� ������ '%c'�Դϴ�. \n", grade); 
}
