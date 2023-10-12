#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - a function that searches for an integer
* @array: the int array
* @size: size of array
* @cmp: the compare function
*
* Return: the index of the first element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; array && size && cmp; i < size)
	{
		if (cmp(array[i]))
			return (i);

		i++;
	}
	return (-1);

}
