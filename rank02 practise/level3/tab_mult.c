#include <unistd.h>
int ft_atoi(char *str)
{
    int res = 0;
    while(*str >= '0' && *str <= '9' && *str)
    {
        res = res * 10 + (*str - '0');
        str++;
    }
    return (res);
}

void ft_putnbr(int i)
{
    if (i > 9)
        ft_putnbr(i / 10);
    char c = i % 10 + '0';
    write(1, &c, 1);
}

void multi_nbr(int a)
{
    int i = 1;
    while(i <= 9)
    {
        ft_putnbr(i);
        write(1, " x ", 3);
        ft_putnbr(a);
        write(1, " = ", 3);
        ft_putnbr(i * a);
        write(1, "\n",1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int a = ft_atoi(argv[1]);
        multi_nbr(a);                           
    }
    else
        write(1, "\n", 1);
    return (0);
}