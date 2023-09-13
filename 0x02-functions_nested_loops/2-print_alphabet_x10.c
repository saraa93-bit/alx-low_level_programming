#include "main.h"
/**
* main - entry point
*
* Description: prints the alphabet 10 times in lowercase.
*/

void print_alphabet_x10(void)
{
int line, ch;

for (line = 0; line <= 9; line++)
{
for (ch = 'a'; ch <= 'z'; ch++)

putchar(ch);
putchar('\n');

}
}
