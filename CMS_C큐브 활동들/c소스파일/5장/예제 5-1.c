#include <stdio.h>

int main(void)
{
	int n1 = +2147483647;
	int n2 = -2147483646;

	printf("�����÷ο� �߻� ��: %d \n", n1);
	n1 = n1+100;  // �����÷ο� �߻�
	printf("�����÷ο� �߻� ��: %d \n\n", n1);

	printf("����÷ο� �߻� ��: %d \n", n2);
	n2 = n2-100;  // ����÷ο� �߻�
	printf("����÷ο� �߻� ��: %d \n", n2);
		
	return 0;
}