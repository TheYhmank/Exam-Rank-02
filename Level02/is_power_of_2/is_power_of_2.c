int	    is_power_of_2(unsigned int n)
{
	int num = 2;
	int power = 0;

	if (n == 1)
		return (1);
	while (n >= power)
	{
		if (num * power == n)
			return (1);		
		power++;
	}
	return (0);
}

