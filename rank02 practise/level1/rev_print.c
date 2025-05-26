//#include <unistd.h>

// int main(int argc, char **argv)
// {
//     int i = 0;
//     if (argc == 2)
//     {
//         while(argv[1][i])
//             i++;
//         while (i > 0)
//         {
//             write (1, &argv[1][i - 1], 1);
//             i--;
//         }
//     }
//     write(1, "\n", 1);
//     return (0); 
// }

#include <unistd.h>

void ft_swap(char *a, char *b)
{
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        while(argv[1][i])
            i++;
        int j = 0;
        while (j < i / 2)
        {
            ft_swap(&argv[1][j], &argv[1][i - 1 - j]);
            j++;
        }
        write (1, argv[1], i);
    }
    write(1, "\n", 1);
    return (0); 
}