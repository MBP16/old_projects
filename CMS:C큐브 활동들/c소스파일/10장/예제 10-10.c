#include <stdio.h>

int GOTOFCT(void);

int main(void)
{
	printf("무조건 가 본다! ");

	goto SPECIAL;

	printf("과연 돌아왔을까? ");

	return 0;
}

int GOTOFCT(void)
{
SPECIAL:
	return 123;

}