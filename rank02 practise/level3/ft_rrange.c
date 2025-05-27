#include <stdlib.h>
int     *ft_rrange(int start, int end)
{
    int len = 0;
    int i = 0;

    if (start <= end)
        len = end - start +1;
    if (start > end)
        len = start - end + 1;
    int *arr = malloc(sizeof(int) *len);
    if (!arr)
        return (NULL);
    while (i < len)
    {
        if (start <= end)
        {
            arr[i] = start + i;
            i++;
        }
        else
        {
            arr[i] = start - i;
            i++;
        }
    }
    return (arr);
}

#include <stdio.h>

int main(void)
{
    int *arr=ft_rrange(5,-1);
    int i = 0;
    int len = 7;
    while(i<len)
    {
        printf("%i\n", arr[i]);
        i++;
    }
}