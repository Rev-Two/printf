#include "../ft_printf.h"
#include <stdio.h>

int main()
{
	unsigned int valor = 320;
        ft_printf("Su valor es: %u", valor);
        printf("\n----------------\n");
        printf("Su valor es: %u\n",valor);
        return 0;
}


