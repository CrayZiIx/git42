#include "libft.h"

int ft_isalnum(int chara)
{
    if (ft_isalpha(chara) && ft_isdigit(chara))
        return 1; // true
    else
        return 0; // false
}