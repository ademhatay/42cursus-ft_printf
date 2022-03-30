// #include "ft_printf.h"

// int ft_print_hex(unsigned int number, const char brace)
// {
//     if (number == 0)
//     {
//         write(1, "0", 1);
//         return (1);
//     }
//     else
//         ft_puthex(number, brace);
//     return (ft_hex_len(number));
// }

// void ft_puthex(unsigned int num, const char brace)
// {
//     if (num >= 16)
// 	{
// 		ft_puthex(num / 16, brace);
// 		ft_puthex(num % 16, brace);
// 	}
// 	else
// 	{
// 		if (num > 9)
// 		{
// 			if (brace == 'x')
// 				ft_putchar(num - 10 + 'a');
// 			if (brace == 'X')
// 				ft_putchar(num - 10 + 'A');
// 		}
// 		else
// 			ft_putchar(num + 48);
// 	}
// } 

// int	ft_len_hex(unsigned int n)
// {
// 	int	i;

// 	i = 0;
// 	while (n != 0)
// 	{
// 		n = n / 16;
// 		i++;
// 	}
// 	return (i);
// }
