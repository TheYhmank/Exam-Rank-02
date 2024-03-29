#include <unistd.h>

int ft_atoi(char *str)
{
	int res = 0;
	if (*str == '-')
		return (-1);
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		++str;
	}
	return (res);
}

int is_prime(int num)
{
	int i = 2;

	if (num == 1 || num == 0)
		return (1);
	while (i * i <= num)
	{
		if (num % 2 == 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int add_prime(int limit)
{
	int primes = 0;
	while (limit >= 0)
	{
		if (is_prime(limit) == 0)
			primes += limit;
		limit--;
	}
	return (primes);
}

void ft_putnbr(int num)
{
	char arr[] = "0123456789";
	if (num > 9)
	{
		ft_putnbr(num / 10);
	}
	write(1, &arr[num % 10], 1);
}

int main(int argc, char *argv[])
{
	int num = ft_atoi(argv[1]);
	if (argc == 2 && num > 0)
		ft_putnbr(add_prime(num));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return 0;
}
