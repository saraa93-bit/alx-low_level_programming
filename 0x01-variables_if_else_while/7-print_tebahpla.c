#include<stdio.h>
/**
* main - Entry point
*
* Description: print all lower case reverse
*
* Return: Always 0 (success)
*/
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n')
return (0);
}
