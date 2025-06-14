#include <unistd.h>

int  is_space(char c)
{
    if (c == ' ' || (c >= 9 && c <= 13))
        return (1);
    return (0);
}

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        while(argv[1][i])
            i++;
        i--;
        while(is_space(argv[1][i]))
            i--;
        while(!is_space(argv[1][i]))
            i--;
        i++;
        while(!is_space(argv[1][i]) && argv[1][i])
        {
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
