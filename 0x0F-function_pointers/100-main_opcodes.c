#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* main - prints the opcodes of its own main function
* @argc: the number of arguments
* @argv: an array of arguments
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int x, y;
	char *pt;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	pt = (char *)main;

	for (y = 0; y < x; y++)
	{
		if (y == x - 1)
		{
			printf("%02hhx\n", pt[y]);
			break;
		}
		printf("%02hhx ", pt[y]);
	}
	return (0);
}
