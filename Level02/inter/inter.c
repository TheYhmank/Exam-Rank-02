#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int dubl_check(char *str, int index)
{
	int j = 0;

	while (j < index)
	{
		if (str[j] == str[index])
			return (1);
		j++;
	}
	return (0);
}

int main(int ac, char** av)
{
	int i;
	int j;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[2][j] == av[1][i])
				{
					if (dubl_check(av[1], i) == 0)
						ft_putchar(av[1][i]);
					break;					
				}
				j++;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}