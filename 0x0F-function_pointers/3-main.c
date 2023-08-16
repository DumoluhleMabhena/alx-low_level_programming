#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operati
 * @argc: The number of arguments suppto the program.
 * @argv: An array of pointers to the argume
 *
 * Return: Always 0 upon success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int numb1, numb2;
	char *ops;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	numb1 = atoi(argv[1]);
	ops = argv[2];
	numb2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || ops[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*ops == '/' && numb2 == 0) ||
	    (*ops == '%' && numb2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(ops)(numb1, numb2));

	return (0);
}
