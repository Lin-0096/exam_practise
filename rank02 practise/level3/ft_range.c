#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *arr;
    if (start > end)
        return NULL;
    int len = end - start +1;
    arr = malloc(sizeof(int) * len);
    if (!arr)
        return NULL;
    int i = 0;
    while(i < len)
        arr[i++] = start++;
    return (arr);
}
#include <stdio.h>

int main(void)
{
    int *arr=ft_range(0,0);
    int i = 0;
    int len = 1;
    while(i<len)
    {
        printf("%i\n", arr[i]);
        i++;
    }
}