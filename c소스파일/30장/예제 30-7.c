#include <stdio.h>
#define  HIT_NUM      5

int main(void)
{

#if HIT_NUM==5
	puts("��ũ�� ��� HIT_NUM�� ���� 5�Դϴ�.");
#else 
	puts("��ũ�� ��� HIT_NUM�� ���� 5�� �ƴմϴ�.");
#endif 

	return 0;
}