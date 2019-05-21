#include <stdio.h>

void main(){
	int arr[5];
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	for(i = 0; i < 5; i++)
		sum = sum + arr[i];
	
	printf("배열요소에 저장된 값의 합 : %d \n", sum);

	printf("2번째 배열 값 : %d \n", arr[1]);
	printf("arr[2] : %d \n", arr[2]);
	// arr[5]는 컴퓨터에서 해당 주소 번지에 남겨져 있는 쓰레기
	// 값을 참조하게 된다.
	// 컴파일러나 해당 주소번지를 사용중이거나 보호중이라면
	// 수행중 런타임 에러를 발생할 수 있다.
	printf("arr[5] : %d \n", arr[5]);

	printf("arr[2]의 새로운 값을 입력하세요 : ");
	// 배열의 값도 변경이 가능합니다. 그저 변수를 늘여놓은 것에 불과하기 때문입니다.
	scanf("%d", &arr[2]);
	printf("arr[2] : %d \n", arr[2]);

	printf("arr[5]의 새로운 값을 입력하세요 : ");
	// 현재 컴파일러 버전에서는 아래 코드도 무리없이 실행한다.
	// 하지만 일반적 상황에서는 30라인에서 컴파일오류가 일어나게 된다.
	// 현재 컴파일러는 진행되고 수행중 오류를 발생할 수 있기 때문에
	// 개발자의 각별한 주의가 필요하다.
	scanf("%d", &arr[5]);
	printf("arr[5] : %d", arr[5]);

	scanf("%d", &arr[4]);
	printf("arr[4] : %d \n", arr[4]);

	for(int i = 0; i< 10000; i++)
		printf("%d \n", i);
}
