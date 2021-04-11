#include <stdio.h>

int Add(int n1, int n2)
{
	int result = n1 + n2;
	return result;  /* return¹® case 1 */
}

int Min(int n1, int n2)
{
	return n1 - n2; /* return¹® case 2 */
}

int main(void)
{
	int addResult;

	/* ÇÔ¼ö È£Ãâ case 1 */
	addResult = Add(3, 5);
	printf("µ¡¼À °á°ú: %d \n", addResult);

	/* ÇÔ¼ö È£Ãâ case 2 */
	printf("»¬¼À °á°ú: %d \n", Min(5, 2));

	return 0;
}