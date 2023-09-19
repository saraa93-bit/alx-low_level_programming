#include "main.h"
#include <stdio.h>

/**
* rev_string - update value.
* @s: value to be evaluate.
* Return: not.
*/

void rev_string(char *s)
{
int i, l;
char temp;
for (l = 0; s[l] != '\0'; l++)

	for (i = 0; i < l / 2; i++)
	temp = s[i];
	s[i] = s[l - 1 - i];
	s[l - 1 - i] = temp;
}

