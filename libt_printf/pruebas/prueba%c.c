#include "../ft_printf.h"
#include <stdio.h>

int main()
{
	int print = 'x';
	ft_printf("Debe salir x aqui: %c", print);
	printf("\n----------------\n");
	printf("Debe salir x aqui: %c\n",print);
	return 0;
}

