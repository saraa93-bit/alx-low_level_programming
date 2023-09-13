#include "main.h"
/**
* abs - gives the absolute value
*
* of an integer.
*
* @n: input number as an integer.
*
* Return: absolute value
*/


int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
