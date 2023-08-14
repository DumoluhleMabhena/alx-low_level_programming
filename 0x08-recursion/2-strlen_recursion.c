#include "main.h"
/**
 * _strlen_recursion - Rurns the length of a string.
 * @s: The string to be me
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int t = 0;

	if (*s)
	{
		t++;
		t += _strlen_recursion(s + 1);
	}

	return (t);
}
