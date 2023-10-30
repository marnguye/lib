#include "libft.h"

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *str;

    i = 0;
    str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
    if (str == NULL)
        return (NULL);
    while (s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}