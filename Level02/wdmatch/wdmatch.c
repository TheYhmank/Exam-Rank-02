#include <unistd.h>

int main(int argc, char const *argv[])
{
	int i;
	int j;

	if (argc == 3)
	{
		i = 0;
		j = 0;

		while (argv[2][j])
		{
			if (argv[2][j] == argv[1][i])
				i++;
			j++;
		}
		if (argv[1][i] == 0)
			write(1, argv[1], 1);
	}
	write(1, "\n", 1);
	return 0;
}
