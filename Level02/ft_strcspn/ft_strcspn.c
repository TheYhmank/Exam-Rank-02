#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (reject[j] == s[i])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

/*
int main(int argc, char const *argv[])
{
	printf("original: %zu\n", strcspn(argv[1], argv[2]));
	printf("implimed: %zu", ft_strcspn(argv[1], argv[2]));
	return 0;
}
*/