#include "ft_printf.h"

int main(void)
{
    // BOŞ STRİNG
    ft_printf("merhaba\n");

    // %c 
    char c = 'c';
    char string[] = "merhaba\n";
    ft_printf("%c\n%c\n%c\n%c\n%c\n%s",c,c,c,c,c, string);

    ft_printf("%d\n", 123);
    ft_printf("%%\n");
    
}