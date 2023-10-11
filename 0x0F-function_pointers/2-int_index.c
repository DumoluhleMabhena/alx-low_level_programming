#include "function_pointers.h"
/**
 * int_index - return index plac
 * @array: array of pointers
 * @size: size of elements in array is to be determined by the user
 * @cmp: pointer to func of one
 * Return: 0 upon success.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int xy;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (xy = 0; xy < size; xy++)
	{
		if (cmp(array[xy]))
			return (xy);
	}
	return (-1);
}
