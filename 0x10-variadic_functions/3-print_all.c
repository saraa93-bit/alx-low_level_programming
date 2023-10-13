#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - a function that prints anything
* @format: list of types of arguments passed to the function
*
* Return: 0
*/
void print_all(const char * const format, ...)
{
	int x = 0;
	char *ptr, *ap = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", ap, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", ap, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", ap, va_arg(list, double));
					break;
				case 's':
					ptr = va_arg(list, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", ap, ptr);
					break;
				default:
					x++;
					continue;
			}
			ap = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(list);
}
