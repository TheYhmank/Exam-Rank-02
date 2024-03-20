#include <unistd.h>

int ft_atoi(char *str)
{
	int result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

void print_hex(int num)
{
	char str[] = "0123456789abcdef";
	if (num > 16)
		print_hex(num / 16);
	write(1, &str[num % 16], 1);
}

int main(int argc, char *argv[])
{
	int num;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		print_hex(num);
	}
	write(1, "\n", 1);
	return 0;
}
