#include <stdio.h>

void main(){
	int num=0;

	while(num<3){
		printf("Hi~");
		num++;
	}	
	printf("\n");

	// for(�ʱ��; ���ǽ�; ������){   �ʱ��-> ���ǽ�->��ɹ�->������->���ǽ�....
	// 		statement; // ��ɹ�
	// 		statement; // ��ɹ�
	// 	}
	for(num=0;num<3;num++){
		printf("Hi%d~", num);
	}
}

