
#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
        write(1, &str[i++], 1);
}

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

char* ft_changeletter(char* str, char from, char to)
{
    int i = 0;
    int str_length = ft_strlen(str);

    while (i < str_length)
    {
        if (str[i] == from)
            str[i] = to;
        i++;
    }
    return (str);
}


int main(int argc, char *argv[])
{
	
    if (argc == 4  && !(argv[2][1]) && !(argv[3][1]))
	{
		ft_putstr(ft_changeletter(argv[1], argv[2][0], argv[3][0]));
	}
    write(1, "\n", 1);
    return 0;
}
