#include <stdio.h>
#include <stdlib.h>

int lcm(int num)
{
    int i = 2;
    while (num % i != 0)
        i++;
    return (i);    
}

int main(int argc, char *argv[])
{
    int num = atoi(argv[1]);;
    int res;
    
    if (num == 1)
    {
        printf("1");
    }
    else if (argc == 2 && num != 1)
    {
        while (num != 1)
        {
            res = lcm(num);
            num = num/lcm(num);
            printf("%d", res);
            if (num != 1)
                printf("*");
        }
    }
    printf("\n");
    return 0;
}
