#include "main.h"
/**
* print_diagonal - draws a diagonal line
* @n: takes in an integer
*/

void print_diagonal(int n)
{
int prior, i;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0 ; i < n ; i++)
	{
		prior = i;
		while (prior > 0)
		{
			_putchar(32);
			prior--;
		}
		_putchar('\\');
		_putchar('\n');
	}
}

