#include "main.h"

/**
 * _putchar - writes the character c to stdout...
 * @c: The character to print...
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putc(char c)
{
	return (car(c));
}

/**
 * buffer - Save the character in a buffer
 * @c: Character
 *
 * Return: 1
 **/

int car(char c)
{
    static char str[1]; // Declare str as an array of characters with space for 1 characters
    static int i = 0;     // Initialize i to 0

    if (i < 1) {
        str[i] = c; // Store the character in str
        i++;           // Increment i
    }

    // Write the data in the str to standard output
    write(1, str, i);

    return 1;
}


