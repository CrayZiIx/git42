#include "libft.h"

int ft_strlen(const char *str)
{
    const char *p = str;
    while (*p != '\0')
        p++;
    return p - str;
}