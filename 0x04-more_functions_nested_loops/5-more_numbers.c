#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14.
*/
void more_numbers(void)
{
	int i, c;

	for (i = 1; i <= 10; i++)
	{
	for (c = 0; c <= 14; c++)
	{
	if (c > 9)
		putchar(1 + 48);
	putchar((c % 10) + 48);
	}
	putchar('\n');
	}
}
