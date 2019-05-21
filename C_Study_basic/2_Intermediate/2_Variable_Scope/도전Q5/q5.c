#include <stdio.h>
#pragma warning (disable:4996)

// 소수(Prime Number) 10개 출력 프로그램
// 2 3 5 7 11 13 17 19 23 29

void main() {
	int prime_number;

	printf("%d %d %d ", 2, 3, 5);
	for (prime_number = 5; prime_number < 30; prime_number++)
	{
		if (prime_number % 1 == 0 && prime_number % 2 != 0 && prime_number % 3 != 0 &&
			prime_number % 5 != 0 && prime_number % prime_number == 0)
		{
			printf("%d ", prime_number);
		}
	}
}

// int is_prime(int number)