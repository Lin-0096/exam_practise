#include <stddef.h>
#include <string.h>
#include <stdio.h>

int in_str(char c, const char *s)
{
    while (*s)
    {
        if (*s == c)
            return (1);
        s++;
    }
    return (0);
}
size_t	ft_strcspn(const char *s, const char *reject)
{
    int  i = 0;
    while (s[i])
    {
        if (in_str(s[i], reject))
            return (i);
        i++;
    }
    return (i);
}

int main(void)
{
    char *s1 = "hello";
    char *s2 = "le";
    int i = ft_strcspn(s1, s2);
    printf("%i\n", i);
}