#include "main.h"
/**
* main -Entry point
*
* Description: print_alphabet in lowercase from a to z by using _Putchar function
*
* Return: Always 0 (success)
*/
void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
