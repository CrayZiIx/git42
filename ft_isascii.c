#include "libft.h"

int ft_isascii(int chara)
{
    if (chara >= 0 && chara < 128)
    {
        return 1; // true
    }
    else
    {
        return 0; // false
    }
}