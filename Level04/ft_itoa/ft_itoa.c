#include <stdio.h>
#include <stdlib.h>

int ft_digits(int num)
{
    int counter = 0;

    if (num == 0)
    {
        return (1);
    }
    if (num < 0)
    {
        counter++;
        num *= -1;
    }
    while (num)
    {
        num /= 10;
        counter++;
    }
    return (counter);
}

char	*ft_itoa(int nbr)
{
    int length = ft_digits(nbr);
    char *res;
    int i = 0;

    res = (char *)malloc(sizeof(char) * (length + 1));
    if (!(res))
    {
        return (NULL);
    }
    res[length] = '\0';
    if (nbr < 0)
    {
        res[0] = '-';
        nbr *= -1;
    }
    while (nbr)
    {
        res[length - 1] = nbr % 10 + '0';
        nbr /= 10;
        length--;
    }
    return (res);
}
