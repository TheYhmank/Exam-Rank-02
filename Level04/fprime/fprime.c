#include <stdio.h>
#include <stdlib.h>

int lcm(int num)
{
    int res = 2;

    while (num % res != 0)
        res++;
    return (res);
}

int main(int argc, char const *argv[])
{
    int num = atoi(argv[1]);
    int res = 0;
    if (num == 1)
    {
        printf("1");
    }
    else if (argc == 2 && num > 1)
    {
        while (num != 1)
        {
            res = lcm(num);
            num = num/lcm(num);
            printf("%d", res);
            if (num != 1)
            {
                printf("*");
            }
        }
    }
    printf("\n");
    return 0;
}
