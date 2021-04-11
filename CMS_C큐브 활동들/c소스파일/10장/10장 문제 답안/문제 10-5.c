#include <stdio.h>

int NumberRange(int val);

int main(void)
{
	int num;

	printf("정수 입력: ");
	scanf("%d", &num);

	switch(NumberRange(num))
	{
	case -1:
		printf("입력된 숫자는 0 미만. \n");
		break;

	case 0:
		printf("입력된 숫자는 0이상 10미만. \n");
		break;

	case 1:
		printf("입력된 숫자는 10이상 20미만. \n");
		break;

	default:
		printf("입력된 숫자는 20이상. \n");
	}

	return 0;
}

int NumberRange(int val)
{
	if(val<0)
		return -1;
	else
		return val/10;
}