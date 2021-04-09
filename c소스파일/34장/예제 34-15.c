#include <stdio.h>
#include <stdarg.h>
int Sum(int n, ...);

int main(void)
{
	printf("1+2=%d \n", Sum(2, 1, 2));
	printf("1+2+3=%d \n", Sum(3, 1, 2, 3));
	printf("1+2+3+4=%d \n", Sum(4, 1, 2, 3, 4));
	return 0;
}

int Sum(int n, ...)
{
	int sum=0;
	int i;
	va_list vlist;    
	
	va_start(vlist, n);   
	for(i=0; i<n; i++)
		sum+=va_arg(vlist, int);   

	va_end(vlist);  
	return sum;
}