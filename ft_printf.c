/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:45:09 by ahatay            #+#    #+#             */
/*   Updated: 2022/04/04 12:45:11 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_brace(va_list args, const char brace)
{
	int	len;

	len = 0;
	if (brace == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (brace == 's')
		len += ft_string(va_arg(args, char *));
	else if (brace == 'd' || brace == 'i')
		len += ft_integer(va_arg(args, int));
	else if (brace == 'p')
		len += ft_address(va_arg(args, unsigned long long));
	else if (brace == 'u')
		len += ft_unsigned(va_arg(args, unsigned int));
	else if (brace == 'x' || brace == 'X')
		len += ft_hex(va_arg(args, int), brace);
	else if (brace == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		len;

	count = 0;
	len = 0;
	va_start(args, str);
	while (str[count])
	{
		if (str[count] == '%')
		{
			len += ft_brace(args, str[count + 1]);
			count++;
		}
		else
			len += ft_putchar(str[count]);
		count++;
	}
	va_end(args);
	return (len);
}
