#include <unistd.h>

void ft_putnbr(int num)
{
	char arr[] = "0123456789";

	if (num >= 10)
		ft_putnbr(num / 10);
	write(1, &arr[num % 10], 1);	
}

int ft_atoi(char *str)
{
	int res = 0;
	int sign = 1;

	while (*str == '-')
	{
		sign *= -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}

int is_prime(int num) 
{
    if (num <= 1)
        return 0; 
    int i = 2;
    while (i * i <= num) 
	{
        if (num % i == 0)
            return 0; 
        i++;
    }
    return 1; 
}

int add_prime_sum(int num) 
{
    int res = 0;
    int i = 2;
    while (i <= num) {
        if (is_prime(i))
            res += i;
        i++;
    }
    return res;
}

int main(int argc, char *argv[])
{
	int num;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		if (num > 0)
			ft_putnbr(add_prime_sum(num));
	}
	//write(1, "0", 1);
	write(1, "\n", 1);
	return 0;
}
