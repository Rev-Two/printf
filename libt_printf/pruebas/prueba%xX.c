#include "../ft_printf.h"
#include <stdio.h>

int main()
{
	int mayus = 6426;
	int minus = 6426;
        ft_printf("En mayuscula: %X", mayus);
        printf("\n----------------\n");
        printf("En mayuscula: %X\n", mayus);

	printf("\n____________\n");

        ft_printf("En minuscula: %x", minus);
        printf("\n----------------\n");
        printf("En minuscula: %x\n",minus);
        return 0;
}


