#include "../ft_printf.h"
#include <stdio.h>

int main()
{
	int *ptr;
	int numero = 42;
	ptr = &numero;

        ft_printf("El puntero apunta a: %p", ptr);
        printf("\n----------------\n");
        printf("El puntero apunta a: %p\n",ptr);
        return 0;
}


