#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * Description: a function returns the natural square root of a number
 * @n: input number
 * @x: input number
 *
 * Return: the natural square root of a number
 */

int square(int n, int x)
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**			
* @n: input number
* @x: input number
* square - find square root of a number.
*
* Return: the natural square root of a number
*/

int square(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		return (square(n, x + 1));
	}

	else
		return (-1);
}
