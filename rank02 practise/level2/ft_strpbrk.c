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
char	*ft_strpbrk(const char *s1, const char *s2)
{
    while (*s1)
    {
        if (in_str(*s1, s2))
            return ((char *)s1);
        s1++;
    }
    return (NULL);
}

int main(void)
{
    const char *s1 = "hello";
    const char *s2 = "le";
    char *c = ft_strpbrk(s1, s2);
    printf("%s", c);
}