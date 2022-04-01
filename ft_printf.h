#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int ft_printf(const char *str, ...);
int ft_putchar(char c);
void ft_putstr(char *str);
int	ft_printstr(char *str);
int ft_printint(int number);
int ft_numnum(int numnum);
char    *ft_itoa(int number);
int ft_print_point(unsigned long long number);
int	ft_print_unsigned(unsigned int number);
char	*ft_uitoa(unsigned int number);
int	ft_number_len(unsigned int number);
int	ft_print_hex(unsigned int num, const char format);
void	ft_put_hex(unsigned int num, const char format);
int	ft_hex_len(unsigned	int num);
void	ft_putchar_fd(char c, int fd);
int	ft_ptr_len(uintptr_t num);
void	ft_put_ptr(uintptr_t num);
int	ft_print_ptr(unsigned long long ptr);
#endif
