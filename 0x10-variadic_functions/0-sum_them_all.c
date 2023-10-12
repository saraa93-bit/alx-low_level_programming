#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - a function that returns the sum of all its parameters
* @n: parameters number
* @sum: the sum of all parameters
* @...: the integer to sum
*
* Return: the sum of all parameters of function.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int x, pt;

	va_start(args, n);

	pt = 0;
	for (x = 0; x < n; x++)
		pt += va_arg(args, int);
	va_end(args);
	return (pt);

}
