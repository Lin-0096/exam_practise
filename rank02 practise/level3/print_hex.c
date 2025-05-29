#include <unistd.h>

void put_hex(int i)
{
    char hex[16] = "0123456789abcdef";
    if (i >= 16)
        put_hex(i / 16);
    char c = hex[i % 16];
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 +(str[i] - '0');
        i++;
    }
    return(res);
}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int a = ft_atoi(argv[1]);
        put_hex(a);
    }
    write(1, "\n", 1);
    return(0);
}