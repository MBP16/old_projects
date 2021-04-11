#include <stdio.h>

int main(void)
{
	int age;

	do 
	{
		printf("당신의 나이는? ");
		scanf("%d", &age);
	} while(age<1);

	switch(age/10)
	{
	case 0:
		printf("유소년이로구나! \n");
		break;
	case 1:
		printf("10대군요. 겨울에 춥지도 않겠어요. \n");
		break;
	case 2:
		printf("20대군요. 여전히 좋을 때입니다. \n");
		break;
	case 3:
		printf("30대군요. 몸이 예전 같지않지요? \n");
		break;
	case 4:
		printf("40대군요. 건강 생각하셔야 합니다. \n");
		break;
	case 5:
		printf("50대군요. 인생은 50부터 아닙니까? \n");
		break;
	default:
		printf("어르신~ C 언어 공부하시려고요? \n");

	}
	
	return 0;
}