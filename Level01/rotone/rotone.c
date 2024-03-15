#include <unistd.h>

void rotone(char c)
{
	if (c >= 'A' && c <= 'y' || c >= 'a' && c <= 'y')
		c += 1;
	else if (c == 'Z' || c == 'z')
	{
		if (c == 'Z')
			c = 'z' - c + 'a';
		else if (c == 'z')
			c = 'Z' - c + 'A';	
	}
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			rotone(argv[1][i++]);
	}
	write(1, "\n", 1);
	return 0;
}
