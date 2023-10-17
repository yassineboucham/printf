#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct typd - structer
 * @c: char
 * @f: fuction to print
*/
typedef struct typd
{
	char c;

	int (*f)(va_list);
} fbyf; /* func_by_flug */
int _printf(const char *format, ...);
int _stringlen(const char *string);
int _putstring(char *string);
int _puts(va_list list);
int _putc(va_list list);
int _putchar(char c);
#endif
