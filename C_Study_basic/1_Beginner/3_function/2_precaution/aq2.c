#include <stdio.h>

int MaxValue(int num1, int num2, int num3, int num4, int num5);
int MinValue(int num1, int num2, int num3, int num4, int num5);

void main(){
	int num1, num2, num3, num4, num5;
	
	printf("다섯 개의 정수를 입력하세요: ");
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
	printf("당신이 입력한 정수 중 가장 큰 정수 : %d \n", 
					MaxValue(num1, num2, num3, num4, num5));
	printf("당신이 입력한 정수 중 가장 작은 정수 : %d \n",
					MinValue(num1, num2, num3, num4, num5));
}

// 2 . 2 . 1로 묶은후 토너먼트식으로 비교
int MaxValue(int num1, int num2, int num3, int num4, int num5)
{
	if(num1 > num2 && num3 > num4)
	{
		if(num1 > num3)
		{
			if(num1 > num5)
				return num1;
			else
				return num5;
		}
		else // num1 <= num3
		{	
			if(num3 > num5)
				return num3;
			else
				return num5;
		}
	}
	else if(num1 > num2 && num3 < num4)
	{
		if(num1 > num4)
		{
			if(num1 > num5)
				return num1;
			else
				return num5;
		}
		else // num1 <= num4
		{
			if(num4 > num5)
				return num4;
			else
				return num5;
		}	
	}
	else if(num1 < num2 && num3 > num4)
	{
		if(num2 > num3)
		{
			if(num2 > num5)
				return num2;
			else
				return num5;
		}
		else // num2 <= num3
		{
			if(num3 > num5)
				return num3;
			else
				return num5;
		}
	}
	else // num1 < num2 && num3 < num4
	{
		if(num2 > num4)
		{
			if(num2 > num5)
				return num2;
			else
				return num5;	
		}
		else // num2 <= num4
		{
			if(num4 > num5)
				return num4;
			else
				return num5;
		}
	}
}

int MinValue(int num1, int num2, int num3, int num4, int num5)
{
	if(num1 < num2 && num3 < num4) // num1 과 num3
	{
		if(num1 < num3)
		{
			if(num1 < num5)
				return num1;
			else
				return num5;
		}
		else // num3 < num1
		{	
			if(num3 < num5)
				return num3;
			else
				return num5;
		}
	}
	else if(num1 < num2 && num3 > num4) // num1 과 num4
	{
		if(num1 < num4)
		{
			if(num1 < num5)
				return num1;
			else
				return num5;
		}
		else // num4 < num1
		{
			if(num4 < num5)
				return num4;
			else
				return num5;
		}	
	}
	else if(num1 > num2 && num3 < num4) // num2 와 num3
	{
		if(num2 < num3)
		{
			if(num2 < num5)
				return num2;
			else
				return num5;
		}
		else // num3 <= num2
		{
			if(num3 < num5)
				return num3;
			else
				return num5;
		}
	}
	else  // num2 와 num4
	{
		if(num2 < num4)
		{
			if(num2 < num5)
				return num2;
			else
				return num5;	
		}
		else // num4 <= num2
		{
			if(num4 < num5)
				return num4;
			else
				return num5;
		}
	}
}

