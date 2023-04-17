#include "libf.h"

void *ft_memmove(void *dest, const void *src, __SIZE_TYPE__ num)
{
    char *d = dest;
    const char *s= src;
    if (d < s)
    {
        while (num--)
        {
            *d++ = *s++;
        }
    }
    else
    {
        char *lastd = d + (n - 1);
        const char *lasts = s + (n - 1);
        while (n--)
        {
            *lastd-- = *lasts--
        }
    }
    return dest;
}