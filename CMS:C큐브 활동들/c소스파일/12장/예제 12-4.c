#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch = '0';

	if(isdigit(ch))
		printf("�����Դϴ�. \n");
	else
		printf("���ڰ� �ƴմϴ�. \n");
	

	return 0;
}