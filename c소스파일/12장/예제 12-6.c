#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch = 'A';

	if(islower(ch))
		printf("�ҹ����Դϴ�. \n");

	if(isupper(ch))
		printf("�빮���Դϴ�. \n");

	return 0;
}