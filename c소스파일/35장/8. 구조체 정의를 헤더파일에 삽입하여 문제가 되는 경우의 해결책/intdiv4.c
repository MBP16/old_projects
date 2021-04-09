#include "stdiv2.h"

div IntDiv(int num1, int num2)
{
	div dval;
	dval.quotient=num1/num2;
	dval.remainder=num1%num2;
	return dval;
}