#include "ft_printf.h"

int main(void)
{
    // BOŞ STRİNG
    ft_printf("merhaba\n");

    // %c 
    char c = 'c';
    char string[] = "merhaba\n";
    ft_printf("%c\n%s",c, string);

    ft_printf("%d\n", 123);
    
}