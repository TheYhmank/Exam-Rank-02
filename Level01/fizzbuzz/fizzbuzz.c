#include <unistd.h>

void putnbr(int num)
{
	char arr[] = "0123456789";

	if (num > 9)
		putnbr(num / 10);
	write(1, &arr[num % 10], 1);
}

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 3 != 0 || i % 5 != 0)
			putnbr(i);
		i++;
		write(1, "\n", 1);
	}
	
}

how to use gdb debugger
