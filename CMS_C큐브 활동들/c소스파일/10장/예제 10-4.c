#include <stdio.h>

int main(void)
{
	int num;
	int abs;

	printf("���� �Է�: ");
	scanf("%d", &num);

	if(num==0)
		printf("�����Դϴ�. \n");
	else
		(num>0) ? printf("����Դϴ�. \n") : printf("�����Դϴ�. \n");

	abs = (num>0) ? num : num*(-1);
	printf("�Էµ� ���� ���밪: %d \n", abs);

	return 0;
}