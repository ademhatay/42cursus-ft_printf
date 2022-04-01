#include "ft_printf.h"


int	ft_brace(va_list args, const char brace)
{
	int	len1;

	len1 = 0;
	if (brace == 'c')
		len1 += ft_putchar(va_arg(args, int));
    else if (brace == 's')
        len1 += ft_printstr(va_arg(args, char *));
    else if (brace == 'd' || brace == 'i')
        len1 += ft_printint(va_arg(args, int));
    else if (brace == 'u')
        len1 += ft_print_unsigned(va_arg(args, unsigned int));
    else if (brace == '%')
        len1 += ft_putchar('%');
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
            len += ft_putchar(str[i]);
        i++;
    }
    va_end(args);
    return (len);
}