#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int first_nbr;
	int second_nbr;
	int res;
	if (argc == 4)
	{
		first_nbr = atoi(argv[1]);
		second_nbr = atoi(argv[3]);

		if (argv[2][0] == '*')
			res = first_nbr * second_nbr;
		if (argv[2][0] == '/')
			res = first_nbr / second_nbr;
		if (argv[2][0] == '%')
			res = first_nbr % second_nbr;
		if (argv[2][0] =='+')
			res = first_nbr + second_nbr;
		if (argv[2][0] == '-')
			res = first_nbr - second_nbr;
		printf("%d", res);
	}
	printf("\n");

}
