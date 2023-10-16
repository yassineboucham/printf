#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: the format of variable
 * Return: sum of caracter printing
*/
int _printf(const char *format, ...)
{
	int i = 0, j = 0, s = 0;

	va_list ap;
	fbyf type[] = {
		{'c', _putc},
		{'s', _printstr},
	};

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (j < 2)
			{
				if (type[j][0] == format[i])
				{
					s += type[i].f(ap);
					i++;
				}
				j++;
			}
		}
		else
		{
		s += putchar(format[i]);
		}
		i++;
	}
	return (s);
}
