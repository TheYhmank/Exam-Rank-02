#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (*str)
    {
        str++;
        i++;
    }
    return (i);
}

void rev_words(char *str) 
{
    int i = 0;
    int j;

    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t')
        {
            j = i - 1;
            while (j >= 0 && (str[j] != ' ' && str[j] != '\t'))
                write(1, &str[j--], 1);
            write(1, " ", 1);
        }
        i++;
    }
    j = i - 1;
    while (j >= 0 && (str[j] != ' ' && str[j] != '\t')) {
        write(1, &str[j], 1);
        j--;
    }
}

int main(int argc, char *argv[])
{
    int i;
    int j;
    char *temp_rev;

    if (argc == 2)
    {
        i = 0;
        j = 0;
        temp_rev = (char *)malloc(sizeof(char) * ft_strlen(argv[1]) + 1);
        while (argv[1][i])
            i++;
        while (i >= 0)
            temp_rev[j++] = argv[1][--i];
        temp_rev[j] = '\0';
        j = 0;
        rev_words(temp_rev);
        free(temp_rev);
    }
    write(1, "\n", 1);
    return 0;
}
