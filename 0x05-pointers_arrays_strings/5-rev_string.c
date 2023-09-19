#include "main.h"
#include <stdio.h>

/**
* rev_string - update value.
* @s: value to be evaluate.
* Return: not.
*/

void rev_string(char *s)
{
	int i;
	int l;
	int n;

	for (l = 0; s[l] != '\0'; l++)

	for (i = 0; i < l / 2; i++)
{
	n = s[i];
	s[i] = s[l - 1];
	s[l - 1] = n;
	i--;


}

	}
