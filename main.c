#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    char dizi[] = "merhaba";
    ft_printf("\n\nFT_PRİNTF: %s içeriğine sahip 'dizi' adlı dizinin adresi: %p\n\n",dizi, dizi);
    printf("PRİNTF: %s içeriğine sahip 'dizi' adlı dizinin adresi: %p\n\n",dizi, dizi);
    ft_printf("------------------------------------------\n\n");
    ft_printf("%u\n\n", dizi);
    printf("%u\n\n", dizi);
}