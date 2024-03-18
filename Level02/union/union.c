#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_union(char *str1, char *str2)
{
	int i;
	int abs[128] = {0};

	i = -1;
	while (str1[++i])
	{
		if (abs[(int)str1[i]] == 0)
		{
			ft_putchar(str1[i]);
			abs[(int)str1[i]] = 1;
		}
	}
	i = -1;
	while (str2[++i])
	{
		if (abs[(int)str2[i]] == 0)
		{
			ft_putchar(str2[i]);
			abs[(int)str2[i]] = 1;
		}
	}
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return 0;
}
