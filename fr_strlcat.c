#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size) {
    size_t dst_len = strlen(dst);
    size_t src_len = strlen(src);
    size_t total_len = dst_len + src_len;
    size_t copy_len = size - dst_len - 1;
    
    if (dst_len >= size) {
        return size + src_len;
    }
    
    size_t i = 0;
    while (i < copy_len && src[i] != '\0') {
        dst[dst_len + i] = src[i];
        i++;
    }
    
    dst[dst_len + i] = '\0';
    return total_len;
}