#include <stdio.h>

void main(){
	float my_pi=3.141592;
	
	// FLOATING(�Ǽ���) Ÿ�� (float, double, long double...) ������
	// '==' �����ڷ� ���ϴ� ���� 100% True�� �̲��� �� �� ����.
	// FLOATING Ÿ�� �����°��� ����Ǵ� ���� �ƴ϶� ������ ����Ǳ�
	// �����̴�. p 90����
	if(my_pi == 3.141592)
		printf("Correct Pi!");
	
	printf("my_pi : %f\n",my_pi);
	printf("my_pi : %.10lf\n",my_pi);
	
}
