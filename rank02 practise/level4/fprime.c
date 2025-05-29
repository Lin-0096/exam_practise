#include <stdio.h>
#include <stdlib.h>

void prime_factor(int n)
{
    if(n == 1)
        printf("1");

    int i = 2;
    while(i <= n)
    {
        if(n % i == 0)
        {
            printf("%i", i);
            n = n / i;
            if(n > 1)
                printf("*");
        }
        else
            i++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 2)
        prime_factor(atoi(argv[1]));
    printf("\n");
    return(0);
}