#include "ft_printf.h"
#include <stdio.h>
#include <assert.h>

int	main(void)
{
	char *str = "xd";
	assert(ft_printf("") == printf(""));
	assert(ft_printf("Hello, %c!\n", 'w') == printf("Hello, %c!\n", 'w'));
	assert(ft_printf("x: %c\n", str[0]) == printf("x: %c\n", str[0]));
	assert(ft_printf("d: %c\n", str[1]) == printf("d: %c\n", str[1]));
	assert(ft_printf("Hello, world!\n") == printf("Hello, world!\n"));
	assert(ft_printf("%s\n", "") == printf("%s\n", ""));
	assert(ft_printf("Hello, %s!\n", "world") == printf("Hello, %s!\n", "world"));
	assert(ft_printf("Hello, %s!\n", str) == printf("Hello, %s!\n", str));
	assert(ft_printf("NULL as string: %s!\n", (char *)NULL) == printf("NULL as string: %s!\n", (char *)NULL));
	assert(ft_printf("Hello, %d!\n", 42) == printf("Hello, %d!\n", 42));
	assert(ft_printf("Inferior limit: %d!\n", -2147483648) == printf("Inferior limit: %d!\n", (int)-2147483648));
	assert(ft_printf("Superior limit: %d!\n", 2147483647) == printf("Superior limit: %d!\n", 2147483647));
	assert(ft_printf("Hello, %u!\n", 42) == printf("Hello, %u!\n", 42));
	assert(ft_printf("Hello, %x!\n", 42) == printf("Hello, %x!\n", 42));
	assert(ft_printf("Hello, %X!\n", 42) == printf("Hello, %X!\n", 42));
	assert(ft_printf("16 in hexadecimal: %x!\n", 16) == printf("16 in hexadecimal: %x!\n", 16));
	assert(ft_printf("16 in uppercase hexadecimal: %X!\n", 16) == printf("16 in uppercase hexadecimal: %X!\n", 16));
	assert(ft_printf("Pointer to str: %p!\n", str) == printf("Pointer to str: %p!\n", str));
	assert(ft_printf("Pointer to main: %p!\n", main) == printf("Pointer to main: %p!\n", main));
	assert(ft_printf("Pointer to printf: %p!\n", printf) == printf("Pointer to printf: %p!\n", printf));
	assert(ft_printf("Pointer to ft_printf: %p!\n", ft_printf) == printf("Pointer to ft_printf: %p!\n", ft_printf));
	assert(ft_printf("Pointer to NULL: %p!\n", NULL) == printf("Pointer to NULL: %p!\n", NULL));
	assert(ft_printf("Pointer to 0: %p!\n", (void *)0) == printf("Pointer to 0: %p!\n", (void *)0));
}