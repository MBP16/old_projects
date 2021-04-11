#include <stdio.h>

int IsSum99(int n1, int n2);

int main(void)
{
	int i, j;

	for(i=1; i<10; i++)
	{
		for(j=1; j<10; j++)
		{
			if(IsSum99(i, j))
				printf("[A, B] = [%d, %d] \n", i, j);

		}
	}

	return 0;
}

int IsSum99(int n1, int n2)
{
	if((n1*10+n2)+(n2*10+n1)==99)
		return 1;
	else
		return 0;
}
