#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *last_occurrence = 0;
    
    while (*s != '\0')
    {
        if (*s == c)
        {
            last_occurrence = (char *)s;
        }
        s++;
    }
    if (last_occurrence != 0)
    {
        return last_occurrence;
    }
    if (c == '\0')
    {
        return (char *)s;
    }
    return 0;
}