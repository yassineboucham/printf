#include "main.h"


/**
 * _strlen - Calculate the length of a string...
 * @str: String
 *
 * Return: Length
 **/
int _stringlen(const char *string)
{
	int i ;

	for (i = 0; string[i] != 0; i++);

	return (i);
}

/**
 * print - print char.
 * @str: string.
 *
 * Return: string length.
 */

int _putstring(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; ++i)
		_putc(string[i]);

	return (i);
}

