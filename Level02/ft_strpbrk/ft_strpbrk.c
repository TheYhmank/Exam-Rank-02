#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int j = 0;

	while (*s1)
	{
		j = 0;
		while (s2[j])
		{
			if (s2[j] == *s1)
				return(char *)(s1);
			j++;
		}
		++s1;
	}
	return (0);
}

/*
int main(int argc, char const *argv[])
{
	printf("ORG:%s\n", strpbrk(argv[1], argv[2]));
	printf("IMP:%s\n", ft_strpbrk(argv[1], argv[2]));
	return 0;
}
*/