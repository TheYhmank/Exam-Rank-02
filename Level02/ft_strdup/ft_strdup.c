#include <stdlib.h>

int ft_lentgh(char *str)
{
	int i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char    *ft_strdup(char *src)
{
	int i = 0;
	char *new;

	new = (char *)malloc(sizeof(char) * ft_lentgh(src) + 1);
	if (!new)
		return (NULL);
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}