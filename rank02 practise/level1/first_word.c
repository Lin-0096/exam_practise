#include <unistd.h>

int is_space(char c)
{
    return ((c == ' ' || c >= 9 && c <= 13 ));
}

void first_word(char *s)
{
    while (is_space(*s))
        s++;
    while (!is_space(*s) && *s)
    {
        write(1, s++, 1);
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        first_word(argv[1]);
        write (1, "\n", 1);
    }
    return (0);
}