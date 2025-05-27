#include <unistd.h>

int is_space(char c)
{
    return(c == ' ' || (c >= 9 && c <= 13));
}

void print_word(char *s, int i, int j)
{
    while (i < j)
        write(1, &s[i++], 1);
}

int main(int argc, char **argv)
{
    int i = 0;
    int first = 1;
    if (argc == 2)
    {
        while(argv[1][i])
        {
            while(is_space(argv[1][i]))
                i++;
            int start = i;
            while (!is_space(argv[1][i]) && argv[1][i])
                i++;
            int end = i;
            if (end > start)
            {
                if (!first)
                    write(1, "   ", 3);
                print_word(argv[1], start, end);
                first = 0;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}