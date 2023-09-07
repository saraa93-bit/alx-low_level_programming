#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: variables and data types
  *
  *Return: Always 0
  */
int main(void)
{
printf("Size of char: %c byte(s)\n",sizeof(charType));
printf("Size of int: %i bytes\n", sizeof(intType));
printf("Size of float: %f bytes\n", sizeof(floatType));
printf("size of long: %ld bytes\n", sizeof(longType));
printf("Size of a long long int: %li bytes\n",sizeof(longlongintType));
return (0);

}
