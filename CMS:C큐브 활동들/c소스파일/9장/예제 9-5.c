#include <stdio.h>

int main(void)
{
	int n1, n2;
	double d1, d2;

	printf("���� | ����: ");
	scanf("%d | %d", &n1, &n2);
	printf("�Է� ������ ���: %d, %d \n\n", n1, n2);

	printf("�Ǽ� / �Ǽ�: "); 
	scanf("%lf / %lf", &d1, &d2);
	printf("�Է� ������ ���: %f, %f \n\n", d1, d2);

	printf("���� +-*/ �Ǽ�: ");  
	scanf("%d +-*/ %lf", &n1, &d1);
	printf("�Է� ������ ���: %d, %f \n\n", n1, d1); 

	return 0;
}