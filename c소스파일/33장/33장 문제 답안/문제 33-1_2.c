#include <stdio.h>

int main(void)
{
	FILE * fp=fopen("mystory.txt", "at");

	fputs("#Áñ°Ü¸Ô´Â À½½Ä: Â«»Í, ÅÁ¼öÀ° \n", fp);
	fputs("#Ãë¹Ì: Ãà±¸ \n", fp);

	fclose(fp);
	return 0;
}
