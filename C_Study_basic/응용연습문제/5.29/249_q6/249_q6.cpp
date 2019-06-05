#include <stdio.h>
#pragma warning (disable:4996)


void main() {
	int hour=3600;
	int minute=60;
	int second;

	printf("초를 입력하세요 : ");
	scanf("%d", &second);

	if (second > hour) {
		hour = second / hour;
		second = second % 3600;
		if(second%hour<minute){
			minute = (second % hour) / minute;
		}
	}
	else if (second < hour) {
		minute = second / minute;
		second = second % 60;
		hour = 0;
	}
	else if (second < minute) {
		hour = 0;
		minute = 0;
	}
	printf("[H : %d M : %d S:%d", hour, minute, second);
}
