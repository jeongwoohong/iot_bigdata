#include <stdio.h>

// ������ �� ¦������ ����ϵ�, �ش� ¦�������� ����ϴ� ���α׷�

void main(){
	int first, second; // �������� ù��/�ι�°�� 
	int result;

	for(first = 1; first < 10; first++)
	{
		if(first%2 == 1) // first�� Ȧ����� �ǹ�
			continue;    // 9���� for������
		printf("  <%d��> \n", first);
		for(second = 1; second < 10; second++)
		{
			if(second > first) 
				break;   // 15�� for�� Ż��
			result = first * second;
			printf("%d X %d = %d \n", first, second, result);
		}
		printf("\n");
	}
}
