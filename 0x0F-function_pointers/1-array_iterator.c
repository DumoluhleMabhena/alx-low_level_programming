#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array ele
 * @array: arrays that need to usedd
 * @size: how many elem to priint
 * @action: pointer to print iegular or hex
 * Return: void upon success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
