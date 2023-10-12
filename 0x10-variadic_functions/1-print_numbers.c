#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers -  function that prints numbers
* @separator: the string to be printed between numbers
* @n: the number of integers passed to the function
* @...: the integer to print
*
* Return: always 0.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x = n;
	va_list pt;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(pt, n);
	while (x--)
		printf("%d%s", va_arg(pt, int), x ? (separator ? separator : "") : "\n");
	va_end(pt);

}
