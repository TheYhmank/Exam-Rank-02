#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int max(int *tab, unsigned int len)
{
    int i;
	int result = len;

    while (len > 0)
    {
        i = 0;
        while (i < len - 1)
        {
            if (tab[i] > tab[i + 1])
                ft_swap(&tab[i], &tab[i + 1]);
            i++;
        }
        len--;
    }
    return tab[result - 1];
}
