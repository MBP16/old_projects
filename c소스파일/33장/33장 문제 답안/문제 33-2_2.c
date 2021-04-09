#include <stdio.h>
#include <string.h>
#define STD_MODE   1 

#if STD_MODE
  #define GET_STR   gets
  #define PUT_STR   puts
#else
  #define GET_STR   gets_f
  #define PUT_STR   puts_f
#endif

char * gets_f(char* buffer);
int puts_f(const char* string);

int main(void)
{
	char str[100];
	GET_STR(str);
	PUT_STR(str);
	GET_STR(str);
	PUT_STR(str);
	return 0;
}

char * gets_f(char* buffer)
{
	char * ret = fgets(buffer, 1000, stdin);
	int stLen=strlen(buffer);
	buffer[stLen-1]='\0';  // \n 삭제 과정
	return ret;
}

int puts_f(const char* string)
{
	int ret=fputs(string, stdout);
	fputs("\n", stdout);  // \n 추가 과정
	return ret;
}