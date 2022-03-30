#include "ft_printf.h"

int	ft_print_unsigned(unsigned int number)
{
	int		print_len;
	char	*num;

	print_len = 0;
	if (number == 0)
		print_len += write(1, "0", 1);
	else
	{
		num = ft_uitoa(number);
		print_len += ft_printstr(num);
		free(num);
	}
	return (print_len);
}

char	*ft_uitoa(unsigned int number)
{
	char	*num;
	int		len;

	len = ft_number_len(number);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (number != 0)
	{
		num[len - 1] = number % 10 + 48;
		number = number / 10;
		len--;
	}
	return (num);
}

int	ft_number_len(unsigned int number)
{
	int	len;

	len = 0;
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}
