#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *res;
	int i = 0;
	int len = abs(end - start) + 1;

	res = (int *)malloc(sizeof(int) * len);
	while (len > i)
	{
		if (end > start)
		{
			res[i] = start;
			start++;
			i++;
		}
		else 
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return (res);	
}

/*
int main(int argc, char const *argv[])
{
	int *res;
	int i = 0;

	res = ft_range(atoi(argv[1]), atoi(argv[2]));

	while (i < abs(atoi(argv[2])) - atoi(argv[1]) + 1)
	{
		printf("%d", res[i++]);
		if (i < abs(atoi(argv[2])) - atoi(argv[1]) + 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	free(res);
	return 0;
}
*/