int KeyPad(int pin)
{
	int res = -1;
	int a = analogRead(pin);
	if (a>950 && a < 970)
	{
		res = 1;
	}
	else if (a> 500 && a<520)
	{
		res = 2;
	}
	else if (a>870 && a <890)
	{
		res = 3;
	}
	else if (a > 670 && a < 690)
	{
		res = 4;
	}
	else if ( a>760 && a < 780)
	{
		res = 5;
	}
	return res;
}

