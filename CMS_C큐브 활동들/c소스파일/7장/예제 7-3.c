#include <stdio.h>

int Add(int n1, int n2)
{
	int result = n1 + n2;
	return result;  /* return�� case 1 */
}

int Min(int n1, int n2)
{
	return n1 - n2; /* return�� case 2 */
}

int main(void)
{
	int addResult;

	/* �Լ� ȣ�� case 1 */
	addResult = Add(3, 5);
	printf("���� ���: %d \n", addResult);

	/* �Լ� ȣ�� case 2 */
	printf("���� ���: %d \n", Min(5, 2));

	return 0;
}