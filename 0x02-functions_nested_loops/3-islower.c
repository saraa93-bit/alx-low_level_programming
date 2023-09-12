#include "main.h"

/**
* _isolower - function to check if charecter is lowercase
* @c: checks input of function
*
* Return: return 1 if 'c' is lowercase ,otherwise always 0 (success)
*
*/

int _isolower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	return (0);
}
