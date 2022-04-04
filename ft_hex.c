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
