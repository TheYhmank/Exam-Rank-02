#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int max(int* tab, unsigned int len)
{
    int i = 0;
    int return_intex = len - 1;

    while (len > 0)
    {
        while (len - 1 > i)
        {
            if (tab[i] > tab[i + 1])
            {
                swap(&tab[i], &tab[i + 1]);
            }
            i++;
        }
        len--;
    }
    return (tab[return_intex]);
}

/*
int main(int argc, char const *argv[])
{
    int tab[] = {2, 4, 7, 12, 67, 1};
    int len = 6;
    printf("%d\n", max(tab, len));
    return 0;
}
*/