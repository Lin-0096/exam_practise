#include <unistd.h>

void put_rstr(char *str)
{
   int i = 0;
    while (str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    i = 0;
    while(str[i])
    {
        if((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' '|| str[i + 1] == '\t' || str[i + 1] == '\0'))
            str[i] = str[i] - 32; 
        i++;
    }
    write(1, str, i);
}

int main(int argc, char **argv)
{
    if(argc >=2)
    {
        int i = 1;

        while(i < argc)
        {
            put_rstr(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}