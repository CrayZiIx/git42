#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t needle_len;

    if (*needle == '\0')
        return (char *)haystack;

    needle_len = 0;
    while (needle[needle_len] != '\0')
        needle_len++;

    while (n >= needle_len && *haystack != '\0')
    {
        if (*haystack == *needle)
        {
            if (ft_strncmp(haystack, needle, needle_len) == 0)
                return (char *)haystack;
        }
        n--;
        haystack++;
    }

    return NULL;
}