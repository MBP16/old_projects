#include <stdio.h>
#include <math.h>

int main(void)
{
	int x1, y1;
	int x2, y2;

	int diff_x, diff_y;
	double ans;

	printf("첫 번째 점의 좌표 입력: ");
	scanf("%d, %d", &x1, &y1);

	printf("두 번째 점의 좌표 입력: ");
	scanf("%d, %d", &x2, &y2);

	diff_x=x1-x2;
	diff_y=y1-y2;

	ans=sqrt(diff_x*diff_x + diff_y*diff_y);
	printf("두 점 사이의 거리: %f \n", ans);

	return 0;
}