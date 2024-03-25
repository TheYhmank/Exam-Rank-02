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

    if (argc == 2)
    {
        i = 0;
        fix_str = single_space(argv[1]);
        
        free(fix_str);
    }
    write(1, "\n", 1);
    return 0;
}
