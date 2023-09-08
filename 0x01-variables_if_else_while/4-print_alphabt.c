#include <stdio.h>
/*
* main - Entry point
*
* Description : print lower case except e and q
*
* Return : zero is success
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
ch++;
putchar (ch);
ch++;
}
putchar ('\n');
return (0);
}
