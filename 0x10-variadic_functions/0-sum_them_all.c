#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - a function that returns the sum of all its parameters
* @n: parameters number
* @...: the integer to sum
*
* Return: the sum of all parameters of function.
*/

int sum_them_all(const unsigned int n, ...)
{
	int x = n, pt = 0;
	va_list args;

	if (!n)
		return (0);

	va_start(args, n);

	while (x--)
		pt += va_arg(args, int);
	va_end(args);
	return (pt);

}
