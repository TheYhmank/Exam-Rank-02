#include <stdio.h>

char    *ft_strrev(char *str)
{
	char temp;
	int j = 0;
	int i = 0;
	while (str[i])
		i++;
	while (j < --i)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		j++;
	}
	return (str);
}
