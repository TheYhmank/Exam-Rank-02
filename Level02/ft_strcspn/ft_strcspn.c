#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j = 0;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (reject[i] == s[i])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
