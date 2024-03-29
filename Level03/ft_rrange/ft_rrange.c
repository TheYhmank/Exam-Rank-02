#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
    int len = abs(end - start) + 1;
    int *res;
    int i = 0;

    res = (int *)malloc(sizeof(int) * len);

    while (len > i)
    {
        if (end > start)
        {
            res[i] = end;
            end--;
            i++;
        }
        else
        {
            res[i] = end;
            end++;
            i++;
        }
    }
    return (res);
}

int main(int argc, char const *argv[])
{
	int *res;
	int i = 0;

	res = ft_rrange(atoi(argv[1]), atoi(argv[2]));

	while (i < abs(atoi(argv[2])) - atoi(argv[1]) + 1)
	{
		printf("%d", res[i++]);
		if (i < abs(atoi(argv[2])) - atoi(argv[1]) + 1)
			printf(" ");
	}
	printf("\n");
	free(res);
	return 0;
}