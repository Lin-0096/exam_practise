int		max(int* tab, unsigned int len)
{
    int i = 1; //!!
    int max = tab[0]; //!!

    if (len == 0)
        return (0);
    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}

#include <stdio.h>
int main(void)
{
    int tab[] = {-1, -2 ,-6, -4};
    printf("%i", max(tab, 4));
}