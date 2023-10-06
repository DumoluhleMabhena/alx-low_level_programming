#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a ing contains a non-digit char
 * @s: string to be evted
 *
 * Return: 0 if a non-it is found, 1 otherwise
 */
int is_digit(char *s)
{
	int ix = 0;

	while (s[ix])
	{
		if (s[ix] < '0' || s[ix] > '9')
			return (0);
		ix++;
	}
	return (1);
}

/**
 * _strlen - rturnse length of a string
 * @s: string tluate
 *
 * Return: the n of the string
 */
int _strlen(char *s)
{
	int ix = 0;

	while (s[ix] != '\0')
	{
		ix++;
	}
	return (ix);
}

/**
 * errors - handl ers for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplieositive numbers
 * @argc: number argums
 * @argv: arraf arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, ix, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (ix = 0; ix <= len1 + len2; ix++)
		result[ix] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (ix = 0; ix < len - 1; ix++)
	{
		if (result[ix])
			a = 1;
		if (a)
			_putchar(result[ix] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
