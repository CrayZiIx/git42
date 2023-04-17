#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>    

int ft_isalpha(int chara);
int ft_isdigit(int chara);
int ft_isalnum(int chara);
int ft_isprint(int chara);
int ft_isascii(int chara);
int ft_strlen(const char *str);
void *ft_memset(void *dest, int value, size_t num);
void bzero(void *dest, size_t num);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t num);

#endif /* LIBFT_H */
