#include "ft_printf.h"

int ft_put_char(char c)
{
    return (write(1, &c, 1));
}

void    ft_put_string(char *string)
{
    int i;

    i = 0;
    while (string[i] != '\0')
    {
       write (1, &string[i], 1); 
       i++;
    }
}

int ft_print_string(char *string)
{
    int i;

    i = 0;
    if (!string)
    {
        ft_put_string("(null)");
        return (6);
    }
    while (string[i] != '\0')
    {
       write (1, &string[i], 1); 
       i++;
    }
    return (i);
}