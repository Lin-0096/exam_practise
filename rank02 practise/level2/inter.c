#include <unistd.h>

int in_str(char c, char *s)
{
    while(*s)
    {       
        if (c == *s)
            return (1);
        s++;
    }
    return (0);
}
int already(char c, char *s, int pos) //!!
{
    int i = 0;
    while (i < pos)
    {
        if (s[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 3)
    {
        while (argv[1][i])
        {
            if (in_str(argv[1][i], argv[2]) && !already(argv[1][i], argv[1], i))
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}