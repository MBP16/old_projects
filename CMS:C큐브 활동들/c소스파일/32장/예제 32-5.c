#include <stdio.h>

struct {
	int x;
	int y;
} p1, p2;

enum {
	C, JAVA, COBOL
} prolang;

int main(void)
{	
	p1.x=1, p1.y=2;
	p2.x=2, p2.y=3;

	prolang=COBOL;

	printf("%d %d \n", p1.x+p2.x, p1.y+p2.y);
	printf("%d \n", prolang);
	return 0;
}