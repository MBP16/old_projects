#include <stdio.h>

void ShowString(char * argv[], int strNum);

int main(void)
{
	char* strPtrAry[3]={
		"AAA",
		"BBB",
		"CCC"
	};

	char** strPtr=strPtrAry;
	ShowString(strPtr, 3);

	return 0;
}

void ShowString(char * argv[], int strNum)
{
	int i;
	for(i=0; i<strNum; i++)
		printf("%s \n", argv[i]);
}