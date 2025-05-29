#include <stdlib.h>

int count_len(int i)
{
    int len = 0;
    long nbr = i;

    if(nbr < 0)
    {
        len++;
        nbr = -nbr;
    }
    if(nbr == 0)
        len = 1;
    while (nbr != 0)
    {
        nbr = nbr / 10;
        len++;
    }
    return(len);
}
char	*ft_itoa(int nbr)
{
    if (nbr == 0) //!!
    {
        char *arr = malloc(sizeof(char) * 2);
        if(!arr)
            return (NULL);
        arr[0] = '0';
        arr[1] = '\0';
        return (arr);
    }

    long i = nbr;
    int len = count_len(i);
    char *arr = malloc(sizeof(char) * (len + 1));
    if(!arr)
        return (NULL);
    arr[len] = '\0';
    if(i < 0)
    {
        i = -i;
        arr[0] = '-';
    }
    while(i > 0)
    {
        arr[len - 1] = i % 10 + '0';
        i = i / 10;
        len--;
    }
    return(arr);
}
#include <stdio.h>

int main(void)
{
    int i = 0;
    char *str = ft_itoa(i);
    printf("%s", str);
}