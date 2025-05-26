
void ft_swap(char *a, char *b)
{
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

char    *ft_strrev(char *str)
{
    int i = 0;    
    while(str[i])
        i++;
    int j = 0;
    while (j < i / 2)
    {
        ft_swap(&str[j], &str[i - 1 - j]);
        j++;
    }
    return (str);
}

#include <stdio.h>

int main(void)
{
    char str[] = "hello";
    ft_strrev(str);
    printf("%s", str);
}