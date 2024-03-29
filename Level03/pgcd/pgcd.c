#include <stdio.h>
#include <stdlib.h>

int pgcd(int num1, int num2)
{
    while (num2)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return (num1);
}

int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    if (argc == 3)
    {
        num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);

        printf("%d", pgcd(num1, num2));
    }
    printf("\n");
    return 0;
}
