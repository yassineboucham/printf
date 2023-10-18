#include "main.h"
/**
* helper - function to func
* @n: long
* Return: cont
*/
int helper(long n)
{
	int connt = 0;

	if (n < 0)
	{
		connt += _putchar('-');
		n = n * (-1);
	}
	if (n / 10)
	connt += helper(n / 10);
	connt += _putchar((n % 10) + '0');
	return (connt);
}
/**
* _printnb - print number
* @nb: va_list
* Return: lent
*/
int _printnb(va_list nb)
{
	long n = va_arg(nb, long);

return (helper(n));
}
