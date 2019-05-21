#include <stdio.h>

// 구구단 중 짝수단을 출력하되, 해당 짝수까지만 출력하는 프로그램

void main(){
	int first, second; // 구구단의 첫항/두번째항 
	int result;

	for(first = 1; first < 10; first++)
	{
		if(first%2 == 1) // first가 홀수라는 의미
			continue;    // 9번의 for문으로
		printf("  <%d단> \n", first);
		for(second = 1; second < 10; second++)
		{
			if(second > first) 
				break;   // 15번 for문 탈출
			result = first * second;
			printf("%d X %d = %d \n", first, second, result);
		}
		printf("\n");
	}
}
