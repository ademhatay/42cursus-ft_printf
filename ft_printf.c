#include "ft_printf.h"


int	ft_brace(va_list args, const char brace)
{
	int	len1;

	len1 = 0;
	if (brace == 'c')
		len1 += ft_put_char(va_arg(args, int));
    else if (brace == 's')
        len1 += ft_print_string(va_arg(args, char *));
    else if (brace == 'd' || brace == 'i')
        len1 += ft_print_number(va_arg(args, int));
    // else if (brace == 'p')
    //     len1 += ft_print_address(va_arg(args, unsigned long long));
    // else if (brace == 'u')
    //     len1 += ft_print_unsigned(va_arg(args, unsigned int));
    // else if (brace == 'x' || brace == 'X')
    //     len1 += ft_print_hexa(va_arg(args, int), brace)
    else if (brace == '%')
        len1 += ft_put_char('%');
    return (len1);
}


int ft_printf(const char *str,  ...)
{
    va_list     args;
    int         i;
    int len;

    i = 0;
    len = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            len += ft_brace(args, str[i + 1]);
            i++;
        }
        else
            len += ft_put_char(str[i]);
        i++;
    }
    va_end(args);
    return (len);
}