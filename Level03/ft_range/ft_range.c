#include <stdlib.h>

int *ft_range(int start, int end)
{
	int i = 0;
	int len = abs((end - start)) + 1;
	int *res = (int *)malloc(sizeof(int) * len);
	
	while (i < len)
	{
		if (start < end)
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

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int start = 10;
	int end = 5;
	int *res = ft_range(start, end);

	while (i < abs(end - start) + 1)
	{
		printf("%d ", res[i++]);
	}
	
	return 0;
}
