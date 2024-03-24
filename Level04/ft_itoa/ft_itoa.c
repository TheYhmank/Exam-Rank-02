#include <stdlib.h>

int ft_length(int num)
{
    int count = 0;

    if (num == 0)
        return (1);
    if (num < 0)
    {
        count++;
        num *= -1;
    }
    while (num)
    {
        num /= 10;
        count++;
    }
    return (count);
}

char	*ft_itoa(int nbr)
{
    char* res;
    int digit_length = ft_length(nbr);
    int number = 0;

    res = (char *)molloc(sizeof(char) * (digit_length + 1));
    if (!(res))
        return (NULL);
    res[digit_length] = '\0';
    if (nbr < 0)
    {
        res[0] = '-';
        nbr *= -1;
    }
    while (nbr)
    {
        res[digit_length - 1] = nbr % 10 + '0';
        nbr /= 10;
        digit_length--;
    }
    return (res);
}
