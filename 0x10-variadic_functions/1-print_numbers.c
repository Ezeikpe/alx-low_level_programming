#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints all strings with a separator
 * @separator: separe strings
 * @n: int, number of undefined arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;

va_start(list, n);

for (i = 0; i < n; i++)
{
	printf("%i", va_arg(list, int));
	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
}
va_end(list);

putchar('\n');
}
