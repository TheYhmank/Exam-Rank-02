#include <unistd.h>

char *ft_putnbr(int num)
{
    char array[] = "0123456789";

    if (num > 9)
        ft_putnbr(num / 10);
    write(1, &array[num % 10], 1);
}

int main(int argc, char const *argv[])
{
    int i;
    if (argc == 0)
        write(1, "0", 1);
    else
        ft_putnbr(argc - 1);
    write(1, "\n", 1);
    return 0;
}
