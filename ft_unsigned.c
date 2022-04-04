#include "ft_printf.h"

int	ft_len_number(unsigned int number)
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

char	*ft_unsigned_itoa(unsigned int number)
{
	char	*num;
	int		len;

	len = ft_len_number(number);
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

int	ft_unsigned(unsigned int number)
{
	int		unsigned_len;
	char	*num;

	unsigned_len = 0;
	if (number == 0)
		unsigned_len += write(1, "0", 1);
	else
	{
		num = ft_unsigned_itoa(number);
		unsigned_len += ft_string(num);
		free(num);
	}
	return (unsigned_len);
}
