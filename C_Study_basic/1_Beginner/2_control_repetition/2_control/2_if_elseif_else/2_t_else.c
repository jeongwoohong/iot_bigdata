#include <stdio.h>

void main(){
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);

	// if elseif�� ���� �ִ� if()�� ���̸� ������ elseif ������ Ȯ������
	// �ʰ� ��ü if elseif �������� �������´�.
	// if elseif�� ������ ���� �ߺ��� ���� �ʾƾ��ϸ� �ߺ��� ���� �ʴ�
	// �������� if elseif�� �����Ͽ��� �� single if�� �ۼ��ϴ� �ͺ���
	// ���ʿ��ϰ� ������ �����ϴ� ��ɾ� ������ ���� �� �ִ�.
/*	if(num < 0){
		printf("�Է� ���� 0���� �۴�. \n");
	}else if(num > 0){
		printf("�Է� ���� 0���� ũ��. \n");
	// else�� ���� if �Ǵ� else if���� �ٷ��� �ʾҴ� ��� ������ �����Ѵ�.
	// ��, default(�ʱⰪ)�� ������ ������ �ִ�.
	}else{ 
		printf("�Է� ���� 0�̴�. \n");
	}
*/
/*	
	if(num < 0){
	}else if(num == 0){
	}else{ // num > 0
	}
*/
/*	
	if(num > 0){
	}else if(num == 0){
	}else{ // num < 0
	}
*/
	if(num < -7){
		printf("Type A\n");
	}else if(num > -5 && num < -3){
		printf("Type B\n");
	}else if(num == 0){
		printf("Type C\n");
	}else if(num > 2 && num < 10){
		printf("Type D\n");
	}else if(num > 13 && num < 1000){
		printf("Type E\n");
	}else // -7 <= num || num <= -5 || -3 <= num || num < 0 || 0 > num || num <=2 || 10 <= num || num <= 13
		  // || 1000 <= num => -7 -6 -5 -3 -2 -1 1 2 10 11 12 13 1000�̻��� ��� ���� 
		printf("Default Type Z\n");
}
