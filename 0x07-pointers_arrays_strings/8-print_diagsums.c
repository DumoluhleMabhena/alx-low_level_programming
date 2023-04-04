#include "main.h"
/**
 * print_diagsums - funciton
 * @a: input
 * @size: input
 * Return: 0 for success
 */
void print_diagsums(int *a, int size)
{
	int SumA, SumB, d;

	SumA = 0;
	SumB = 0;

	for (d = 0; d < size; d++)
	{
		SumA = SumA + a[d * size + d];
	}
	for (d = size - 1; d >= 0; d--)
	{
		SumB = SumB + a[d * size + (size - d - 1)];
	}
	printf("%d, %d\n", SumA, SumB);
}
