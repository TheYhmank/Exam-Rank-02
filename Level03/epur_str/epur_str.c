#include <unistd.h>

int main(int argc, char const *argv[])
{
	int i;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				i++;
			while (argv[1][i] && !(argv[1][i] == ' ' || argv[1][i] == '\t'))
				write(1, &argv[1][i++], 1);
			while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				i++;
			if (argv[1][i])
				write(1, " ", 1);

		}
		
	}
	write(1, "\n", 1);
	return 0;
}
