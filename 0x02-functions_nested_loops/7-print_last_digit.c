#include "main.h"
/**
* print_last_digit - Print the last digit of a number
*
* @n: takes number input
*
* Return: lastDigit
*/

int print_last_digit(int n)
{
int lastDigit;
lastDigit = n % 10;
if (n < 0)
{
putchar(lastDigit + '0')
}
else
{
putchar(lastDigit + '0');
}
return (lastDigit);
}
