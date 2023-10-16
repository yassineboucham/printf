#include "main.h"
/**
 * print_char - print char...
 * @list: va_list.
 *
 * Return: 1
 */
int print_c(va_list list)
{

	int n= va_arg(list, char);

	_putc(n);
	va_end(list);

	return (1);
}

