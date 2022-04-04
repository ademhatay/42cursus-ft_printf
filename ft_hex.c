/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:57:55 by ahatay            #+#    #+#             */
/*   Updated: 2022/04/04 12:58:01 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_hex(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int num, const char brace)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, brace);
		ft_put_hex(num % 16, brace);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
		{
			if (brace == 'x')
				ft_putchar((num - 10 + 'a'));
			if (brace == 'X')
				ft_putchar((num - 10 + 'A'));
		}
	}
}

int	ft_hex(unsigned int number, const char brace)
{
	if (number == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(number, brace);
	return (ft_len_hex(number));
}
