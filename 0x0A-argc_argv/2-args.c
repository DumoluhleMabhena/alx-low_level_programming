#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int ix;

	for (ix = 0; ix < argc; ix++)
	{
		printf("%s\n", argv[ix]);
	}

	return (0);
}
