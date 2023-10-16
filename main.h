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

	int (*f)(va_list)
} fbyf; /* func_by_flug */
void _printf(const har *format, ...);

#endif
