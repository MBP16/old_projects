#include <stdio.h>
#define STR_LEN    100

int main(void)
{
	char str[STR_LEN];

	fgets(str, STR_LEN, stdin);
	fputs(str, stdout);
	fputs("Error Output", stderr);

	return 0;
}