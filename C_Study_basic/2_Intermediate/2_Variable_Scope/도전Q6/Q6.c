#include <stdio.h>
#pragma warning (disable:4996)

void TimeChange(input_sec);

void main(){
	int input_sec;

	printf("초를 입력하세요 : ");
	scanf("%d", &input_sec);

	TimeChange(input_sec);
}

void TimeChange(input_sec)
{
	int h, m, s; // 각각 hour, minute, second 의미

	/*
	h = input_sec / 3600; 3600은 1시간
	m = input_sec / 60;   60은 1분
	s = input_sec % 60;
	*/

	if (input_sec >= 3600)
	{
		h = input_sec / 3600;
		m = (input_sec - 3600 * h) / 60;
		s = input_sec % 60;
	}
	else if (input_sec < 3600 && input_sec >= 60)
	{
		h = 0;
		m = input_sec / 60;
		s = input_sec % 60;
	}
	else // input_sec < 60 && input_sec > 60
	{
		h = 0;
		m = 0;
		s = input_sec % 60;
	}

	printf("당신이 입력한 초 => h : %d, m : %d, s : %d", h, m, s);
}