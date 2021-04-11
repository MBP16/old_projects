#include <stdio.h>

int main(void)
{
	int num = 1;    // 첫 번째 num

	if(num == 1)
	{
		auto int num = 2;    // 두 번째 num

		num++;
		printf("if문 안에서의 num: %d \n", num);
	}
	else
	{
		num++;
		printf("else문 안에서의 num: %d \n", num);
	}

	printf("if문 밖에서의 num: %d \n", num);

	{
		int num = 100;    // 세 번째 num

		num++;
		printf("이름없는 영역에서의 num: %d \n", num);
	}
	
	return 0;
}