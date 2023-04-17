#include "libft.h"

int ft_atoi(const char *str) {
    int sign = 1;
    int result = 0;
    int i = 0;
    // ignore white space
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v') {
        i++;
    }
    // check for optional sign
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            sign = -1;
        }
        i++;
    }
    // calculate result
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return sign * result;
}