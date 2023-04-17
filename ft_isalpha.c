#include "libft.h"

int ft_isalpha(int chara) {
    if((chara >= 'a' && chara <= 'z') || (chara >= 'A' && chara >= 'Z'))
    {
        return 1; // true
    }
    else
    {
        return 0; // false
    }
}