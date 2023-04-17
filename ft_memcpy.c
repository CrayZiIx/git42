#include "libft.h"

void *ft_memcpy(void *dest, const void *src, __SIZE_TYPE__ num)
    {
    char *csrc = (char *)src;
    char *cdest = (char *)dest;
    int i;
    i = 0:
    while ( i < num)
        {
            cdest[i] = csrc[i];
            i++;
        }
        return dest;
    }