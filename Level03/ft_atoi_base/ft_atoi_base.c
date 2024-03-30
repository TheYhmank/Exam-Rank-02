#include <stdio.h>

char to_lower(char c)
{
	if (c >= 'A' && c <= 'F')
	{
		c += 32;
	}
	return (c);
}

int ft_digit(char c, int base)
{
	int max_base = 0;
	if (base <= 10)
	{
		max_base = base + '0';
	}
	else
		max_base = base - 10 + 'a';
	
	if (c >= '0' && c <= '9' && c <= max_base)
	{
		return (c - '0');
	}
	else if (c >= 'a' && c <= 'f' && c <= max_base)
	{
		return (c + 10 - 'a');
	}
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
	while ((digit = ft_digit(to_lower(*str), str_base)) >= 0)
	{
		res = res * str_base;
		res = res + (digit * sign);
		++str;
	}
	return (res);
}

int main(void)
{
	printf("%d", ft_atoi_base("7F", 16));
}