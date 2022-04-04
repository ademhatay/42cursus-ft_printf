/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:45:00 by ahatay            #+#    #+#             */
/*   Updated: 2022/04/04 12:45:02 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);

int		ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_string(char *str);
int		ft_integer(int number);
char	*ft_itoa(int number);
int		ft_numnum(int numnum);
int		ft_address(unsigned long long number);
void	ft_put_address(unsigned long long num);
int		ft_address_len(unsigned long long num);
int		ft_unsigned(unsigned int number);
char	*ft_unsigned_itoa(unsigned int number);
int		ft_len_number(unsigned int number);
int		ft_hex(unsigned int number, const char brace);
void	ft_put_hex(unsigned int num, const char brace);
int		ft_len_hex(unsigned int num);
#endif
