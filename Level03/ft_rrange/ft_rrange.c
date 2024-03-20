#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
    int *res;
    int i = 0;
    int size = abs(end - start) + 1;

    res = (int *)malloc(sizeof(int) * size);
    if (!(res))
        return (0);    
    while (i < size)
    {
        if (start > end)
        {
            res[i] = end;
            end++;
            i++;
        }
        else
        {
            res[i] = end;
            end--;
            i++;
        }
    }
    return (res);
}

int main(void)
{
    int start = 5;
    int end = 2;
    int i = 0;

    int *res = ft_rrange(start, end);
    while (i < abs(end - start) + 1)
    {
        printf("%d", res[i++]);
        if (i < abs(end - start) + 1)
            printf(" ");
    }
    printf("\n");
    free(res);
    return 0;
}
