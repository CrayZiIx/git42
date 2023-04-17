#include "libft.h"

void* ft_calloc(size_t count, size_t size) {
    size_t total_size = count * size;   // calcule la taille totale de la mémoire à allouer
    void* ptr = malloc(total_size);     // alloue la mémoire avec malloc
    if (ptr == NULL) {
        return NULL;   // si l'allocation a échoué, renvoie NULL
    }
    char* byte_ptr = (char*)ptr;   // convertit le pointeur en pointeur vers un octet (char)
    size_t i = 0;
    while (i < total_size) {
        byte_ptr[i] = 0;   // initialise chaque octet à 0
        i++;
    }
    return ptr;   // renvoie le pointeur vers la mémoire allouée
}