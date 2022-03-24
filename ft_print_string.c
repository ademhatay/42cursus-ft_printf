#include "ft_printf.h"

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

int ft_print_number(int number)
{
	int		i;
	char	*s;

	i = 0;
	if (number == 0)
		return (write(1, "0", 1));
	s = ft_itoa(number);
	i = ft_print_string(s);
	free(s);
	return (i);
}
