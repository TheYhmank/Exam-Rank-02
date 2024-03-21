#include <unistd.h>

int ft_atoi(const char *str)
{
    int res = 0;
    while (*str >= '0' && *str <= '9')
    {
        res = res * 10 + (*str - '0');
        str++;
    }
    return (res);
}

void mini_putnbr(int num)
{
    char arr[] = "0123456789";

    if (num > 9)
        mini_putnbr(num / 10);
    write(1, &arr[num % 10], 1);
}

int main(int argc, char const *argv[])
{
    int i;
    int num;
    if (argc == 2)
    {
        i = 1;
        num = ft_atoi(argv[1]);
        while (i <= 9)
        {
            mini_putnbr(i++);
            write(1, " x ", 3);
            write(1, argv[1], 1);
            write(1, " = ", 3);
            mini_putnbr((i - 1) * num);
            if (i <= 9)
                write(1, "\n", 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}
