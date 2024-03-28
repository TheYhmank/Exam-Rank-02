#include <stdio.h>

char    *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char temp;

	while (str[i])
		i++;		
	while (j < --i)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j++;
	}
	return (str);
}

/*
int main(int argc, char *argv[])
{
	printf("%s\n", ft_strrev(argv[1]));
	return 0;
}
*/