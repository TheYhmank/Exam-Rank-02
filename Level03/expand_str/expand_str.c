#include <unistd.h>

int main(int argc, char *argv[])
{
	while (argc == 2 &&  *argv[1])
	{
		while(*argv[1] && (*argv[1] == ' ' || *argv[1] == '\t'))
			argv[1]++;
		while(*argv[1] && !(*argv[1] == ' ' || *argv[1] == '\t'))
			write(1, argv[1]++, 1);
		while(*argv[1] && (*argv[1] == ' ' || *argv[1] == '\t'))
			argv[1]++;
		if (*argv[1] != '\0')
			write(1, "   ", 3);
	}
	write(1, "\n", 1);
	return 0;
}
