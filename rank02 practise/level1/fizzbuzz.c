#include <unistd.h>

void    ft_putstr(char *s)
{
    if (!s)
        return ;
    while (*s)
        write(1, s++, 1);    
}
void    ft_putchr (char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int i)
{
    if (i > 9)
        ft_putnbr(i / 10);
    ft_putchr(i % 10 + '0');
}

int main(void)
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            ft_putstr("fizzbuzz");
        else if (i % 3 == 0)
            ft_putstr("fizz");
        else if (i % 5 == 0)
            ft_putstr("buzz");
        else
            ft_putnbr(i);
        write (1, "\n", 1);
        i++;
    }
    return (0);
}