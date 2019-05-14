#include <stdio.h>

// 1이상 20미만의 정수 중 2와 3의 배수가 아닌 정수를 출력

void main(){
	int num;
	printf("START! \n");

	for(num = 1; num < 20; num++){
		if(num%2==0 || num%3==0)
			// <continue;>
			// 반복문에서 continue를 만나게 되면 continue 이하의 반복문 내부의 명령문은 모두 생략한다.
			// 이후, 다시 반복문의 증감식 -> 조건식을 거친 후 반복유무를 결정
			continue;
		printf("%d \n", num);
	}
	printf("END! \n");
}
