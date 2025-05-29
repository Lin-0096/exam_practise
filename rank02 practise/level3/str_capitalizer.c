#include <unistd.h>

void    put_cap(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    i = 1;
    if(str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    while (str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z' && (str[i -1] == ' ' || str[i -1] == '\t'))
            str[i] = str[i] - 32;
        i++;
    }
    write(1, str, i);
}

int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        int i = 1;
        while (i < argc)
        {
            put_cap(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return(0);
}