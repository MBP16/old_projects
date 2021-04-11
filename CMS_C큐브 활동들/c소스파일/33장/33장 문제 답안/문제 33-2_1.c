#include <stdio.h>
#define STD_MODE   0 

#if STD_MODE
  #define GET_CH   getchar
  #define PUT_CH   putchar
#else
  #define GET_CH   getchar_f
  #define PUT_CH   putchar_f
#endif

int getchar_f(void);
int putchar_f(int ch);

int main(void)
{
	int ch=GET_CH();
	PUT_CH(ch);
	return 0;
}

int getchar_f(void)
{
	return fgetc(stdin);
}

int putchar_f(int ch)
{
	return fputc(ch, stdout);
}