#include<stdio.h>
/**
* main - Entry point
*
* Description: print all alphabet letter from a to z
*
* Return: Always 0 (success)
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
