#include <stdio.h>
#define  HIT_NUM      7

int main(void)
{

#if HIT_NUM==5
	puts("��ũ�� ��� HIT_NUM�� ���� 5�Դϴ�.");
#elif HIT_NUM==6
	puts("��ũ�� ��� HIT_NUM�� ���� 6�Դϴ�.");
#elif HIT_NUM==7
	puts("��ũ�� ��� HIT_NUM�� ���� 7�Դϴ�.");
#else
	puts("��ũ�� ��� HIT_NUM�� 5, 6, 7�� Ȯ���� �ƴմϴ�.");
#endif 

	return 0;
}