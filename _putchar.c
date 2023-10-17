#include "main.h"
#include <unistd.h>
/**
 
_putchar - this function for printing a text as a char
@c: the variable for the char
*Return: return a char
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
