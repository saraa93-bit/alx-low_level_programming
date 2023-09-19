#include "main.h"
#include <stdio.h>

/**
* _strcpy - update value.
* @dest: value to be evaluate.
* @src: value to be evaluate.
* Return: not.
*/

char *_strcpy(char *dest, char *src)
{
for (i = -1; src[i] != '\0'; i++)
{
src[i] = dest[i];
}
return (dest);

}
