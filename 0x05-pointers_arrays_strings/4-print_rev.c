#include "main.h"

/**
* print_rev - toma la cadena de la funcion.
* @s: value taken from main
* Return: (0)
*/

void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
	i++;
while (i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
