typedef struct __div
{
	int quotient;   // ��
	int remainder;  // ������
} div;

div IntDiv(int num1, int num2)
{
	div dval;
	dval.quotient=num1/num2;
	dval.remainder=num1%num2;
	return dval;
}