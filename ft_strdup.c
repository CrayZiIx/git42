#include "libft.h"

char *ft_strdup(const char *s1) {
    char *s2;
    int len = 0;
    while (s1[len])
        len++;
    s2 = (char*) malloc(sizeof(char) * (len + 1));
    if (!s2)
        return 0;
    int i = 0;
    while (s1[i]) {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return s2;
}