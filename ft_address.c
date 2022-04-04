/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:44:49 by ahatay            #+#    #+#             */
/*   Updated: 2022/04/04 12:44:51 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_address_len(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num = num / 16;
		len++;
	}
	return (len);
}

void	ft_put_address(unsigned long long num)
{
	if (num >= 16)
	{
		ft_put_address(num / 16);
		ft_put_address(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
			ft_putchar((num - 10 + 'a'));
	}
}

int	ft_address(unsigned long long number)
{
	int	address;

	address = 0;
	address += write(1, "0x", 2);
	if (number == 0)
		address += write(1, "0", 1);
	else
	{
		ft_put_address(number);
		address += ft_address_len(number);
	}
	return (address);
}
