#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list arg_list;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(arg_list, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(arg_list);
	printf("\n");
}
