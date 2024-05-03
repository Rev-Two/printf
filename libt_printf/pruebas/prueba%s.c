#include "../ft_printf.h"
#include <stdio.h>

int main()
{
	char string[] = "hola ;)";
	ft_printf("Debe salir un saludo: %s", string);
	printf("\n----------------\n");
	printf("Debe salir un saludo: %s\n",string);
	return 0;
}
