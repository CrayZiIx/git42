#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size) {
    size_t src_len = strlen(src);
    size_t copy_len = (size > 0) ? size - 1 : 0;
    size_t i;
    for (i = 0; i < copy_len && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return src_len;
}