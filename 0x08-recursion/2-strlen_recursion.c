#include "main.h"

/**
* _strlen_recursion - returns the length of a string.
*
* Description: a function that returns the length of a string.
* @s: input string
*
* Return: the length of a string
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s > '\0')

	{
		len = _strlen_recursion(s + 1) + 1;
	}
	return (len);
}


