#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - a function that prints strings
* @n: number of strings passed to the function
* @separator: a string to be printed between the strings
* @...: the strings to be printed
*
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int x = n;
	char *ap;

	va_list pt;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(pt, n);
	while (x--)
		printf("%s%s", (ap = va_arg(pt, char *)), ? (ap : "(nil)",
					x ? (separator ? separator : "") : "\n");
	va_end(ap);
}
