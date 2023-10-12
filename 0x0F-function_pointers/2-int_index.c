#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - a function that searches for an integer
* @array: the int array
* @size: size of array
* @cmp: the compare function
*
* Return: the integer index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
		while (x < size)
		{
			if (cmp(array[x]))
				return (x);
			x++;
		}
	return (-1);

}
