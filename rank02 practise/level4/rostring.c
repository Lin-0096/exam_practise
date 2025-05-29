#include <unistd.h>

int is_space(char c)
{
    return(c == ' ' || c == '\t');
}

void re_sorting(char *str)
{
    int first_word_strat = 0;
    int first_word_end = 0;
    int i =0;
    int start =0;
    int end = 0;
    int first = 1;

    while(is_space(str[i]))
        i++;
    
    first_word_strat = i;
    while(!is_space(str[i]) && str[i])
        i++;
    first_word_end = i;

    while(str[i])
    {
        while(is_space(str[i]))
            i++;
        if(!str[i])
            break;
        start = i;
        while(!is_space(str[i]) && str[i])
            i++;
        end  = i;
        if (!first)
            write(1, " ", 1);
        first = 0;
        write(1, &str[start], end - start);
    }
    if (first_word_end > first_word_strat)
    {
        if(!first)
            write(1, " ", 1);
        write(1, &str[first_word_strat], first_word_end - first_word_strat);
    }
   write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if(argc < 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    re_sorting(argv[1]);
    //write(1, "\n", 1);
    return(0);
}