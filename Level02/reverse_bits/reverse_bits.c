#include <unistd.h>

unsigned char   reverse_bits(unsigned char octet)
{
	int base = 8;
	unsigned char res = 0;

	while (--base >= 0)
	{
		res = res * 2 + (octet % 2);
		octet /= 2;
	}
	return (res);
}
