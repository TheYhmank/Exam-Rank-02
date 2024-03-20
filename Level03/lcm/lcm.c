unsigned int    lcm(unsigned int a, unsigned int b)
{
    int i = 0;

    if (!a || !b)
        return (0);
    if (a > b)
        i = a;
    else
        i = b;
    while (1)
    {
        if (i % b == 0 && i % a == 0)
            return (i);
        i++;
    }
    return (0);
}

