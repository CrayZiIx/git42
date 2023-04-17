#include "libft.h"

void *ft_memset(void *dest, int value, size_t num)
{
    char *byte_ptr = dest;
    size_t byte_count = num;
    char byte_value = (char) value;

    while ( byte_count > 0)
    {
        *byte_ptr = byte_value;
        byte_ptr++;
        byte_count--;
    }
}

// dest représente le pointeur vers le bloc de mémoire à initialiser.

// value représente la valeur à affecter à chaque octet du bloc de mémoire.

// num représente le nombre d'octets à initialiser.

// byte_ptr est un pointeur sur le premier octet à initialiser dans le bloc de mémoire.

// byte_count est le nombre d'octets restant à initialiser.

// byte_value est la valeur à affecter à chaque octet du bloc de mémoire.

// La boucle while itère sur chaque octet du bloc de mémoire. À chaque itération, l'octet pointé par byte_ptr est initialisé avec la valeur byte_value, puis les pointeurs sont incrémentés et le compteur byte_count est décrémenté.

// Enfin, la fonction retourne le pointeur initial vers le bloc de mémoire pour permettre une utilisation en chaîne de fonctions.