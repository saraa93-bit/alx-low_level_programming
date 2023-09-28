#include "main.h"

/**
* _puts_recursion -  prints a string
*
* Description: a function that prints a string, followed by a new line.
* @s: input string
*
* Return: nothing.
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
putchar(*s);
_puts_recursion(s + 1);
}
}
