#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);    
}

char *single_space(char *str)
{
    char *buffer;
    int i = 0;
    int j = 0;

    buffer = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
    if (!buffer)
        return (NULL);
    while (str[i])
	{
        while (str[i] && (str[i] == ' ' || str[i] == '\t'))
            i++;
        while (str[i] && !(str[i] == ' ' || str[i] == '\t'))
            buffer[j++] = str[i++];
        while (str[i] && (str[i] == ' ' || str[i] == '\t'))
            i++;
        if (str[i])
            buffer[j++] = ' ';
	}
    buffer[j] = '\0';
    return (buffer);
}

int main(int argc, char *argv[])
{
    int i;
    char *fix_str;
    char *start;
    char *end;

    if (argc == 2)
    {
        i = 0;
        fix_str = single_space(argv[1]);
        while (fix_str[i] && !(fix_str[i] == ' ' || fix_str[i] == '\t'))
            i++;
        while (fix_str[++i])
            write(1, &fix_str[i], 1);
        i = 0;
        write(1, " ", 1);
        while (fix_str[i] && !(fix_str[i] == ' ' || fix_str[i] == '\t'))
            write(1, &fix_str[i++], 1);
        free(fix_str);
    }
    write(1, "\n", 1);
    return 0;
}

//finish it!
