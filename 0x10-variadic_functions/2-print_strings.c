#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - prints a string
 *@separator: seperator char
 *@n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list stringargs;
	char *strarg;

	va_start(stringargs, n);
	for (i = 0; i < n; i++)
	{
		strarg = va_arg(stringargs, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (strarg == NULL)
			printf("(nil)");
		else
			printf("%s", strarg);
		}
		va_end(stringargs);
		printf("\n");
}
