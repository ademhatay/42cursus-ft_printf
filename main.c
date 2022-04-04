/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:45:29 by ahatay            #+#    #+#             */
/*   Updated: 2022/04/04 12:45:31 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("\n\n---------------- DUZ STRING ---------------------\n");
	ft_printf("merhaba\nDunya\n");
	ft_printf("-------------------------------------------------\n");

	ft_printf("----------------     %%%%   ---------------------\n");
    ft_printf("%%\n");
    ft_printf("-------------------------------------------------\n");

	ft_printf("----------------     %%c    ---------------------\n");
    char c = 'c';
	ft_printf("%c \n", c);
	ft_printf("-------------------------------------------------\n");
	
	ft_printf("----------------     %%s    ---------------------\n");
	char dizi[] = "Merhaba Dünya\n";
	ft_printf( dizi);
	ft_printf("-------------------------------------------------\n");

    ft_printf("----------------     %%d & i    ---------------------\n");
	int number1 = 127381;
	int number2 = -1872381;
	ft_printf("%d\n",number1);
	ft_printf("%i\n",number2);
	ft_printf("-------------------------------------------------\n");

    ft_printf("----------------     %%p    ---------------------\n");
	char dizi2[] = "henüz yazılmadı...:/\n";
	ft_printf("%p\n", dizi2);
	ft_printf("-------------------------------------------------\n");

    // ft_printf("----------------     %%X & x    ---------------------\n");
	// int ca = 28;
	// ft_printf("%x\n", ca);
	// ft_printf("-------------------------------------------------\n");

    // gcc main.c ft_print_str.c ft_printf.c ft_print_point.c  ft_print_unsigned.c ft_print_int.c ft_print_hex.c ft_putchar_fd.c

	return (0);
}
