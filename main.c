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
	char dizi[] = "henüz yazılmadı...:/\n";
	ft_printf( dizi);
	ft_printf("-------------------------------------------------\n");

    ft_printf("----------------     %%d & i    ---------------------\n");
	char dizi1[] = "henüz yazılmadı...:/\n";
	ft_printf( dizi1);
	ft_printf("-------------------------------------------------\n");

    ft_printf("----------------     %%p    ---------------------\n");
	char dizi2[] = "henüz yazılmadı...:/\n";
	ft_printf( dizi2);
	ft_printf("-------------------------------------------------\n");

    ft_printf("----------------     %%X & x    ---------------------\n");
	char dizi3[] = "henüz yazılmadı...:/\n";
	ft_printf( dizi3);
	ft_printf("-------------------------------------------------\n");

    // gcc main.c ft_print_str.c ft_printf.c ft_print_point.c  ft_print_unsigned.c ft_print_int.c 

	return (0);
}