#include "main.h"
#include <stdio.h>

int _squrt_check(int y, int x)
/**
* _sqrt_recursion - returns the natural square root of a number
*
* Description: a function returns the natural square root of a number
* @n: input number
*
* Return: the natural square root of a number
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}

	return (_squrt_check(n, 1));
}

/**
* _squrt_check - calculates natural square root
* @x: number to calculate natural square root
* @y: interate number
*
* Return: the natural square root of a number
*/

int _squrt_check(int y, int x)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y < x)
	{
		return (_squrt_check(x, y + 1));
	}

	else
	{
		return (-1);
	}
}
