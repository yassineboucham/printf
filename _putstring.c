#include "main.h"


/**
 * _stringlen - Calculate the length of a string...
 * @string: String
 *
 * Return: Length
 **/
int _stringlen(const char *string)
{
	int i;

	for (i = 0; string[i] != 0; i++)
	;

	return (i);
}

/**
 * _putstring - print char.
 * @string: string.
 *
 * Return: string length.
 */

int _putstring(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; ++i)
		_putchar(string[i]);

	return (i);
}

