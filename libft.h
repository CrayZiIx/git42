#ifndef LIBFT_H
#define LIBFT_H

int ft_isalpha(int chara);
int ft_isdigit(int chara);
int ft_isalnum(int chara);
int ft_isprint(int chara);
int ft_isascii(int chara);
int ft_strlen(const char *str);
void *ft_memset(void *dest, int value, __SIZE_TYPE__ num);
void bzero(void *dest, __SIZE_TYPE__ num);
void *memcpy(void *dest, const void *src, __SIZE_TYPE__ n);
void *memmove(void *dest, const void *src, __SIZE_TYPE__ num);

#endif /* LIBFT_H */