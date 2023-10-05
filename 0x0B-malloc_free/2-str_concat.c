#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *str_concat - concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0;
	char *ptr;

	if (s1 == NULL)
		len1 = 0;
	if (s2 == NULL)
		len2 = 0;
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	ptr = malloc((len1 + len2) * sizeof(*s1) + 1);
	if (ptr == 0)
	{
		return (NULL);
	}
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		ptr[len1] = s2[i];
		len1++;
		i++;
	}
	ptr[len1] = '\0';
	return (ptr);
}
