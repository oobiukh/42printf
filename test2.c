#include "ft_printf.h"
#include <stdio.h>
#include <assert.h>

int	main() {
	char caracter = 'Y';
	char cadena[] = "new stringz";
	void *puntero = (void *)4560;
	int entero = 34;
	int decimal = -9600;
	unsigned int sin_signo = 1456;
	int hexadecimal = 254;
	printf("ft: %d\n", ft_printf("%c", caracter));
	printf("f: %d\n", printf("%c", caracter));
	printf("ft: %d\n", ft_printf("Cadena: %s heello %s =====", cadena, "hola"));
	printf("ft: %d\n", printf("Cadena: %s heello %s =====", cadena, "hola"));
	printf("f: %d \n", ft_printf("%p =====", puntero));
	printf("f: %d \n", printf("%p =====", puntero));
	printf("ft: %d\n", ft_printf("Puntero: %p =====", puntero));
	printf("f: %d\n", printf("Puntero: %p =====", puntero));
	printf("ft: %d\n", ft_printf("%d =====", decimal));
	printf("f: %d\n", printf("%d =====", decimal));
	printf("ft: %d\n", ft_printf("Decimal: %d =====", decimal));
	printf("f: %d\n", printf("Decimal: %d =====", decimal));
	printf("ft: %d\n", ft_printf("Entero: %i =====", entero));
	printf("f: %d\n", printf("Entero: %i =====", entero));
	printf("ft: %d\n", ft_printf("Sin signo: %u =====", sin_signo));
	printf("f: %d\n", printf("Sin signo: %u =====", sin_signo));
	printf("ft: %d \n", 
		ft_printf("Hexadecimal (minúsculas): %x =====", hexadecimal));
	printf("f: %d\n", printf("Hexadecimal (minúsculas): %x =====", hexadecimal));
	printf("ft: %d\n", 
		ft_printf("Hexadecimal (mayúsculas): %X =====", hexadecimal));
	printf("f: %d\n", printf("Hexadecimal (mayúsculas): %X =====", hexadecimal));
	printf("ft: %d\n", ft_printf("Símbolo del porcentaje: %% ====="));
	printf("f: %d\n",     printf("Símbolo del porcentaje: %% ====="));

    
    printf("printf %d\n", ft_printf("Pointer to NULL: %p!\n", NULL));
	printf("printf %d\n", printf("Pointer to NULL: %p!\n", NULL));

	printf("printf %d\n", ft_printf("Pointer to 0: %p!\n", (void *)0));
	printf("printf %d\n", printf("Pointer to 0: %p!\n", (void *)0));
	return 0;
}