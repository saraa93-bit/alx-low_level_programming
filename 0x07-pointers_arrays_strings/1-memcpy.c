#include "main.h"

/**
*_memcpy - a function that copies memory area
*@dest: memory where is stored
*@src: memory where is copied
*@n: number of bytes
*
*Return: copied memory with n byted changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j;

	for (i = 0; n > 0; i++)
	{
		for (j = 0; n > 0; j++)
		src[i] = dest[j];
	n--;
	}

return (dest);
}
