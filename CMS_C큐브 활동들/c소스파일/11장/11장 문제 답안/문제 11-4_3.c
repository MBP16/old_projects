#include <stdio.h>

int main(void)
{
	int sum=0;
	int i;

	for(i=1; i<=100; i++)
	{
		if(!(i%3) || !(i%5))
			sum+=i;
	}

	printf("3의 배수와 5의 배수의 합: %d \n", sum);

	return 0;
}
