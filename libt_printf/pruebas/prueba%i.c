#include "../ft_printf.h"
#include <stdio.h>

int main()
{
	int print = 0x1A;
	ft_printf("La base de 0x1A es: %i", print);
	printf("\n----------------\n");
	printf("La base de 0x1A: %i\n",print);
	return 0;
}


