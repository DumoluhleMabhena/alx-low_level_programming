#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int inombolo, y, imiphum;
	int amacoins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	inombolo = atoi(argv[1]);
	imiphum = 0;

	if (inombolo < 0)
	{
		printf("0\n");
		return (0);
	}

	for (y = 0; y < 5 && inombolo >= 0; y++)
	{
		while (inombolo >= amacoins[y])
		{
			imiphum++;
			inombolo -= amacoins[y];
		}
	}

	printf("%d\n", imiphum);
	return (0);
}
