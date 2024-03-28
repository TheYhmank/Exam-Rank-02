int         is_power_of_2(unsigned int n)
{
	int power = 2;
	int i = 0;

	if (n == 1)
		return (1);
	while (n > i)
	{
		if (power * i == n)
			return (1);
		i++;
	}
	return (0);
}
