#include "main.h"
#include <stdio.h>
#include <math.h>

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
	if (n < 0)
	{
		return (-1);
	}
	return (_squrt_check(n, 0));
}

/**
* _squrt_check - to find natural square root
* @n: number to calculate natural square root
* @y: iterator
*
* Return: the natural square root of a number
*/

int _squrt_check(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y > n)
	{
		return (-1);
	}
	return (_squrt_check(n, y + 1));
}
