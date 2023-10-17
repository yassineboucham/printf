#include "main.h"

/**
 * _puts - writes the string list to stdout...
 * @list: The string to print...
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _puts(va_list list)
{

        char *p;
	int p_lenght;

	p = va_arg(list, char*);
	p_lenght = _stringlen(p);/*_putstring((p != 'NULL') ? p : "(null)");*/
	return (p_lenght);
}
