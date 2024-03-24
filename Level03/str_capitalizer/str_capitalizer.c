#include <unistd.h>

void str_catitalizer(char *str)
{
    int i = 0;

    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;
    write(1, &str[i], 1);
    while (str[++i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        
        if ((str[i] >= 'a' && str[i] <= 'z')
            && (str[i - 1] == ' ' || str[i - 1] == '\t'))
            str[i] -= 32;
        write(1, &str[i], 1);
    }
        
}

int main(int argc, char *argv[])
{
    int i = 1;
    if (argc > 1)
    {
        while (argv[i])
            str_catitalizer(argv[i++]);
    }
    write(1, "\n", 1);
    return 0;
}
