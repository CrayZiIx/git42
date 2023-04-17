#include "libft.h"

int ft_isdigit(int chara) {
    if(chara >= '0' && chara < '9')
    {
        return 1; // true
    }
    else
    {
        return 0; // false
    }
}