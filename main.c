#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <assert.h>

int main(void)
{
	int len_1, len_2;

	/* ===========> %d <=========== */
	printf("----------------------\n");
	printf("--> INT(%d) CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("%d\n", -2);
	len_2 = _printf("%d\n", -2);
	printf ("len_1 = %d \nlen_2 = %d\n", len_1, len_2);
	_printf("iddi%diddiiddi\n", 1024);
	_printf("%di\n", 10);
	return (0);
}
