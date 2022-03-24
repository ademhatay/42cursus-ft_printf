#include "ft_printf.h"


int	ft_brace(va_list args, const char brace)
{
	int	len;

	len = 0;
	if (brace == 'c')
		len += ft_put_char(va_arg(args, int));
    else if (brace == 's')
        len += ft_print_string(va_arg(args, char *));
    else if (brace == 'd' || brace == 'i')
        len += ft_print_number(va_arg(args, int));

    return (len);
}


int ft_printf(const char *str,  ...)
{
    va_list     args;
    int         i;
    int len;

    i = 0;
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