#include <stdio.h>

void main(){
	int input_num;
	int times = 9;
	int result;

	printf("원하는 단을 입력하세요: ");
	scanf("%d", &input_num);

	while(times > 0)
	{
		result = (input_num)*(times);
		printf("%d X %d = %d\n", input_num, times, result);
		times--;
	}
}
