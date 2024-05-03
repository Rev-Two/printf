#include "../ft_printf.h"
#include <stdio.h>

int main()
{
	int numero = 42;
	ft_printf("Debe salir numero: %d", numero);
	printf("\n----------------\n");
	printf("Debe salir numero: %d\n", numero);
	return 0;
}
