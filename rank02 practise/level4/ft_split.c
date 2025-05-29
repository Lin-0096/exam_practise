#include <stdlib.h>

int is_space(char c)
{
    return(c == ' ' || c == '\t' || c == '\n');
}

int count_word(char *str)
{
    int i = 0;
    int flag = 0;
    int count = 0;
    while(str[i])
    {
        if(!is_space(str[i]) && flag == 0)
        {
            count++;
            flag = 1;
        }
        else if (is_space(str[i]))
            flag = 0;
        i++;
    }
    return(count);
}

char    **ft_split(char *str)
{
    char **arr;
    int count = count_word(str);
    int a = 0;
    arr = malloc(sizeof(char *) *(count+1));
    if(!arr)
        return(NULL);
    while(*str)
    {
        if(!is_space(*str))
        {
            int word_len = 0;
            while(!is_space(str[word_len]) && str[word_len])
                word_len++;

            arr[a] = malloc(sizeof(char) * (word_len + 1));
            if (!arr[a])
            {
                while(a > 0)
                {
                    free(arr[a]);
                    a--;
                }
                free(arr);
                return (NULL);
            }

            int i = 0;
            char *start = str;
            while(i < word_len)
            {
                arr[a][i] = *start;
                i++;
                start++;
            }
            arr[a][i] = '\0';
            a++;
            str += i;
        }
        else
            str++;
    }
    arr[a] = NULL;
    return(arr);
}
#include <stdio.h>

int main(void)
{
    char *str = "       hello   \nhiveooo       o   o   jj   ";
    char **arr = ft_split(str);
    int i = 0;
    while(arr[i])
    {
        printf("%s ", arr[i]);
        free(arr[i]);
        i++;
    }
    free(arr);
}