#include <stdio.h>

int main(void)
{
	char * str1 = "�̵����� �������Դϴ�. ���� ��ħ���� ������ �մϴ�.";
	char * str2 = "�̵����� �������Դϴ�. "   /* �����ݷ� ������ ����! */
	              "���� ��ħ���� ������ �մϴ�.";

	puts(str1);
	puts(str2);

	return 0;
}