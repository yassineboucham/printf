#include "main.h"
/**
* helper - function to func
* @n: int
* Return: cont
*/
int helper(int n)
{
	char INT_MIN[12] = "-2147483648";

	int connt = 0, i = 0;

	if (n == -2147483648)
	{
		while (INT_MIN[i] != '\0')
		{
			_putchar(INT_MIN[i]);
			i++;
		}
		return (i);
	}

	if (n < 0)
	{
		connt += _putchar('-');
		n *= -1;
	}
	if (n / 10)
	connt += helper(n / 10);
	connt += _putchar((n % 10) + '0');
	return (connt);
}
/**
* _printnb - print number
* @list: va_list
* Return: lent
*/
int _printnb(va_list list)
{
	int n = va_arg(list, int);

return (helper(n));
}

