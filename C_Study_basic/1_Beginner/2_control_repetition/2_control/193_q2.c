#include <stdio.h>

//(A,Z) = (0,9) (1,8) (2,7) (3,6) (4,5) (5,4) (6,3) (7,2) (8,1) (9,0)
// continue or break을 써서 해결할 것

void main(){
	int A, Z;

	for(A = 0; A < 10; A++)
	{
		for(Z = 0; Z < 10; Z++)
		{
			if(A + Z != 9) // 9가 아니면 싹 다 CUT
				continue;
			printf("AZ : %d%d \n", A, Z);
			printf("ZA : %d%d \n", Z, A);
			printf("AZ + ZA = 99 \n");
		}
		printf("\n");
	}
}
