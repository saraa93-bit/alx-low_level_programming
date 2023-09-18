#include "main.h"

/**
* rev_string - update value.
* @s: value to be evaluate.
* Return: not.
*/

void rev_string(char *s)
{
int i, l;
char x;
for (l = 0; s[l] != '\0'; l++)
for (i = 0; i < l / 2; i++)
	x = s[i];
	s[i] = s[l-1-i];
	s[l-1-i] = x;
}

