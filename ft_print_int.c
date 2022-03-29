#include "ft_printf.h"

int ft_printint(int number)
{
   int  len;
   char *num; 

   len = 0;
   num = ft_itoa(number);
   len = ft_printstr(num);
   free(num);
   return (len);
}

int ft_numnum(int numnum)
{
    int i;

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

char    *ft_itoa(int number)
{
    int     i;
    char    *str;

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