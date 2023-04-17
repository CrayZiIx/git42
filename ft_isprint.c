#include "libft.h"

int ft_isprint(int chara)
{
    if((chara >= 9 && chara <= 13) || (chara >= ' ' && chara <= '~'))
    {
        return 1; // true
    }
    else
    {
        return 0; // false
    }
}