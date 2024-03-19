#include <stdio.h>

char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int get_digit(char c, int str_base)
{
	int base_max ;

	if (str_base <= 10)
		base_max = str_base + '0';
	else
		base_max = str_base - 10 + 'a';

	if (c >= 'a' && c <= 'f' && c <= base_max)
		return (c + 10 - 'a');
	else if (c >= '0' && c <= '9' && c <= base_max)
		return (c - '0');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int sign = 1;
	int digit;

	if (*str == '-')
	{
		sign *= -1;
		++str;
	}
	while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
	{
		res = res * str_base;
		res = res + (digit * sign);
		++str;
	}
	return (res);
}

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%d", ft_atoi_base(argv[1], 16));
	return 0;
}
