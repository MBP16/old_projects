#include <stdio.h>

int main(void)
{
	double realOne=12.345678;
	double realTwo= 0.123456;

	double addResult=realOne+realTwo;
	double minResult=realOne-realTwo;

	printf("½Ç¼öÀÇ µ¡¼À°á°ú: %f \n", addResult);
	printf("½Ç¼öÀÇ »¬¼À°á°ú: %f \n", minResult);

	return 0;
}