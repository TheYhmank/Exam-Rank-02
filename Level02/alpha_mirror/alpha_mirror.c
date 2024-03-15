#include <unistd.h>

void alpha_mirror(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = 'Z' - (c - 'A');
	if (c >= 'a' && c <= 'z')
		c = 'z' - (c - 'a');
	write(1, &c, 1);	
}

int main(int argc, char *argv[])
{
	int i = 0;
	while (argc == 2 && argv[1][i])
		alpha_mirror(argv[1][i++]);
	write(1, "\n", 1);
	return 0;
}
