#include <stdio.h>

// an = a(n-2) + a(n-1)

void FiboSequence(int input_num);

void main(){
	int input_num;
	
	printf("몇번째 항까지 출력을 원하시나요? : ");
	scanf("%d", &input_num);

	FiboSequence(input_num);
}

void FiboSequence(int input_num)
{
	int s1 = 0; // 첫번째 항
	int s2 = 1; // 두번째 항
	int s3;
	int rep;


	if(input_num == 1)
		printf("%d ", s1);
	else
		printf("%d %d ", s1, s2);
	for(rep = 0; rep < input_num - 2; rep++)
	{
		s3 = s1 + s2;
		printf("%d ", s3);
		s1 = s2;
		s2 = s3;
	}
}
