#include "main.h"

/**
* puts_half - update value.
* @str: value to be evaluate.
* Return: not.
*/

void puts_half(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
	i++;
for (i /= 2; str[i] != '\0'; i++)
{
	_putchar(str[i]);

}
_putchar('\n');
}

