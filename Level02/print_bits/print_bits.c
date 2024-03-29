#include <unistd.h>
#include <stdlib.h>

void    print_bits(unsigned char octet)
{
	int base = 8;
	unsigned char bin;

	while (--base >= 0)
	{
		bin = (octet >> base & 1) + '0';
		write(1, &bin, 1);
	}
}

int main(int argc, char const *argv[])
{
print_bits(atoi(argv[1]));
	return 0;
}
