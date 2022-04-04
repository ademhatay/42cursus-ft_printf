/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:44:36 by ahatay            #+#    #+#             */
/*   Updated: 2022/04/04 12:44:40 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numnum(int numnum)
{
	int	i;

	i = 0;
	if (numnum <= 0)
	{
		numnum = -numnum;
		i++;
	}
	while (numnum != 0)
	{
		numnum = numnum / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int number)
{
	int		i;
	char	*str;

	i = ft_numnum(number);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (number == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (number < 0)
		str[0] = '-';
	while (number != 0)
	{
		if (str[0] == '-')
			str[i--] = '0' + -(number % 10);
		else
			str[i--] = '0' + (number % 10);
		number = number / 10;
	}
	return (str);
}

int	ft_integer(int number)
{
	int		len;
	char	*strnum;

	len = 0;
	strnum = ft_itoa(number);
	len = ft_string(strnum);
	free(strnum);
	return (len);
}
