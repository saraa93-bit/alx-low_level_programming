#include "main.h"
/**
* _abs - function that computes the absolute value of an integer
*
*@n: takes in integer type input for function
*
*Return: Always 0 (success)
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
