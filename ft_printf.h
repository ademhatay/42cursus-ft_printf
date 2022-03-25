#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int ft_printf(const char *str, ...);
int ft_put_char(char c);
int ft_print_string(char *string);
void    ft_put_string(char *string);
char    *ft_itoa(int number);

#endif