#include <stdio.h>
/*
* main - Entry point
*
* Description : print alphabet capital and small letter
*
* Return : give zero is success
*/

int main(void)
{
char ch = 'a';
char CH = 'A';
while (ch <= 'z')
{
putchar (ch);
ch++;
}
while (CH <= 'Z')
{
putchar (CH);
CH++;
}
putchar ('\n');
return (0);
}
