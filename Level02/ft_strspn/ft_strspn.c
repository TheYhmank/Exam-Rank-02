#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	size_t j = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				break;
			j++;
			if (accept[i] == '\0')
				return (i - 1);
		}
		i++;
	}
	return (0);
}

/*
int main(int argc, char const *argv[])
{
	printf("ORG: %ld\n", strspn(argv[1], argv[2]));
	printf("IMP: %ld\n", ft_strspn(argv[1], argv[2]));
	return 0;
}
*/