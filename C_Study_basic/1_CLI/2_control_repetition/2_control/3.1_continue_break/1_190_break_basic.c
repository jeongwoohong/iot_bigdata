#include <stdio.h>

void main(){
	int sum = 0;
	int number = 0;
	const unsigned char iot_true = 1;
	const int target_accumulated_number = 5000; 

	while(iot_true){
		sum += number;
		if(sum > target_accumulated_number){
			// �ݺ���(while / do~while / for)���� break�� ������ �Ǹ�
			// ���� ���ʿ� �ִ� �ݺ����� ������ ����� �ȴ�.
			break;
		}
		number++;
	}

	printf("sum : %d, ���� ������ : %d \n", sum, target_accumulated_number);
	printf("���� number : %d", number);
}
