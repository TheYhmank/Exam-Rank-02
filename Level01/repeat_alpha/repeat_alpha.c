#include <unistd.h>

void repeat_alpha(char c)
{
	int position;
	if (c >= 'a' && c <= 'z')
		position = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		position = c - 'A' + 1;	
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		while (position > 0)
   	 	{
        	write(1, &c, 1);
        	position--;
    	}
	}
	else
		write(1, &c, 1);
}

int main(int ac, char** av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])
			repeat_alpha(av[1][i++]);
	}
	write(1, "\n", 1);
}