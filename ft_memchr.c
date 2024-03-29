#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
    const unsigned char *p = s;
    unsigned char ch = c;
    size_t i = 0;
    
    while (i < n) {
        if (p[i] == ch) {
            return (void *)(p + i);
        }
        i++;
    }
    return 0;
}