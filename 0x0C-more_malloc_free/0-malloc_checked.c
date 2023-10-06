#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked - allocates memory using malloc and exit if failed
* @b: int
* Return:  a pointer to the allocated memory or null
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
