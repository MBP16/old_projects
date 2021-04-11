#include <stdio.h>
#include <string.h>

int main(void)
{
	char myfriends[]="EFE@naver.com, ABA@hanmail.net, LEE12@hanmail.net, UCC01@gmail.com";

	char * hanmailPtr=myfriends;
	int hanmailCnt=0;

	while(1)
	{
		hanmailPtr=strstr(hanmailPtr, "hanmail.net");
		if(hanmailPtr!=NULL)
		{
			hanmailCnt++;
			hanmailPtr+=strlen("hanmail.net");
		}
		else
			break;
	}

	printf("한메일을 사용하는 친구의 수: %d \n", hanmailCnt);
	return 0;
}