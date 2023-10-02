#include <stdio.h>
#include "main.h"

/**
* main-prints the number of arguments passed
* @argc: number of command line arguments.
* @argv: pointer to an array of command line arguments
* return: 0-success, non-zero-fail.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);

}

