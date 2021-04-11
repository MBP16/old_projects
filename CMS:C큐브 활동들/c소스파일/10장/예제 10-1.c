#include <stdio.h>

int main(void)
{
	int option;

	double n1, n2;

	printf("¼±ÅÃ(µ¡¼À1, »¬¼À2, °ö¼À3, ³ª´°¼À4): ");
	scanf("%d", &option);

	printf("µÎ ¼ýÀÚ ÀÔ·Â(¼ýÀÚ1, ¼ýÀÚ2): ");
	scanf("%lf, %lf", &n1, &n2);

	if(option==1)
		printf("µ¡¼À °á°ú: %f \n", n1+n2);

	if(option==2)
		printf("»¬¼À °á°ú: %f \n", n1-n2);

	if(option==3)
		printf("°ö¼À °á°ú: %f \n", n1*n2);

	if(option==4)
		printf("³ª´°¼À °á°ú: %f \n", n1/n2);

	printf("ÇÁ·Î±×·¥À» Á¾·áÇÕ´Ï´Ù. \n");

	return 0;
}