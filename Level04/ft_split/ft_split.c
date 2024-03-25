#include <stdlib.h>

int word_count(char *str)
{
    int count = 0;

    while (*str)
    {
        while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
            ++str;
        if (*str)
            count++;
        while (*str && !(*str == ' ' || *str == '\t' || *str == '\n'))
            ++str;        
    }
    return (count);
}

int ft_length(char *str)
{
    int i = 0;

    while (*str && !(*str == ' ' || *str == '\t' || *str == '\n'))
    {
        i++;
        str++;
    }
    return (i);
}

char *word_allocate(char *str)
{
    char *buffer;
    int i = 0;
    int word_length = ft_length(str);

    buffer = (char *)malloc(sizeof(char) * word_length + 1);
    if (!buffer)
    {
        return (NULL);
    }
    i = -1;
    while (++i < word_length)
    {
        buffer[i] = str[i];
    }
    buffer[i] = '\0';
    return (buffer);
}

char    **ft_split(char *str)
{
    char **strings;
    int i;

    strings = (char **)malloc(sizeof(char *) * (word_count(str) + 1));
    if (!(strings))
        return (NULL);
    i = 0;
    while (*str)
    {
        while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
            ++str;
        if (*str)
            strings[i++] = word_allocate(str);
        while (*str && !(*str == ' ' || *str == '\t' || *str == '\n'))
            ++str; 
    }
    strings[i] = '\0';
    return (strings);
}

/*
int main(void)
{
    char **result;
    char src[] = "Helfsdf jsdfkl";

    while (*result)
        printf("%s\n", *result++);
    return (0);    
}
*/