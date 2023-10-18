#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: the format of variable
 * Return: sum of caracter printing
*/
int _printf(const char *format, ...)
{
	int i = 0, s = 0, j = 0;

	va_list ap;
	fbyf type[] = {
		{'c', _putc},
	};
	if (format == NULL)
	return (-1);
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] == ' ')
			i++;
			j = 0;
			while (j < 1)
			{
				if (type[j].c == format[i])
				{
					s += type[j].f(ap);
					i++;
				}
				else
					s += _putchar('%');
				j++;
			}
			i--;
		}
		else
		{
			s += _putchar(format[i]);
		}
		i++;
	}
	va_end(ap);
	return (s);
}
