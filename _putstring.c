#include "main.h"
/**
 * _printstr - print string
 * @list: sting
 * Return: i
*/
int _printstr(va_list list)
{
		char *va_str = va_arg(list, char *);
		int i = 0;

		if (va_str == NULL)
		va_str = "(null)";
		while (va_str[i] != '\0')
		{
			_putchar(va_str[i]);
			i++;
		}
		return (i);
}
