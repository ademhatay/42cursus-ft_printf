/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahatay <ahatay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:45:29 by ahatay            #+#    #+#             */
/*   Updated: 2022/04/13 12:10:46 by ahatay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int	main(void)
{
	// ft_printf("\n\n---------------- DUZ STRING ---------------------\n");
	// ft_printf("merhaba\nDunya\n");
	// ft_printf("-------------------------------------------------\n");

	// ft_printf("----------------     %%%%   ---------------------\n");
    // ft_printf("%%\n");
    // ft_printf("-------------------------------------------------\n");

	// ft_printf("----------------     %%c    ---------------------\n");
    // char c = 'c';
    
	// ft_printf("%c%c \n", c, d);
	// ft_printf("-------------------------------------------------\n");
	
	// ft_printf("----------------     %%s    ---------------------\n");
	// char dizi[] = "Merhaba Dünya\n";
	// ft_printf("%s" dizi);
	// ft_printf("-------------------------------------------------\n");

    // ft_printf("----------------     %%d & i    ---------------------\n");
	// int number1 = 127381;
	// int number2 = -1872381;
	// ft_printf("%d\n",number1);
	// ft_printf("%i\n",number2);
	// ft_printf("-------------------------------------------------\n");

    // ft_printf("\n----------------     %%p    ---------------------\n");
	// char *dizi2 = "merhaba";
	// ft_printf("%p\n", dizi2);
	// printf("%p\nmerhaba", dizi2, dizi1, );
	// ft_printf("\n-------------------------------------------------\n");

	// int dizi3 = 123;
	// ft_printf("%p\n", dizi3);
	// ft_printf("-------------------------------------------------\n");

    ft_printf("----------------     %%X & x    ---------------------\n");
	int ca = 352;
	ft_printf("%x\n", ca);
	printf("%x\n", ca);
	ft_printf("-------------------------------------------------\n");

    // gcc -Wall -Wextra -Werror ft_printf.c ft_address.c ft_hex.c ft_integer.c ft_putchar.c ft_string.c ft_unsigned.c main.c

	return (0);
}
