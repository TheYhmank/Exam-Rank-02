#include <unistd.h>

int ft_check(char *str, int i)
{
	int j = 0;

	while (j < i)
	{
		if (str[j] == str[i])
			return (1);
		j++;
	}
	return (0);
}

void inter(char* str1, char *str2)
{
	int i = 0;
	int j = 0;

	while (str1[i])
	{
		j = 0;
		while (str2[j])
		{
			if (str2[j] == str1[i])
			{
				if (ft_check(str1, i) == 0)
					write(1, &str1[i], 1);
				break;
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return 0;
}
