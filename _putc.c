#include "main.h"

/**
 * _putchar - writes the character c to stdout...
 * @c: The character to print...
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putc(va_list list)
{
	
	int n = _putchar(va_arg(list, int));
	return (n);
}
