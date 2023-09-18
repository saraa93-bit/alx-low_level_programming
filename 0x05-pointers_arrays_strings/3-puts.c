#include "main.h"
#include <unistd.h>

/**
* _puts - prints a string, to stdout
* @str: value to be evaluate.
* Return: not.
*/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n');
}
