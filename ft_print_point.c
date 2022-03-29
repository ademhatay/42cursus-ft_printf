#include "ft_printf.h"


int ft_print_point(unsigned long long number)
{
    int len;

    len = 0;
    len += write(1, "0x", 2);
    if (number == 0)
        len += write(1, "0", 1);
    else
        ft_puthex(number);
    return (hexlen(number) + len);
}

void ft_puthex(unsigned long long num)
{
    if (num >= 16)
    {
        ft_puthex(num / 16);
        ft_puthex(num % 16);
    }
    else
    {
        if (num > 9)
            ft_putchar(num - 10 + 'a');
        else
            ft_putchar(num + 48);
    }
}

int hexlen(unsigned long long n)
{
    int len;

    len = 0;
    while (n != 0)
    {
        n /= 16;
        len++;
    }
    return (len);
}
