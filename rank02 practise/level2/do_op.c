#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        int a = atoi (argv[1]);
        int b = atoi (argv[3]);
        char *c = argv[2];
        int i;
        switch (*c)
        {
            case '+':
            i = a + b;
            break;
            case '-':
            i = a - b;
            break;
            case '*':
            i = a * b;
            break;
            case '/':
            i = a / b;
            break;
            case '%':
            i = a % b;
            break;
        }
        printf("%d", i);
    }
    printf("\n");
    return (0);
}